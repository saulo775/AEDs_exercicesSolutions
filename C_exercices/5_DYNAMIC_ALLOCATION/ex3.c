#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    3. Fac¸a um programa que leia do usuario o tamanho de um vetor a ser lido e fac¸a a alocac¸ ´ ao˜
    dinamica de mem ˆ oria. Em seguida, leia do usu ´ ario seus valores e mostre quantos dos ´
    numeros s ´ ao pares e quantos s ˜ ao˜ ´ımpares.
 */

int main() {

    int *p;
    int tam;
    int pares = 0, impares = 0;

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
        if (p[i] % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }

    printf("Ha %d pares\nHa %d impares", pares, impares);

    free(p);


    return 0;
}
