#include <stdio.h>
#include <math.h>

/*
    6. Faca uma funcao que receba 3 numeros inteiros como parametro, representando horas,
    minutos e segundos, e os converta em segundos.
 */

void returnSeconds(int horas, int minutos, int segundos){
    horas = horas * 3600;
    minutos = minutos * 60;

    segundos = segundos + horas + minutos;

    printf("%d segundos", segundos);
}

int main() {
    int horas, minutos, segundos;
    printf("Insira horas, minutos, segundos;  ");
    scanf("%d", &horas);
    scanf("%d", &minutos);
    scanf("%d", &segundos);

    returnSeconds(horas, minutos, segundos);

    return 0;
}
