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

    printf("\n"); // Separação visual

    // Movimento do Bispo: 5 casas na diagonal superior direita
    printf("Movimento do Bispo:\n");
    int passoBispo = 1;
    while (passoBispo <= MOV_BISPO) {
        printf("Cima Direita\n"); // Combinação de direções básicas
        passoBispo++;
    }

    printf("\n"); // Separação visual

    // Movimento da Rainha: 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    int passoRainha = 1;
    do {
        printf("Esquerda\n");
        passoRainha++;
    } while (passoRainha <= MOV_RAINHA);

    return 0;
}
