#include <stdio.h>
#include <stdbool.h>

int main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
    printf("%d \n",*(vet+i));
    }
    for(i=0;i<3;i++){
    printf("%X \n",vet+i);
    }
    return(0);
}