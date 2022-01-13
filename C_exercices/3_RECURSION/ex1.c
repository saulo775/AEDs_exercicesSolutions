#include <stdio.h>

/*
    1. Crie uma funcao recursiva que receba um numero inteiro positivo N e calcule o somatorio
    dos numeros de 1 a N.
 */

int Somatorio(int n){
    if (n == 0){
        return 0;
    }else{
        return n + Somatorio(n-1);
    }
}

int main() {
    int numero;
    printf("digite um numero: ");
    scanf("%d", &numero);

    printf("Somatorio: %d", Somatorio(numero));

    return 0;
}
