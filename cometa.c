#include <stdio.h>

int main(int argc, char *argv[]) {

	int ano_atual, proximo_ano, remainder;

	scanf("%d", &ano_atual);
	remainder = ano_atual % 76;
	if ((ano_atual >= 2010) && (ano_atual <= 10 * 10 * 10 * 10)) {

		if (remainder == 10) {
			proximo_ano = ano_atual + 76;
		}
		else {
			proximo_ano = ano_atual + 86 - remainder;
		}
		printf("%d", proximo_ano);
	}

	return 0;
}