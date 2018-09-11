#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparastring(const void* a, const void* b) { 
    const char* aa = (const char*)a;
    const char* bb = (const char*)b;
    return strcmp(aa, bb);
}

struct soldado{
    char nome[20];
    struct soldado* proximo;
};

typedef struct soldado *Lista;
typedef struct soldado Elemento;

Lista* cria_lista(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

int insere_lista_fim(Lista *li, char proximo_nome){
    if(li == NULL) return 0;
    Elemento *no = malloc( sizeof(Elemento) );
    if(no == NULL) return 0;
    no->nome = proximo_nome;
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

int main(int argc, char *argv[]) {
	//ler primeira linha
	int S, I, i;
    Lista *li;
    char name_temp[20];
    char temp;
	
	//ler numer de soldados e vencedor
	scanf("%d %d", &S, &I);

    li = cria_lista();

    for(i = 0; i < S; i++){
        scanf("%c", &temp);
        scanf("%[^\n]", &name_temp );
    }

	return 0;
}