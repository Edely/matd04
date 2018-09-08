#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    int N, P, inteiro, resto, i;

    char ini[2] = {'P', '\0'};
    char fim[4] = {'d', 'l', 'e', '\0'};

    scanf("%d %d", &N, &P);

    while(! ((N == 0) && (P == 0)) ){

        inteiro = N / P;
        inteiro += N % P > 0 ? 1: 0;

        if(inteiro <=6){
            printf("Poodle\n");
        }
        else if(inteiro>=20){
            printf("Poooooooooooooooodle\n");
        }
        else{
            printf("%s", ini);
            
            resto = inteiro - 4;

            for(i = 0;i < resto; i++){
                printf("o");
            }

            printf("%s\n", fim);
        }
        scanf("%d %d", &N, &P);
    }
    return 0;
}