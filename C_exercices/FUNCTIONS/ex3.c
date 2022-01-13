#include <stdio.h>

/*
    3. Fac¸a uma funcao para verificar se um numero e positivo ou negativo. Sendo que o valor
    de retorno sera 1 se positivo, -1 se negativo e 0 se for igual a 0.
 */

int returnSignal(float n){
    if(n>0){
        return 1;
    }else if(n==0){
        return 0;
    } else{
        return -1;
    }
}

int main() {
    int numero;
    int retorno;

    printf("Forneca um numero\n");
    scanf("%f", &numero);

    retorno = returnSignal(numero);

    if(retorno == 1){
        printf("positivo");
    }else if(retorno == -1){
        printf("negativo");
    }else{
        printf("numero é zero");
    }

    return 0;
}
