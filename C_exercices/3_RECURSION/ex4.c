#include <stdio.h>
#include <math.h>
/*
    4. Crie uma funcao recursiva que receba dois inteiros positivos k e n e calcule k^n
 */

int somatorio(int k, int n){
   if(n==0){
       return 1;
   }else{
       return pow(k, n) + somatorio(k,n-1);
   }
}

int main() {
    int constante, numero;
    printf("digite uma constante um numero: ");
    scanf("%d %d", &constante, &numero);

    printf("somatorio: %d", somatorio(constante,numero));

    return 0;
}
