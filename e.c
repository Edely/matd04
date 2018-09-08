#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int N, joao, pedro, resto, i;
    
    scanf("%d\n", &N);

    
    while(N != 0){
        resto = 0;
        for(i = 0; i < N; i++){
            scanf("%d %d\n", &joao, &pedro);
            resto += joao - pedro;
        
            printf("resto\n");     
            printf("%d\n", resto);        
        }
        
        scanf("%d\n", &N);
    }

    return 0;
}