#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    1. Escreva um programa que:
        (a) Crie/abra um arquivo texto de nome “arq.txt”
        (b) Permita que o usuario grave diversos caracteres nesse arquivo, ate que o usuario
        entre com o caractere ‘0’
        (c) Feche o arquivo
    Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados.
 */

int main() {

    FILE *f;

    f = fopen("C_exercices\\6_ARCHIVES\\archives\\arq.txt", "w");

    if (f == NULL){
        printf("Nao foi possivel abrir o arquivo!!!");
    }

    char caracter;

    do {
        printf("Digite um caracter: ");
        fflush(stdin);
        scanf("%c", &caracter);
        if (caracter == '0'){
            break;
        }

        fputc(caracter, f);
        fputc("\n", f);
    } while (1);

    fclose(f);

    printf("\n\n***Abrindo arquivo novamente***\n\n");

    f = fopen("C_exercices\\6_ARCHIVES\\archives\\arq.txt", "r");

    if (f == NULL){
        printf("Nao foi possivel abrir o arquivo!!!");
    }

    while(caracter != EOF) {
        caracter = fgetc(f);

        printf("%c", caracter);
    }

    fclose(f);

    return 0;
}
