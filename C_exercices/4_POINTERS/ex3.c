#include <stdio.h>
#include <string.h>

/*
    3. Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do
    teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco.
 */

int main() {

    int varInt1, *pInt1;
    int varInt2, *pInt2;

    pInt1 = &varInt1;
    pInt2 = &varInt2;


    printf("digite o primeiro valor: ");
    scanf("%d", &varInt1);
    printf("digite o segundo valor: ");
    scanf("%d", &varInt2);

    printf("endereco de varInt2 = %d\n", pInt2);
    printf("endereco de varInt1 = %d\n", pInt1);

    if(pInt1 > pInt2){
        printf("valor de varInt1 = %d", varInt1);
    }else{
        printf("valor de varInt2 = %d", varInt2);
    }

    return 0;
}
