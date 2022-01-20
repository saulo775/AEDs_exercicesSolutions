#include <stdio.h>
#include <stdlib.h>

/*
    6.  Faca um programa que simule a memoria de um computador: o usuario ira especificar o
        tamanho da memoria, ou seja, quantos bytes serao alocados do tipo inteiro. Para tanto,
        a memoria solicitada deve ser um valor multiplo do tamanho do tipo inteiro. Em seguida,
        o usuario tera 2 opcoes: inserir um valor em uma determinada posicao ou consultar o
        valor contido em uma determinada posicao. A memoria deve iniciar com todos os dados
        zerados.
 */

int main(){

    unsigned int tamMemo;
    int *pMemo;

    printf("tamanho memoria computador: ");
    scanf("%d", &tamMemo);

    pMemo = (int *) calloc(tamMemo, sizeof(int));

    if (pMemo == NULL){
        printf("ERRO: Impossivel alocar memoria!!!\n");
        exit(1);
    }

    int option;

    do {

        printf("\n\n=======MENU======\n");
        printf("Digite uma opção\n");
        printf("1 - ADCIONA um valor na memoria\n");
        printf("2 - CONSULTA um valor na memoria\n");
        printf("-1 - SAIR\n");
        printf("\n");

        printf("OPCAO: ");
        scanf("%d", &option);

        if (option == 1){
            int position;
            printf("Escolha em qual posicao vai ADD o valor: ");
            scanf("%d", &position);
            if (position <= tamMemo && position > 0){
                for (int i = 0; i < tamMemo; ++i) {
                    if (position-1 == i){
                        printf("digite o valor: ");
                        scanf("%d", &pMemo[i]);
                    }
                }
            }else{
                printf("Posicao invalida");
            }
        }else if (option == 2){
            int position;
            printf("Escolha em qual posicao vai CONSULTAR o valor: ");
            scanf("%d", &position);
            if (position <= tamMemo && position > 0){
                for (int i = 0; i < tamMemo; ++i) {
                    if (position-1 == i){
                        printf("Valor na posicao MEMO[%d] eh %d", position, pMemo[i]);
                    }
                }
            }else{
                printf("Posicao invalida");
            }
        }else{
            if (option == -1){
                printf("SAINDO");
                free(pMemo);
            }else{
                printf("OPCAO INVALIDA - Tente Novamente!!");
            }
        }


    }while(option != -1);



    return 0;
}