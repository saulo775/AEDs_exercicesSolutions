#include <stdio.h>
#define TAM 2

/*3. Construa uma estrutura aluno com nome, numero de matr ´ ´ıcula e curso. Leia do usuario ´
a informac¸ao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na ˜
tela.*/

typedef struct {
    char nome[50];
    int matricula;
    char  curso[50];
}Dados;

int main() {
    Dados data[5];


    for (int i = 0; i < TAM; ++i) {
        printf("digite o nome do aluno %d: ", i);
        fflush(stdin);
        fgets(data[i].nome, sizeof(data[i].nome), stdin);

        printf("digite a matricula: ");
        scanf("%d", &data[i].matricula);

        printf("digite o curso: ");
        fflush(stdin);
        fgets(data[i].curso, sizeof(data[i].curso), stdin);
    }

    for (int i = 0; i < TAM; ++i) {
        printf("nome: %s\nmatricula: %d\ncurso: %s\n", data[i].nome, data[i].matricula, data[i].curso);
    }

    return 0;
}
