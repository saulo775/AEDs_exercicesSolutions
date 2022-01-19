#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fac¸a uma func¸ao˜
    que retorne a soma do dobro dos dois numeros lidos. A func¸ ´ ao dever ˜ a armazenar o dobro ´
    de A na propria vari ´ avel A e o dobro de B na pr ´ opria vari ´ avel B.
 */

int sumDouble(int A, int B){
    int  *pA;
    int  *pB;

    printf("A = %d\n", A);
    printf("B = %d\n", B);

    pA = &A;
    pB = &B;

    *pA = *pA * 2;
    *pB = *pB * 2;

    printf("pA = %d\n", *pA);
    printf("pB = %d\n", *pB);

    printf("A = %d\n", A);
    printf("B = %d\n", B);

    int sum = A + B;

    return sum;
}

int main() {

    int A;
    int B;

    printf("digite o primeiro valor: ");
    scanf("%d", &A);
    printf("digite o segundo valor: ");
    scanf("%d", &B);


    printf("soma = %d", sumDouble(A, B));

    return 0;
}
