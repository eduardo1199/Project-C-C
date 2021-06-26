#include <stdio.h>
#include <stdbool.h>

int main(){
    char vet[4] = "abcd";
    char *p;
    char aux;
    p = vet+1;
    aux = *p;
    printf("resultado = %d \n", aux);
    p = vet+2;
    aux = *p;
    printf("resultado = %d \n", aux);
    p = vet+3;
    aux = *p;
    printf("resultado = %d \n", aux);


    return(0);
}

