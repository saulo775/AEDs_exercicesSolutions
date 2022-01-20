#include <stdio.h>
#include <stdlib.h>

/*
    5. Faca um programa que leia um numero N e:
    • Crie dinamicamente e leia um vetor de inteiro de N posicoes;
    • Leia um numero inteiro X e conte e mostre os multiplos desse numero que existem
    no vetor.
 */

int main(){

    unsigned int N;
    unsigned int X;
    int cont = 0;
    int *pN;

    printf("Digite N: ");
    scanf("%d", &N);

    pN = (int *) malloc(N * sizeof(int));

    if (pN == NULL){
        printf("ERRO: Impossivel alocar memoria!!!\n");
        exit(1);
    }

    for (int i = 0; i < N; ++i) {
        printf("pN[%d] = ", i);
        scanf("%d", &pN[i]);
    }

    printf("Digite um valor X: ");
    scanf("%d", &X);

    for (int i = 0; i < N; ++i) {
        if (pN[i] % X == 0){
            cont++;
        }
    }
    printf("Há %d multiplos de %d no vetor", cont, X);

    return 0;
}