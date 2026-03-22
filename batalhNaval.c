#include <stdio.h>

// Desafio Batalha Naval - MateCheck
#define LINHA 10
#define COLUNA 10

int main(void) {
    //Vetor para coordenada alfabetica do tabuleiro
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    //Matriz do tabuleiro
    int tabuleiro[10][10];
    int tabuleiroHabilidades[10][10];

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
    printf("\n");
    
    for(int i = 0;i < LINHA; i++)
    {
        printf(" %c",linha[i]);
    }

    printf("\n");

    for(int i =0;i < LINHA;i ++)
    {
        printf("%d ",i);
        for(int j = 0;j < COLUNA;j++)
        {
            tabuleiroHabilidades[i][j]=0; //agua

            if((i == 0 && j == 3)||
               (i == 1 && j == 3)||
               (i == 1 && j == 3)||
               (i == 2 && j == 3)||
               (i == 2 && j == 1)||
               (i == 2 && j == 2)||
               (i == 2 && j == 3)||
               (i == 2 && j == 4)||
               (i == 2 && j == 5)||
               (i == 3 && j == 3)||
               (i == 4 && j == 3))
               {
                tabuleiroHabilidades[i][j]=5;
               }

               if((i == 3 && j == 7)||
                  (i == 4 && j == 6)||
                  (i == 4 && j == 7)||
                  (i == 4 && j == 8)||
                  (i == 5 && j == 5)||
                  (i == 5 && j == 6)||
                  (i == 5 && j == 7)||
                  (i == 5 && j == 8)||
                  (i == 5 && j == 9)||
                  (i == 6 && j == 6)||
                  (i == 6 && j == 7)||
                  (i == 6 && j == 8)||
                  (i == 7 && j == 7))
                  {
                    tabuleiroHabilidades[i][j] = 9;
                  }

                  if((i == 5 && j == 2)||
                     (i == 6 && j == 1)||
                     (i == 6 && j == 2)||
                     (i == 6 && j == 3)||
                     (i == 7 && j == 0)||
                     (i == 7 && j == 1)||
                     (i == 7 && j == 2)||
                     (i == 7 && j == 3)||
                     (i == 7 && j == 4))
                     {
                        tabuleiroHabilidades[i][j] = 4;
                     }

            printf("%d ",tabuleiroHabilidades[i][j]); 
        }
        printf("\n");
    }

    return 0;
}