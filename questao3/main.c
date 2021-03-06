#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i = 3, j = 2;
    int *p, *q;

    p = i; // atribuição correta valor esparado 3
    printf("valor = %d \n", p);
    q = &j; //correta atribuição correta, pegar o valor do endereço na memorario do valor de j
    printf("valor = %d \n", q);
    p = &*&i;//correta atribuição correta, pegar o valor do endereço na memorario do valor de i
    printf("valor = %d \n", p);
    //i = (*&)j; //erro de compilação porque não é possivel atribuir *&
    //printf("valor = %d \n", i);
    i = *&j;// atribuição correta valor esparado 2
    printf("valor = %d \n", i);
    i = *&*&j;// atribuição correta valor esparado 2
    printf("valor = %d \n", i);
    q = *p; // essa atribuição é incorreta, está pegando o valor que está na memoria mas a atribuição a um ponteiro, correto é remover o (*)
    printf("valor = %d \n", q);
    i = (*p)++ + *q;//atrbuição correta, soma dos valores de 3 e 2
    printf("valor = %d \n", i);
}
