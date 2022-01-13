#include <stdio.h>
#include <string.h>

/*
    1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
    Associe as variaveis aos ponteiros (use &). Modifique os valores de
    cada variavel usando os ponteiros. Imprima os valores das variaveis antes e aos a
    modificaCao.
 */

int main() {

    int varInt = 10, *pInt;
    float varFloat = 20.0, *pFloat;
    char varChar[10] = "char", *pChar;

    printf("inteiro: %d\nflutuante: %.2f\nstring: %s\n", varInt, varFloat, varChar);

    pInt= &varInt;
    pFloat = &varFloat;
    pChar = varChar;

    *pInt = 20;
    *pFloat = 20.20;
    strcpy(pChar, "olá my dudes");

    printf("inteiro: %d\nflutuante: %.2f\nstring: %s\n", varInt, varFloat, varChar);

    return 0;
}
