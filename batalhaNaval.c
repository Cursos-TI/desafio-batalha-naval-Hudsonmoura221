#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHA 10
#define COLUNA 10

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).

    char linhaA[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[LINHA][COLUNA] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,3,0,0,0,0,3,0,0,0},
        {0,0,3,0,0,0,3,0,0,0},
        {0,0,0,3,0,0,3,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,3,3,3,0,0,3,0,0},
        {0,0,0,0,0,0,3,0,0,0},
        {0,0,0,0,0,3,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.

    int cone [3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };

    int octaedro [3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };  

    int cruz [3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };  


    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    
    //Posicionamento cone
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (cone[i][j] == 1) {
                int linha = 0 + i; 
                int coluna = 0 + j; 
                if (linha < LINHA && coluna < COLUNA) {
                    tabuleiro[linha][coluna] = 5; 
                }
            }
        }
    }


    //Posicionamento octaedro

     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (octaedro[i][j] == 1) {
                int linha = 5 + i; 
                int coluna = 3 + j; 
                if (linha < LINHA && coluna < COLUNA) {
                    tabuleiro[linha][coluna] = 5; 
                }
            }
        }
    }



   //Posicionamento cruz
        
   for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cruz[i][j] == 1) {
                int linha = 3 + i; 
                int coluna = 3 + j; 
                if (linha < LINHA && coluna < COLUNA) {
                    tabuleiro[linha][coluna] = 5; 
                }
            }
        }
    }
   
    
   
    printf("Jogo Batalha Naval\n");
    printf("Tabuleiro:\n");
    printf("   ");
    for (int j = 0; j < LINHA; j++) {
        printf(" %c", linhaA[j]);
    }
    printf("\n");

    for (int i = 0; i < LINHA; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < COLUNA ; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
