#include <stdio.h>

/*
    2. Faca uma funcao recursiva que calcule e retorne o fatorial de um numero inteiro N.
 */

int fatorial(int n){
   if(n == 0){
       return 1;
   }else{
       return n * fatorial(n-1);
   }
}

int main() {
    int numero;
    printf("digite um numero: ");
    scanf("%d", &numero);

    printf("fatorial: %d", fatorial(numero));

    return 0;
}
