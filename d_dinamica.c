#include <stdio.h>
#include <stdlib.h>

//digitos
struct digito{
    int valor;
    struct digito* anterior;
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

int insere_lista_inicio(Lista *li, struct digito Elemento){
    if(li == NULL) return 0;
    Elemento *no = (Elemento*) malloc(sizeof(Elemento));
}

int main(int argc, char *argv[]){

    int tam, vazia;
    Lista *li;

    li = cria_lista();

    tam = tamanho_lista(li);
    vazia = tamanho_lista(li);
    
    libera_lista(li);
    return 0;
}