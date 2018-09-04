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
	char temp;
	scanf("%d %d", &S, &I);
	t_soldado lista_soldados[100];

	printf("\n");
	//printf("%d %d\n", S, I);
	printf("Valor de I: %dn", I);

	//ler os nomes
	for(i = 0; i < S; i++){
		printf("%d\n", i);
		scanf("%c", &temp);
		scanf("%[^\n]", (lista_soldados[i]).nome );
	}

	printf("\n");

	for (i = 0; i < S; i++) {
		if ((i + 1) == I)
			printf("\nGANHADOOOOORRRR, POORRAAAA!!!\n");
		printf("%s\n", (lista_soldados[i]).nome);
	}
	
	return 0;
}