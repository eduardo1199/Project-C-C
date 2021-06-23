#include <stdio.h>
#include <stdbool.h>

int main()
{
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;
    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor); //a uma troca de valor no enderaço de memoria na qual foi guardado o 10, correto valor esperado. saida = 20;

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);//a uma troca de valor no enderaço de memoria na qual foi guardado o 29.0, correto valor esperado. saida = 29.0

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux); //expressão pega o endereço na memoria do primeiro caractere do vetor de caracteres "Ponteiros", que no caso é P. Saida = P

    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);//expressão pega o endereço na memoria do elemento de índice 4  do vetor de caracteres "Ponteiros", que no caso é e. Saida = e

    /* (e) */
    p3 = nome;
    printf("%c \n", *p3);//era de se esperar o valor "Ponteiros" como saida, mas quando voce aponta um ponteiro para um vetor de caractere sem expressar o endereço de me-
    //moria ele vai pegar o primeiro elemento. Saida = P

    /* (f) */
    p3 = p3 +4;
    printf("%c \n", *p3);//o que aconteceu foi um andamento de 4 bytes dentro da memoria do localizada no vetor, pegando o caractere de "e" como resultado saida = e

    /* (g) */
    p3--;
    printf("%c \n", *p3);//o que aconteceu foi um decremento de 1 bytes dentro da memoria do localizada no vetor, pegando o caractere de "t" como resultado saida = e

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);//mesma situação do vetor de caracteres, o que foi pego foi o primeiro elemento do vetor localizado na memoria. saida = 31

    /* (i) */
    p5 = p4 +1;
    idade = *p5;
    printf("%d \n", idade);//houve uma atribuição em p5 do vetor através de sua localização na memoria, dessa forma foi acrescentado um andamento de 1 byte para o valor de
    // 45. saida = 45

    /* (j) */
    p4 = p5 +1;
    idade = *p4;
    printf("%d \n", idade);//houve uma atribuição em p4 do vetor através de sua localização na memoria, dessa forma foi acrescentado um andamento de 1 byte para o valor de
    // 27. saida = 27

    /* (l) */
    p4 = p4 -2;
    idade = *p4;
    printf("%d \n", idade);//decresmo de bytes para primeira posição do vetor. saida = 31

    /* (m) */
    p5 = &vetor[2] - 1;//P5 armazena o valor na memoria da posição do elemento de índice 1, seguida imprime o valor naquela memoria.
    printf("%d \n", *p5);
    /* (n) */
    p5++;
    printf("%d \n", *p5);//acrescimento de 1 bytes para localização do elementoo de índice 2 no vetor.
    return(0);
}
