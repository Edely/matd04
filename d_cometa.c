#include <stdio.h>
#include <stdlib.h>

#define ULTIMOANO 1986

int main(int argc, char *argv[]) {
	int anoAtual;

	anoAtual = atoi(argv[1]);
	int proximoAno;
	int diferencaAnos = anoAtual - ULTIMOANO;

	if ((anoAtual >= 2010) && (anoAtual <= 10 * 10 * 10 * 10)) {
		if (diferencaAnos % 76 == 0) {
			proximoAno = anoAtual + 76;
		}
		else {
			proximoAno = 76 - (diferencaAnos % 76) + anoAtual;
		}
		printf("%d", proximoAno);
	}

	return 0;

}