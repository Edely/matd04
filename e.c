#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int N, joao, pedro, resto, i, j;
    
    scanf("%d", &N);
    j = 0;
    while(N != 0){
        printf("aqui");
        resto = 0;
        j++;        
        printf("Teste %i\n", j);     
        for(i = 0; i < N; i++){
            printf("i %d\n", i);    
            scanf("%d %d", &joao, &pedro);
            resto += joao - pedro;
            printf("%d\n", resto);        
        }
        printf("digite n\n");
        scanf("%d", &N);
    }

    return 0;
}