#include <stdio.h>

struct conjunto_de_testes {
	int numero_de_testes;
	int *conjunto;
};

struct teste {
	int posicao_teste;
	//ponteiro onde será armazenado o endereço de cada conjunto de testes - int_entrada 
	int *valores_teste;
};


int main(){
	
	int linhas, colunas, i, j, num_teste, *int_entrada, *p_teste, temp;	

	scanf("%d", &linhas);
	num_teste = 1;
	colunas = 1;
	temp = 0;

	typedef struct conjunto_de_testes t_conjunto_teste;
	typedef struct teste t_teste;

	t_conjunto_teste conjunto;

	while (linhas != 0) {

		
		int_entrada = (int *)malloc(sizeof(int) * colunas * linhas);
		//int_resultados = (int *)malloc(linhas * sizeof(int));

		
		//a cada vez que digitar o valor de n criar struct teste
		t_teste teste;

		teste.posicao_teste = num_teste;
		teste.valores_teste = int_entrada;
		
		printf("endereco de ponteiro int_entrada %p\n", int_entrada);
		printf("endereco de int_entrada %d\n", &int_entrada);
		printf("endereco de teste.valores_teste %d\n", teste.valores_teste);

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
		//free(int_resultados);
		
		// adicionar o teste ao struct conjunto de testes



		// imprimir 


		num_teste++;
		temp = 0;
		scanf("%d", &linhas);
	}

	return 0;

}