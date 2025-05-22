#include <stdio.h>


#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8

// Função recursiva Torre: 5 casas para a direita
void moverTorre(int passo, int max) {
    if (passo > max) return;
    printf("Direita\n");
    moverTorre(passo + 1, max);
}

// Função recursiva Bispo com loops aninhados e recursão
void moverBispo(int vertical, int max) {
    if (vertical > max) return;

    // Loop interno para movimento horizontal
    for (int horizontal = 1; horizontal <= 1; horizontal++) {
        printf("Cima\n");    // vertical: 1 casa para cima
        printf("Direita\n"); // horizontal: 1 casa para direita
    }

    // Chamada recursiva para próxima casa diagonal
    moverBispo(vertical + 1, max);
}

// Função recursiva Rainha: 8 casas para a esquerda
void moverRainha(int passo, int max) {
    if (passo > max) return;
    printf("Esquerda\n");
    moverRainha(passo + 1, max);
}

// Função com loops aninhados complexos para movimento do Cavalo (2 cima, 1 direita)
void moverCavalo() {
    int movimentosCima = 2;
    int movimentosDireita = 1;
    int contadorCima = 0;
    int contadorDireita = 0;

    printf("Movimento do Cavalo:\n");

    for (int i = 1; i <= movimentosCima + movimentosDireita; i++) {
        for (int j = 1; j <= 2; j++) {
            // Múltiplas variáveis e condições para controlar o movimento
            if (contadorCima < movimentosCima) {
                printf("Cima\n");
                contadorCima++;
                // Quando completar movimentosCima, sair do loop para mover Direita
                if (contadorCima == movimentosCima) {
                    break;
                }
            }
            // Se já fez 2 cima, vamos para direita
            if (contadorCima == movimentosCima && contadorDireita < movimentosDireita) {
                printf("Direita\n");
                contadorDireita++;
                // Termina o movimento do cavalo
                if (contadorDireita == movimentosDireita) {
                    break;
                }
            }
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(1, MOV_TORRE);

    printf("\nMovimento do Bispo:\n");
    moverBispo(1, MOV_BISPO);

    printf("\nMovimento da Rainha:\n");
    moverRainha(1, MOV_RAINHA);

    moverCavalo();

    return 0;
}
