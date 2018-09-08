#include <stdio.h>
#include <stdlib.h>

int main(){
    int d, i, temp, lista_digitos[50];
    scanf("%d", &d);

    for(i = 0; i < d; i++){
        scanf("%d", &lista_digitos[i]);
    }
    for(i = 0; i < d; i++){
        if(i != 0 && i != d-1 ){
            temp = lista_digitos[i] + lista_digitos[i-1] + lista_digitos[i+1];            
            printf("%d ", temp);
        }
        else if(i == 0){
            temp = lista_digitos[i] + lista_digitos[i+1];
            printf("%d ", temp);
        }
        else if(i == d-1){
            temp = lista_digitos[i] + lista_digitos[i-1];
            printf("%d \n", temp);
        }
        
    }
    return 0;
}