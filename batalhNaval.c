#include <stdio.h>

// Desafio Batalha Naval - MateCheck


#include <stdio.h>

int main(void) {
    //Vetor para coordenada alfabetica do tabuleiro
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    //Matriz do tabuleiro
    int tabuleiro[10][10];

    printf(" TABULEIRO BATALHA NAVAL\n");
    printf("  ");//Espaço para alinhar corretamente a coordenada alfabetica

    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]);  //Imprime coordenada alfabetica do tabuleiro
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1);//Imprime coordenada numérica 
        for (int j = 0; j < 10; j++) {

            tabuleiro[i][j] = 0;      // água
        
            if (i == 2 && (j == 3 || j == 4 || j == 5)) {
                tabuleiro[i][j] = 3; //Navio horizontal
            } 

            if(j == 8 && (i == 5 || i == 6 || i == 7 ))
            {
                tabuleiro[i][j] = 3; //Navio Vertical
            }

            if((i == 6 &&  j == 0)|| 
               (i== 7 &&j == 1)|| 
               (i == 8 && j == 2))
            {
                tabuleiro[i][j] = 3; //Navio Diagonal
            }
            if((i == 6 && j == 4)||
                (i == 5 && j == 5)||
                (i == 4 && j == 6))
            {
                tabuleiro[i][j] = 3; // Navio Diagonal
            }

            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("Tabuleiro com habilidades\n");


    return 0;
}