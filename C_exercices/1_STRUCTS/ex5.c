#include <stdio.h>
#include <stdlib.h>
#define TAM1 2
#define TAM2 2

/*5. Considerando a estrutura
struct Vetor{
float x;
float y;
float z;
};
para representar um vetor no R3
, implemente um programa que calcule a soma de dois
vetores. */

typedef struct vetor{
    float x;
    float y;
    float z;
}Vetor;

int main() {
    Vetor v1[TAM1][TAM1][TAM1];
    Vetor v2[TAM2][TAM2][TAM2];
    Vetor v3[TAM2][TAM2][TAM2];

    int i, j, k;

    for (i = 0; i < TAM1; ++i) {
        for (j = 0; j < TAM1; ++j) {
            for ( k = 0; k < TAM1; ++k) {
                printf("v1[%d][%d][%d] = ", i, j, k);
                scanf("%f", v1[k]);

                printf("v2[%d][%d][%d] = ", i, j, k);
                scanf("%f", v2[k]);
            }
        }
    }

    if(TAM1 == TAM2){
        for (i = 0; i <TAM1; ++i) {
            for (j = 0; j < TAM1; ++j) {
                for (int k = 0; k < TAM1; ++k) {
                    v3[i][j][k] = v1[i][j][k]+v2[i][j][k];
                }
            }
        }
    }


    for (i = 0; i < TAM1; ++i) {
        for (j = 0; j < TAM1; ++j) {
            for ( k = 0; k < TAM1; ++k) {
                printf("v1[%d][%d][%d] = %.2f", i, j, k, v3[k]);
            }

        }
    }

    return 0;
}
