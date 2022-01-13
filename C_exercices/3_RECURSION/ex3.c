#include <stdio.h>
#include <math.h>

/*
    3. Escreva uma funcao recursiva que calcule a soma dos primeiros ˜ n cubos: S(n) = 1^3 +2^3 + ... + n^3
 */

int somatorio(int n){
   if(n==1){
       return 1;
   }else{
       return pow(n, 3) + somatorio(n-1);
   }
}

int main() {
    int numero;
    printf("digite um numero: ");
    scanf("%d", &numero);

    printf("fatorial: %d", somatorio(numero));

    return 0;
}
