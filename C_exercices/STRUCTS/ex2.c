#include <stdio.h>
#include <stdlib.h>

/*2. Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
armazene os dados em uma estrutura.*/

typedef struct {
    char nome[50];
    int idade;
    char endereco[100];
}Dados;

int main() {
    Dados data;

    printf("digite o nome: ");
    fflush(stdin);
    fgets(data.nome, sizeof(data.nome), stdin);

    printf("digite a idade: ");
    scanf("%d", &data.idade);

    printf("digite o endereço: ");
    fflush(stdin);
    fgets(data.endereco, sizeof(data.endereco), stdin);

    printf("nome: %s\nidade: %d\nendereco: %s\n", data.nome, data.idade, data.endereco);







    return 0;
}
