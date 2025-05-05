#include <stdio.h>

#define TAMANHO_TABULEIRO 10

void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 0)
                printf("[ ]");
            else
                printf("[X]");
        }
        printf("\n");
    }
}

void posicionarNavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (coluna + i < TAMANHO_TABULEIRO) {
            tabuleiro[linha][coluna + i] = 1;
        }
    }
}

void posicionarNavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (linha + i < TAMANHO_TABULEIRO) {
            tabuleiro[linha + i][coluna] = 1;
        }
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    int linhaHorizontal = 3, colunaHorizontal = 2, tamanhoHorizontal = 4;
    posicionarNavioHorizontal(tabuleiro, linhaHorizontal, colunaHorizontal, tamanhoHorizontal);

    int linhaVertical = 1, colunaVertical = 5, tamanhoVertical = 3;
    posicionarNavioVertical(tabuleiro, linhaVertical, colunaVertical, tamanhoVertical);

    printf("Posição dos navios no tabuleiro (representação: [X] para parte do navio):\n");
    exibirTabuleiro(tabuleiro);

    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int i = 0; i < tamanhoHorizontal; i++) {
        printf("Linha %d, Coluna %d\n", linhaHorizontal, colunaHorizontal + i);
    }

    printf("\nCoordenadas do Navio Vertical:\n");
    for (int i = 0; i < tamanhoVertical; i++) {
        printf("Linha %d, Coluna %d\n", linhaVertical + i, colunaVertical);
    }

    return 0;
}
