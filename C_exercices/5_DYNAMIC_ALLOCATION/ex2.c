#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    2. Faca um programa que leia do usuario o tamanho de um vetor a ser lido e faca a alocacao
    dinamica de memoria. Em seguida, leia do usuario seus valores e imprima o vetor lido.
 */

int main() {

    int *p;
    int tam;

    printf("Tamanho vetor: ");
    scanf("%d", &tam);

    p = (int *) malloc(tam * sizeof(int));

    if (p == NULL){
        printf("ERRO: sem memoria!\n");
        exit(1);
    }

    for (int i = 0; i < tam; ++i) {
        printf("p[%d] = ", i);
        scanf("%d", &p[i]);
    }
    printf("\n");

    for (int i = 0; i < tam; ++i) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);


    return 0;
}
