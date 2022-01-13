#include <stdio.h>
#include <math.h>
/*
    6. A multiplicac¸ao de dois numeros inteiros pode ser feita atraves de somas sucessivas.
    Proponha um algoritmo recursivo Multip Rec(n1,n2) que calcule a multiplicacao de dois
    inteiros.
 */

int multiplicateRecursive(int n1, int n2){
    if(n2 == 0){
        return 0;
    }else{
        return n2 + multiplicateRecursive(n1, n2-1);
    }
}

int main() {
    int numero1, numero2;

    printf("digite 2 numeros:");
    scanf("%d %d", &numero1, &numero2);

    printf("%d X %d = %d", numero1, numero2, multiplicateRecursive(numero1, numero2));

    return 0;
}

