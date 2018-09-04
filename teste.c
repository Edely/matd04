#include <stdio.h>

struct {
	int teste;
} x;

int main() {
	x.teste = 30;

	printf("%i", x.teste);

	return 0;
}