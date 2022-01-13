#include <stdio.h>
#include <stdlib.h>

void returnDouble(int *n){
    *n = *n * 2;
    printf("%d", *n);
}

int main() {
    int numero;
    printf("digite um numero: ");
    scanf("%d", &numero);

    returnDouble(&numero);

    printf("\n%d", numero);

    return 0;
}

2. Fac¸a uma func¸ao que receba a data atual (dia, m ˜ es e ano em inteiro) e exiba-a na tela ˆ
no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de
2000.