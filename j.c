// S pedaços de pergaminhos numerados de 1 a S
// sorteia numero I

//1 ≤ I ≤ S ≤ 100

// ler primeira linha
// ler demais nomes
// ordena por ordem alfabetica
// seleciona o I-esimo por ordem alfabetica

#include <stdio.h>
#include <stdlib.h>

struct soldado{
	char nome[20];
};

typedef struct soldado t_soldado;

int main(int argc, char *argv[]) {
	//ler primeira linha
	int S, I, i;
	char nome_temp[20];
	t_soldado lista_soldados[100];
	t_soldado lista_soldados_ordenada[100];

	//ler numer de soldados e vencedor
	scanf("%d %d", &S, &I);
	
	//ler os nomes
	for(i = 0; i < S; i++){
		scanf("%c", &temp);
		scanf("%[^\n]", (lista_soldados[i]).nome );
	}
	/*
	for (i = 1; i <= S; i++) {
		if (i == 0) {
			(lista_soldados_ordenada[i]).nome = (lista_soldados[i]).nome
		}
		else (lista_soldados_ordenada[i]).nome[0] = (lista_soldados[i]).nome[0]) {
			//printf("\nGANHADOOOOORRRR, POORRAAAA!!!\n");
			printf("%s\n", (lista_soldados[i]).nome);
		}		
		
	}
	*/
	return 0;
}