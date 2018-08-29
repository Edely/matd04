#include <stdio.h>

int main(){
	
	int linhas, colunas, i, j, num_teste, *int_entrada, *int_resultados, temp, a, b;	

	scanf("%d", &linhas);
	num_teste = 1;
	colunas = 1;
	temp = 0;

	while (linhas != 0) {
		int_entrada = (int *)malloc(sizeof(int) * colunas * linhas);
		int_resultados = (int *)malloc(linhas * sizeof(int));

		for (i = 0; i < linhas; i++) {
			for (j = 0; j < colunas; j += 2) {
				scanf("%d %d", &int_entrada[i*linhas + j], &int_entrada[i*linhas + j + 1]);
			}
		}

		printf("Teste %d \n", num_teste);
		for (i = 0; i < linhas; i++) {
			for (j = 0; j < colunas; j++) {
				temp = temp + int_entrada[i*linhas + j] - int_entrada[i*linhas + j + 1];
				printf("%d\n", temp);
			}
		}
		printf("\n");

		free(int_entrada);
		free(int_resultados);

		num_teste++;
		temp = 0;
		scanf("%d", &linhas);
	}

	return 0;

}