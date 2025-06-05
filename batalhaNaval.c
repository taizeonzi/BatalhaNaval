#include <stdio.h>

//Nível Novato

int main(){
    //Utilize uma matriz. O tabuleiro terá um tamanho fixo 10x10
    int tab[10][10];

    //Inicialize todas as posições com valor 0, representando água
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tab[i][j] = 0;
        }
    }

    //Dois arrays unidimensionais para representar os navios, com num fixo de posições. Um será na horizontal e outro vertical
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    // Coordenadas fixas para o início dos navios
    int linha_h = 2;
    int coluna_h = 4;

    int linha_v = 5;
    int coluna_v = 7;

    // Posiciona o navio horizontal (linha fixa, colunas consecutivas)
    for (int i = 0; i < 3; i++) {
        tab[linha_h][coluna_h + i] = navio_horizontal[i];
    }

    // Posiciona o navio vertical (coluna fixa, linhas consecutivas)
    for (int i = 0; i < 3; i++) {
        tab[linha_v + i][coluna_v] = navio_vertical[i];
    }

    // Exibe o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}
