#include <stdio.h>
#include <math.h>
/*
    5. Faca uma funcao recursiva que calcule e retorne o N-esimo termo da sequencia Fibonacci.
    Alguns numeros desta sequencia sao: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
 */

int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }else{
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    int n_esimo;
    printf("digite um numero: ");
    fflush(stdin);
    scanf("%d ", &n_esimo);
    fflush(stdin);


    printf("n-esimo termo: %d", fib(n_esimo));
    return 0;
}
