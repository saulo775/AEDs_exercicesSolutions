#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    2. Faca um programa que receba do usuario um arquivo texto e mostre na tela quantas
    linhas esse arquivo possui.
 */

int main() {

    FILE *f;
    char caracter;
    char letra = '\n';
    int vezes;

    f = fopen("C_exercices\\6_ARCHIVES\\archives\\arq.txt", "r");

    if (f == NULL){
        printf("Nao foi possivel abrir o arquivo!!!");
    }

    while(fread(&caracter, sizeof(char), 1, f)){
        if (caracter == letra){
            vezes++;
        }
    }
    fclose(f);

    printf("o arquivo tem %d linhas.", vezes);


    return 0;
}
