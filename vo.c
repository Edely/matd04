#include <stdio.h>

struct conjunto_de_testes {
	int numero_de_testes;
	int *conjunto;
};

struct teste {
	int posicao_teste;
	int *valor_teste;
};


int main(){
	
	int linhas, colunas, i, j, num_teste, *int_entrada, *int_resultados, temp;	

	scanf("%d", &linhas);
	num_teste = 1;
	colunas = 1;
	temp = 0;

	typedef struct conjunto_de_testes t_conjunto_teste;
	typedef struct teste t_teste;

	t_conjunto_teste conjunto;

	while (linhas != 0) {

		
		int_entrada = (int *)malloc(sizeof(int) * colunas * linhas);
		int_resultados = (int *)malloc(linhas * sizeof(int));

		//a cada vez que digitar o valor de n criar struct teste
		t_teste teste;

		teste.posicao_teste = num_teste;
		//teste.valor_teste = 8;
		

		for (i = 0; i < linhas; i++) {
			for (j = 0; j < colunas; j += 2) {
				scanf("%d %d", &int_entrada[i*linhas + j], &int_entrada[i*linhas + j + 1]);				
			}
		}

		//atualizar  a posicao do teste

		//printf("Teste %d \n", num_teste);
		for (i = 0; i < linhas; i++) {
			for (j = 0; j < colunas; j++) {
				temp = temp + int_entrada[i*linhas + j] - int_entrada[i*linhas + j + 1];
				


				//printf("%d\n", temp);
			}
		}
		printf("Teste %d\n", teste.posicao_teste);
		//printf("Posicao na memória %d\n", teste.valor_teste);
				
		free(int_entrada);
		free(int_resultados);
		
		// adicionar o teste ao struct conjunto de testes



		// imprimir 


		num_teste++;
		temp = 0;
		scanf("%d", &linhas);
	}

	return 0;

}