#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int hora;
    int minuto;
    int segundo;
}Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
}Data;

typedef struct {
    Horario horario;
    Data data;
    char anotacao[100];
}Compromisso;

int main() {

    Compromisso cmp;
    printf("Horario\n");
    scanf("%d %d %d", &cmp.horario.hora, &cmp.horario.minuto, &cmp.horario.segundo);

    printf("Data\n");
    scanf("%d %d %d", &cmp.data.dia, &cmp.data.mes, &cmp.data.ano);

    printf("Anotacao\n");
    fflush(stdin);
    fgets(cmp.anotacao, sizeof(cmp.anotacao), stdin);


    printf("anotacao: %s", cmp.anotacao);

    return 0;
}
