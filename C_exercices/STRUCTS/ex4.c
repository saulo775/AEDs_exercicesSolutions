#include <stdio.h>
#define TAM 2

/*4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos. ´
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral. ´
(d) Encontre o aluno com menor media geral ´
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovac¸ao. */

typedef struct {
    char nome[50];
    int matricula;
    int nota1;
    int nota2;
    int nota3;
    float media;
}Dados;

int main() {
    Dados data[TAM];
    int auxNota = 0;
    int auxMedia = 0;
    int auxMenorMedia = data[0].media;
    for (int i = 0; i < TAM; ++i) {
        printf("digite o nome do aluno %d: ", i);
        fflush(stdin);
        fgets(data[i].nome, sizeof(data[i].nome), stdin);

        printf("digite a matricula: ");
        scanf("%d", &data[i].matricula);

        printf("digite a nota1: ");
        scanf("%d", &data[i].nota1);

        printf("digite a nota2: ");
        scanf("%d", &data[i].nota2);

        printf("digite a nota3: ");
        scanf("%d", &data[i].nota3);

        data[i].media = (data[i].nota1 + data[i].nota2 + data[i].nota3) / 3;

        if (data[i].nota1 > auxNota){
            auxNota = data[i].nota1;
        }
        if (data[i].media > auxMedia){
            auxMedia = data[i].media;
        }
        if (data[i].media < auxMenorMedia){
            auxMenorMedia = data[i].media;
        }
    }

    for (int i = 0; i < TAM; ++i) {
        if(auxNota == data[i].nota1){
            printf("aluno com melhor nota na primeira  prova\n");
            printf("nome: %s\nmatricula: %d\nnota1: %d\nnota2: %d\nnota3: %d\n", data[i].nome, data[i].matricula, data[i].nota1, data[i].nota2,data[i].nota3);
        }

        if(auxMedia == data[i].media){
            printf("aluno com melhor media\n");
            printf("nome: %s\nmatricula: %d\nnota1: %d\nnota2: %d\nnota3: %d\n", data[i].nome, data[i].matricula, data[i].nota1, data[i].nota2,data[i].nota3);
        }

        if(auxMenorMedia == data[i].media){
            printf("aluno com menor media\n");
            printf("nome: %s\nmatricula: %d\nnota1: %d\nnota2: %d\nnota3: %d\n", data[i].nome, data[i].matricula, data[i].nota1, data[i].nota2,data[i].nota3);
        }
    }

    for (int i = 0; i < TAM; ++i) {
        if(data[i].media<6){
            printf("Aluno[%d] Reprovado!!\n", i);
        } else{
            printf("Aluno[%d] Aprovado!!\n", i);
        }
    }

    return 0;
}
