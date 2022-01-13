#include <stdio.h>

/*
    2. Fac¸a uma func¸ao que receba a data atual (dia, m ˜ es e ano em inteiro) e exiba-a na tela ˆ
    no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de
    2000.
 */

void retornaData(int dia, int mes, int ano){
    switch (mes) {
        case 1:
            printf("%d de janeiro de %d", dia, ano);
            return;
        case 2:
            printf("%d de fevereiro de %d", dia, ano);
            return;
        case 3:
            printf("%d de marco de %d", dia, ano);
            return;
        case 4:
            printf("%d de abril de %d", dia, ano);
            return;
        case 5:
            printf("%d de maio de %d", dia, ano);
            return;
        case 6:
        printf("%d de junho de %d", dia, ano);
            return;
        case 7:
        printf("%d de julho de %d", dia, ano);
            return;
        case 8:
            printf("%d de agosto de %d", dia, ano);
            return;
        case 9:
            printf("%d de setembro de %d", dia, ano);
            return;
        case 10:
            printf("%d de outubro de %d", dia, ano);
            return;
        case 11:
            printf("%d de novembro de %d", dia, ano);
            return;
        case 12:
            printf("%d de dezembro de %d", dia, ano);
            return;
        default:
            printf("Mes invalido");
            return;
    }
}

int main() {
    int dia, mes, ano;

    printf("Forneca dia/mes/ano\n");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    retornaData(dia, mes, ano);

    return 0;
}
