#include <stdio.h>
#include <stdlib.h>

// Função para aplicar a habilidade no tabuleiro
void apply_ability(int board[10][10], int ability[5][5], int origin_row, int origin_col) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (ability[i][j] == 1) {
                int r = origin_row - 2 + i;
                int c = origin_col - 2 + j;
                if (r >= 0 && r < 10 && c >= 0 && c < 10) {
                    // Marca com 5 se não for navio (3)
                    if (board[r][c] != 3) {
                        board[r][c] = 5;
                    }
                }
            }
        }
    }
}

int main() {
    int board[10][10];
    // faz o tabuleiro 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            board[i][j] = 0; // coloca todas as casas igual a 0
        }
    }

    // Define os navios com valor 3
    int carrier[3] = {3, 3, 3}; // cria um navio chamado carrier 
    int carrier_row = 5; // linha 5
    int carrier_col = 2; // coluna 2

    for (int i = 0; i < 3; i++) { // adiciona carrier, linha + i para que preencha o espaço na coluna
        board[carrier_row + i][carrier_col] = carrier[i];
    }

    int submarine[3] = {3, 3, 3};
    int submarine_row = 8;
    int submarine_col = 6;

    for (int i = 0; i < 3; i++) { // mesma coisa do carrier só que agora o + i na coluna para preencher linha
        board[submarine_row][submarine_col + i] = submarine[i];
    }

    int battleship[3] = {3, 3, 3};
    int battleship_row = 1;
    int battleship_col = 1;

    for (int i = 0; i < 3; i++) { // + i nos dois para que seja sempre o próximo em linha e coluna (diagonal direita para baixo)
        board[battleship_row + i][battleship_col + i] = battleship[i];
    }

    int destroyer[3] = {3, 3, 3};
    int destroyer_row = 2;
    int destroyer_col = 7;

    for (int i = 0; i < 3; i++) { // - i em coluna para que a diagonal fique para a esquerda
        board[destroyer_row + i][destroyer_col - i] = destroyer[i];
    }

    // Cria a matriz da habilidade Cruz (5x5)
    int cross[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // Cruz: linha central ou coluna central = 1, resto = 0
            cross[i][j] = (i == 2 || j == 2) ? 1 : 0;
        }
    }
    int cross_origin_row = 4;
    int cross_origin_col = 4;

    // Cria a matriz da habilidade Cone (5x5)
    int cone[5][5] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            // Forma de cone: topo no índice 0, expandindo para baixo
            cone[i][j] = 1;
        }
    }
    int cone_origin_row = 1;
    int cone_origin_col = 7;

    // Cria a matriz da habilidade Octaedro (5x5)
    int octahedron[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // losango: soma das distâncias é menor ou igual a 2
            if (abs(i - 2) + abs(j - 2) <= 2)
                octahedron[i][j] = 1;
            else
                octahedron[i][j] = 0;
        }
    }
    int octa_origin_row = 6;
    int octa_origin_col = 6;

    // Aplica as três habilidades no tabuleiro
    apply_ability(board, cross, cross_origin_row, cross_origin_col);
    apply_ability(board, cone, cone_origin_row, cone_origin_col);
    apply_ability(board, octahedron, octa_origin_row, octa_origin_col);

    // Imprime o tabuleiro visual com legendas:
    // ~ = água (0)
    // # = navio (3)
    // * = área afetada pela habilidade (5)
    // X = navio dentro da área de habilidade
    printf("\nTabuleiro com navios e habilidades:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (board[i][j] == 0) {
                printf("~ ");
            } else if (board[i][j] == 3) {
                // Verifica se este navio está na área de habilidade para mostrar 'X'
                int is_affected = 0;

                int cross_i = i - (cross_origin_row - 2);
                int cross_j = j - (cross_origin_col - 2);
                if (cross_i >= 0 && cross_i < 5 && cross_j >= 0 && cross_j < 5 && cross[cross_i][cross_j] == 1)
                    is_affected = 1;

                int cone_i = i - (cone_origin_row - 2);
                int cone_j = j - (cone_origin_col - 2);
                if (cone_i >= 0 && cone_i < 5 && cone_j >= 0 && cone_j < 5 && cone[cone_i][cone_j] == 1)
                    is_affected = 1;

                int octa_i = i - (octa_origin_row - 2);
                int octa_j = j - (octa_origin_col - 2);
                if (octa_i >= 0 && octa_i < 5 && octa_j >= 0 && octa_j < 5 && octahedron[octa_i][octa_j] == 1)
                    is_affected = 1;

                printf(is_affected ? "X " : "# ");
            } else if (board[i][j] == 5) {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
