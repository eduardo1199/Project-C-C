#include <stdio.h>
#include <stdbool.h>

int main()
{
    int mat[4], *p, x;
    p = mat + 1;
    printf("resultado = %d \n", p);
    p = mat++;
    printf("resultado = %d \n", p);
    p = ++mat;
    printf("resultado = %d \n", p);
    x = (*mat)++;
    printf("resultado = %d \n", x);
    return(0);
}
