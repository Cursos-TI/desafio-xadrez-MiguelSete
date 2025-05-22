#include <stdio.h>

// Definição de constantes para o numero de casas
#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8

int main() {
    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int passo = 1; passo <= MOV_TORRE; passo++) {
        printf("Direita\n");
    }

    printf("\n"); 

    // Movimento do Bispo: 5 casas na diagonal superior direita
    printf("Movimento do Bispo:\n");
    int passoBispo = 1;
    while (passoBispo <= MOV_BISPO) {
        printf("Cima Direita\n"); 
        passoBispo++;
    }

    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    int passoRainha = 1;
    do {
        printf("Esquerda\n");
        passoRainha++;
    } while (passoRainha <= MOV_RAINHA);


    const int movimentosBaixo = 2;
    const int movimentosEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    for (int i = 1; i <= movimentosBaixo; i++) {
        printf("Baixo\n");

        // Loop while aninhado
        int controle = 1;
        while (controle <= 1 && i == movimentosBaixo) {
            // Só executa a esquerda no fim do segundo "Baixo"
            for (int j = 1; j <= movimentosEsquerda; j++) {
                printf("Esquerda\n");
            }
            controle++;
        }
    }

    return 0;
}

