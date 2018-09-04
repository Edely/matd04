#include <stdio.h>

int main() {

	int i, j, lines, columns, *intMatrix;

	printf("Type the matrix lines:\t");
	scanf("%d", &lines);
	printf("Type the matrix columns:\t");
	scanf("%d", &columns);

	intMatrix = (int *)malloc(lines * columns * sizeof(int));

	for (i = 0; i < lines; ++i)
	{
		for (j = 0; j < columns; ++j)
		{
			printf("Type a number for <line: %d, column: %d>\t", i + 1, j + 1);
			scanf("%d", &intMatrix[i*lines + j]);
		}

	}

	return 0;
}