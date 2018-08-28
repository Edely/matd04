#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int ano_atual, proximo_ano, remainder;

	//ano_atual = atoi(argv[1]);
	scanf('%d', ano_atual);
	remainder = ano_atual % 76;
	if ((ano_atual >= 2010) && (ano_atual <= 10 * 10 * 10 * 10)) {

		if (remainder == 10) {
			proximo_ano = ano_atual + 76;
		}
		else {
			proximo_ano = ano_atual + 86 - remainder;
		}
	}

	printf("%i", proximo_ano);

	return 0;
}