#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i=5, *p;
    p = &i;

    //localização diferente do 5 na memoria
    printf("%x %d %d %d %d \n", p,*p+2,**&p,3**p,**&p+4);
}