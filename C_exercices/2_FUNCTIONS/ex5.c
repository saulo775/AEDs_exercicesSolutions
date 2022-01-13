#include <stdio.h>
#include <math.h>

/*
    5. Fac¸a uma funcao e um programa de teste para o calculo do volume de uma esfera. ´
    Sendo que o raio e passado por parametro. ˆ
    V = 4/3 ∗ π ∗ R3
 */

void Volume(int raio){
    float V;
    V = (4 * 3.1416 * pow(raio, 3)/3);

    printf("Volume da esfera: %.2f", V);
}

int main() {
    int raio;
    printf("Insira o raio da esfera: ");
    scanf("%d", &raio);
    Volume(raio);

    return 0;
}
