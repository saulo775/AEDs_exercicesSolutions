#include <stdio.h>
#include <stdlib.h>

#define TAM 2

/*6. Fac¸a um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2. Considere uma turma de ´
ate 10 alunos. Ap ´ os ler todos os dados digitados, e depois de armazen ´ a-los em um vetor ´
de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias ´
finais (use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).*/

typedef struct aluno{
    char nome[50];
    int matricula;
    int codDisciplina;
    int nota1, nota2;
    float media;
}Aluno;

int main() {
    Aluno alunos[TAM];

    float pesoNota1 = 1.0, pesoNota2 = 2.0;

    for (int i = 0; i < TAM; ++i) {
        printf("Nome: ");
        fflush(stdin);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Codigo disciplina: ");
        scanf("%d", &alunos[i].codDisciplina);

        printf("nota 1: ");
        scanf("%d ", &alunos[i].nota1);

        printf("nota 2: ");
        scanf("%d ", &alunos[i].nota2);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / (pesoNota1+pesoNota2);

        printf("\n");
    }

    for (int i = 0; i < TAM; ++i) {
        printf("%s teve media %.2f na materia %d\n", alunos[i].nome, alunos[i].media, alunos[i].codDisciplina);
    }

    return 0;
}
