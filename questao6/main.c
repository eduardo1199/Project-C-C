#include <stdio.h>
#include <stdbool.h>

int main()
{
    int pulo[5] = {1,2,3,4,5};
    int *i;
    printf("resultado = %d \n",*(pulo + 2));
    printf("resultado = %d \n",*(pulo + 4));
    printf("resultado = %d \n",pulo + 4);
    printf("resultado = %d \n",pulo + 2);
    return(0);
}
