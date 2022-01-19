#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    1. Crie um programa que:
        (a) Aloque dinamicamente um array de 5 numeros inteiros,
        (b) Peca para o usuario digitar os 5 numeros no espaco alocado,
        (c) Mostre na tela os 5 numeros,
        (d) Libere a memoria alocada.
 */

int main() {

    int *p;

    p = (int *) malloc(5 * sizeof(int));

    if (p == NULL){
        printf("ERRO: sem memoria!\n");
        exit(1);
    }

    for (int i = 0; i < 5; ++i) {
        printf("p[%d] = ", i);
        scanf("%d", &p[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);


    return 0;
}
