#include <stdio.h>
/*
struct {
	int teste;
} x;

int main() {
	x.teste = 30;

	printf("%i", x.teste);

	return 0;
}

*/

int main()
{
	char name[30];
	printf("Enter name: ");
	scanf("%[^\n]", name);

	printf("Name is: %s\n", name);
	return 0;
}