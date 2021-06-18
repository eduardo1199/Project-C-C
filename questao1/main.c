#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i=3,j=5;
    int *p, *q;
    bool expression1;
    p = &i;
    q = &j;

    //operação de igualdade vefica se o a localização da memoria guardada em p é igual a de i, nesse caso retorna 1. para true
    expression1 = p == &i;

    printf("valor da primeira expressao = %d \n", expression1);
    //operação com os valores
    printf("resposta da segunda expressao = %d \n", *p - *q);

    //acessando o valor a partir do endereço na memoria
    printf("valor da terceira expressao = %d \n", **&p);

    //operação com os valores 
    printf("valor da quarta expressao = %d \n", 3 - *p/(*q) + 7);
}
