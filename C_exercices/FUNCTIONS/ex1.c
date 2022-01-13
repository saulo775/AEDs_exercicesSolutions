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
