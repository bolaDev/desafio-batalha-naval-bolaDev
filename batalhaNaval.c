
#include <stdio.h>

int main() {
    // Matriz 10x10 preenchida com 0 (água)
    int tabuleiro[10][10] = {0};

    // 1. Navio Vertical (valor 3 indica navio)
    tabuleiro[1][2] = 3; 
    tabuleiro[2][2] = 3; 
    tabuleiro[3][2] = 3;

    // 2. Navio Horizontal
    tabuleiro[5][4] = 3; 
    tabuleiro[5][5] = 3; 
    tabuleiro[5][6] = 3;

    // 3. Navio na Diagonal 1 (Nível Aventureiro)
    tabuleiro[1][7] = 3; 
    tabuleiro[2][8] = 3; 
    tabuleiro[3][9] = 3;

    // 4. Navio na Diagonal 2 (Nível Aventureiro)
    tabuleiro[7][1] = 3; 
    tabuleiro[8][2] = 3; 
    tabuleiro[9][3] = 3;

    // Exibição do Tabuleiro Completo
    printf("--- TABULEIRO BATALHA NAVAL 10x10 ---\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;   
}

