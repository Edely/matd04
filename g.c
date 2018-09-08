#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    int N, P, inteiro, resto;

    scanf("%d %d", &N, &P);

    while(! ((N == 0) && (P == 0)) ){

        printf("%d %d\n", N, P);

        inteiro = N / P;
        inteiro += N % P > 0 ? 1: 0;

        printf("Inteiro: %d\n", inteiro);

        if(inteiro <=6){
            printf("Poodle\n");
        }
        else if(inteiro>=20){
            printf("Poooooooooooooooodle\n");
        }
        else{
            printf("tem que ver isso ai\n");
        }
        scanf("%d %d", &N, &P);
    }
    return 0;
}