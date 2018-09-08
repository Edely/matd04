// S pedaços de pergaminhos numerados de 1 a S
// sorteia numero I

//1 ≤ I ≤ S ≤ 100

// ler primeira linha
// ler demais nomes
// ordena por ordem alfabetica
// seleciona o I-esimo por ordem alfabetica

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparastring(const void* a, const void* b) { 
    const char* aa = (const char*)a;
    const char* bb = (const char*)b;
    return strcmp(aa, bb);
}

int main(int argc, char *argv[]) {
	//ler primeira linha
	int S, I, i;
	char temp;
	char lista_soldados_ordenada[100][20];

	//ler numer de soldados e vencedor
	scanf("%d %d", &S, &I);
	
	//ler os nomes
	for(i = 0; i < S; i++){
		scanf("%c", &temp);
		scanf("%[^\n]", (lista_soldados_ordenada[i]) );
	}

	qsort(lista_soldados_ordenada, S, 20, comparastring);

	for(i = 0; i < S; i++){
		if(i+1 == I){
			printf("%s\n", lista_soldados_ordenada[i]);
		}
		
	}
	return 0;
}