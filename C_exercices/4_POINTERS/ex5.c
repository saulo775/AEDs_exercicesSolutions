#include <stdio.h>
#include <string.h>

/*
    5. Faca um programa que leia dois valores inteiros e chame uma funcao que receba estes
    2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na
    segunda variavel. Escreva o conte udo das 2 variaveis na tela.
 */
typedef struct {
    int A, B;
}valor;

valor trocaPosicao(int A, int B){
    valor V;

    int  *pA;
    int  *pB;


    if(A >= B){
        pA = &A;
        pB = &B;
    }else{
        pA = &B;
        pB = &A;
    }

    V.A = *pA;
    V.B = *pB;

    return V;
}

int main() {

    valor S;
    int A;
    int B;

    printf("digite o primeiro valor: ");
    scanf("%d", &A);
    printf("digite o segundo valor: ");
    scanf("%d", &B);

    S = trocaPosicao(A, B);

    printf("A = %d\nB = %d", S.A, S.B);

    return 0;
}
