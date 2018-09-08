#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int N, P, inteiro, resto;

    scanf("%d %d", &N, &P);

    while(! ((N == 0) && (P == 0)) ){

        printf("%d %d\n", N, P);
        inteiro = N / P;
        inteiro += N % P > 0 ? 1: 0;
        printf("Inteiro: %d\n", inteiro);

        scanf("%d %d", &N, &P);
    }
    return 0;
}