#include <stdio.h>
#include <string.h>

/*
    4. Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas
    2 variaveis e troque o seu conteudo, ou seja, esta funcao e chamada passando duas
    variaveis A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B
    tera o valor de A.
 */

void trocaPosicao(int A, int B){
    int  *pA;
    int  *pB;
    int aux;

    pA = &A;
    pB = &B;

    printf("A %d\n", A);
    printf("B %d\n", B);

    printf("pA %d\n", *pA);
    printf("pB %d\n", *pB);

    printf("\n\n\n\n\n");

    aux = A;
    A = *pB;
    B = aux;

    printf("A %d\n", A);
    printf("B %d\n", B);

    printf("pA %d\n", *pA);
    printf("pB %d\n", *pB);
}

int main() {

    int A = 10;
    int B = 20;

    trocaPosicao(A, B);

    return 0;
}
