#include <stdio.h>
#include <stdlib.h>

//digitos
struct digito{
    int valor;
    struct digito* proximo;
};

typedef struct digito *Lista;
typedef struct digito Elemento;

Lista* cria_lista(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

void libera_lista(Lista *li){
    if( li != NULL){
        Elemento *no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->proximo;
            free(no);
        }
        free(li);
    }
}

int tamanho_lista(Lista *li){
    if(*li == NULL) return 0;
    int count = 0;
    Elemento *no = *li;
    while(no != NULL){
        count++;
        no = no->proximo;
    }
    return count;
}

int lista_vazia(Lista *li){
    if(li == NULL)
        return 1;
    if(*li == NULL)
        return 1;
    return 0;
}

int insere_lista_inicio(Lista *li, int proximo_numero){
    if(li == NULL) {
        printf("here\n");
        return 0;
    }
    Elemento *no = malloc( sizeof(Elemento) );
    if(no == NULL) {
        printf("ACA\n");
        return 0;
    }
    no->valor = proximo_numero;
    no->proximo = (*li);
    *li = no;
    printf("aqui\n");
    return 1;
}

int insere_lista_fim(Lista *li, int proximo_numero){
    if(li == NULL) return 0;
    Elemento *no = malloc( sizeof(Elemento) );
    if(no == NULL) return 0;
    no->valor = proximo_numero;
    no->proximo = NULL;
    if( (*li) == NULL ){
        *li = no;
    }else{
        Elemento *aux = *li;
        while(aux->proximo != NULL){
            aux = aux-> proximo;
        }
        aux->proximo = no;
    }
    return 1;
}

int insere_lista_ordenada(Lista *li, int proximo_numero){
    if(li == NULL) return 0;
    Elemento *no = malloc( sizeof(Elemento) );
    if(no == NULL) return 0;
    no->valor = proximo_numero; 
    if( (*li) == NULL ){
        no->proximo == NULL;
        *li == no;
        return 1;
    }
    else{
        Elemento *ant, *atual = *li;
        while(atual != NULL && atual->valor < proximo_numero){
            ant = atual;
            atual = atual->proximo;
        }

        if(atual == *li){
            no->proximo = (*li);
            *li = no;
        }else{
            no->proximo = ant->proximo;
            ant->proximo = no;
        }

        return 1;
    }
    return 1;
}

int remocao_lista_inicio(Lista *li){
    if(li == NULL) return 0;
    if((*li) == NULL) return 0;
    Elemento *no = *li;
    *li = no->proximo;
    free(no);
    return 1;
}

int remocao_lista_final(Lista *li){
    if(li == NULL) return 0;
    if((*li) == NULL) return 0;
    Elemento *ant, *no = *li;
    while(no->proximo != NULL){
        ant = no;
        no = no->proximo;
    }
    if(no == (*li))
        *li = no->proximo;
    else    
        ant->proximo = no->proximo;
    free(no);
    return 1;
}

int remocao_lista_elemento(Lista *li, int val){
    if(li == NULL) return 0;
    if((*li) == NULL) return 0;
    Elemento *no, *ant = *li;
    while(no != NULL && no->valor != val ){
        ant = no;
        no = no->proximo;
    }
    if(no == NULL) return 0;
    if(no == *li)
        *li = no->proximo;
    else
        ant->proximo = no->proximo;
    free(no);    
    return 1;
}

int consulta_lista_posicao(Lista *li, int pos){
    if( li == NULL || pos < 0 ) return 0;
    Elemento *no = *li;
    int i = 0;
    while(no != NULL && i < pos){
        no = no->proximo;
        i++;
    }
    if(no == NULL)
        return 0; 
    else return no->valor;
}

int consulta_lista_valor(Lista *li, int val){
    if( li == NULL ){
        //printf("here\n");
        return  0;
    } 
    Elemento *no = *li;
    int posicao = 0;

    //printf("aqui\n");
    while( no != NULL && no->valor != val){
        no = no->proximo;
        posicao ++;
    }
    //printf("aca\n");
    if(no == NULL){
        //printf("aala\n");
        return 0;
    }   
    else{
        //printf("ca\n");
        return posicao;
    } 
}

int retorna_todos_valores(Lista *li){
    if(li == NULL) return 0;
    if((*li) == NULL) return 0;
    Elemento *no = *li;
    printf("Valores da lista:\n ");
    while(no != NULL){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n");
    return 0;
}

int main(int argc, char *argv[]){

    int tam, vazia;
    Lista *li;

    li = cria_lista();

    //tam = tamanho_lista(li);
    //vazia = tamanho_lista(li);
    
    //libera_lista(li);

    //insere_lista_inicio(li, 5);
    insere_lista_fim(li, 1);
    insere_lista_fim(li, 5);
    insere_lista_fim(li, 3);

    retorna_todos_valores(li);
    //int valor_retornado = consulta_lista_posicao(li, 2);
    //printf("%d\n", valor_retornado);
    //remove_lista_inicio(li);
    remocao_lista_final(li);
    //printf("%d\n", valor_retornado);
    retorna_todos_valores(li);

    insere_lista_fim(li, 6);
    //valor_retornado = consulta_lista_posicao(li, 2);
    //printf("%d\n", valor_retornado);
    retorna_todos_valores(li);

    insere_lista_inicio(li, 8);
    //valor_retornado = consulta_lista_posicao(li, 2);
    //printf("%d\n", valor_retornado);

    retorna_todos_valores(li);

    //int valor_retornado = consulta_lista_valor(li, 5);

    

    return 0;
}