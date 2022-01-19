#include <stdio.h>
#include <string.h>

/*
    2. Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e
    exiba o maior endereco.
 */

int main() {

    int varInt1 = 45, *pInt1;
    int varInt2 = 12, *pInt2;

    pInt1 = &varInt1;
    pInt2 = &varInt2;


    /*
        printf("endereco de varInt2 = %d\n", pInt2);
        printf("endereco de varInt1 = %d\n", pInt1);
     */


    if(pInt1 > pInt2){
        printf("endereco de varInt1 = %d", pInt1);
    }else{
        printf("endereco de varInt2 = %d", pInt2);
    }



    return 0;
}
