#include <stdio.h>

int main(){
	
	int linhas, colunas, i, j, temp, *int_entrada, *int_resultados;	

	scanf("%d", &linhas);

	colunas = 1;

	int_entrada = (int *)malloc(sizeof(int) * colunas * linhas);	
	int_resultados = (int *)malloc(linhas * sizeof(int));
	
	for(i = 0; i < linhas; i++) {
		for(j = 0; j < colunas; j+=2) {
			printf("Type the matrix numbers\n");
			scanf("%d %d", &int_entrada[i*linhas +j], &int_entrada[i*linhas + j+1]);			
		}
	}


	printf("Teste\n");
	for (i = 0; i < linhas; i++) {
		for (j = 0; j < colunas; j++) {
			printf("Number: %d %d \n", int_entrada[i*linhas + j], int_entrada[i*linhas + j + 1]);
		}
	}

	free(int_entrada);
	free(int_resultados);
	return 0;

}