#include <stdio.h>
#include <math.h>

/*
    4. Fac¸a uma func¸ao para verificar se um n ˜ umero ´ e um quadrado perfeito. Um quadrado ´
    perfeito e um n ´ umero inteiro n ´ ao negativo que pode ser expresso como o quadrado de ˜
    outro numero inteiro. Ex: 1, 4, 9...
 */

void perfect(int n){
    int raiz;
    if(n<=0){
        printf("Nao eh um quadrado perfeito");
        return;
    }

    raiz = sqrt(n);
    if(raiz%raiz == 0 && raiz*raiz == n){
        printf("%d eh quadrado perfeito de %d", n, raiz);
        return;
    }else{
        printf("Nao eh um quadrado perfeito");
        return;
    }
}

int main() {
    int numero;
    printf("Insira um numero: ");
    scanf("%d", &numero);
    perfect(numero);

    return 0;
}
