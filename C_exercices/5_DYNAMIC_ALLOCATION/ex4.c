#include <stdio.h>
#include <stdlib.h>

/*
    4. Fac¸a um programa que receba do usuario o tamanho de uma string e chame uma ´
    func¸ao para alocar dinamicamente essa string. Em seguida, o usu ˜ ario dever ´ a informar o ´
    conteudo dessa string. O programa imprime a string sem suas vogais.
 */

int main(){
    char *nome;
    unsigned int tam;


    printf("Quantidade de caracters: ");
    scanf("%d", &tam);

    tam = tam + 1;
    nome = malloc(tam * sizeof(char));


    printf("Qual o seu nome: ");

    fflush(stdin);
    fgets(nome, tam, stdin);


    for (int i = 0; nome[i] != '\0'; ++i) {
        if ((nome[i]  != 'a') && (nome[i] !='e' ) && (nome[i] !='i' ) && (nome[i] !='o' ) && (nome[i] !='u' )){
            printf("%c\n", nome[i]);

        }


    }

    return 0;
}