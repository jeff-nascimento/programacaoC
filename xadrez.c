#include <stdio.h>

// Movimentos da torre
void rook_move() {
    printf("Torre (partindo de d4):\n");

    printf("Verticais:  ");
    for (int i = 3; i >= 1; i--) {
        printf("^ d%d  ", i);
    }
    printf("\n");

    printf("Verticais:  ");
    for (int i = 5; i <= 8; i++) {
        printf("v d%d  ", i);
    }
    printf("\n");

    printf("Horizontais: ");
    for (char c = 'c'; c >= 'a'; c--) {
        printf("< %c4  ", c);
    }
    printf("\n");

    printf("Horizontais: ");
    for (char c = 'e'; c <= 'h'; c++) {
        printf("> %c4  ", c);
    }
    printf("\n");

    printf("Centro:       d4\n");
}

// Movimentos do bispo
void bishop_move() {
    printf("\nBispo (partindo de d4):\n");

    printf("Diagonal ^>:  ");
    char dx = 'e'; int dy = 5;
    while (dx <= 'h' && dy <= 8) {
        printf("^> %c%d  ", dx, dy);
        dx++; dy++;
    }
    printf("\n");

    printf("Diagonal v<:  ");
    dx = 'c'; dy = 3;
    while (dx >= 'a' && dy >= 1) {
        printf("v< %c%d  ", dx, dy);
        dx--; dy--;
    }
    printf("\n");

    printf("Diagonal ^<:  ");
    dx = 'c'; dy = 5;
    while (dx >= 'a' && dy <= 8) {
        printf("^< %c%d  ", dx, dy);
        dx--; dy++;
    }
    printf("\n");

    printf("Diagonal v>:  ");
    dx = 'e'; dy = 3;
    while (dx <= 'h' && dy >= 1) {
        printf("v> %c%d  ", dx, dy);
        dx++; dy--;
    }
    printf("\n");

    printf("Centro:       d4\n");
}

// Movimentos da rainha
void queen_move() {
    printf("\nRainha (partindo de d4):\n");

    int i;
    char c;

    // Verticais
    printf("Verticais :  ");
    for (i = 3; i >= 1; i--) {
        printf("^ d%d  ", i);
    }
    printf("\n");

    printf("Verticais :  ");
    for (i = 5; i <= 8; i++) {
        printf("v d%d  ", i);
    }
    printf("\n");

    // Horizontais
    printf("Horizontais : ");
    for (c = 'c'; c >= 'a'; c--) {
        printf("< %c4  ", c);
    }
    printf("\n");

    printf("Horizontais : ");
    for (c = 'e'; c <= 'h'; c++) {
        printf("> %c4  ", c);
    }
    printf("\n");

    // Diagonais
    printf("Diagonal ^>:  ");
    char dx = 'e'; int dy = 5;
    while (dx <= 'h' && dy <= 8) {
        printf("^> %c%d  ", dx, dy);
        dx++; dy++;
    }
    printf("\n");

    printf("Diagonal v<:  ");
    dx = 'c'; dy = 3;
    while (dx >= 'a' && dy >= 1) {
        printf("v< %c%d  ", dx, dy);
        dx--; dy--;
    }
    printf("\n");

    printf("Diagonal ^<:  ");
    dx = 'c'; dy = 5;
    while (dx >= 'a' && dy <= 8) {
        printf("^< %c%d  ", dx, dy);
        dx--; dy++;
    }
    printf("\n");

    printf("Diagonal v>:  ");
    dx = 'e'; dy = 3;
    while (dx <= 'h' && dy >= 1) {
        printf("v> %c%d  ", dx, dy);
        dx++; dy--;
    }
    printf("\n");

    printf("Centro:       d4\n");
}

int main() {
    int choice;

    printf("Movimentação de peças no xadrez.\n");
    printf("Escolha um dos números abaixo para ver a movimentação da peça.\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("5. Sair\n");
    printf("Digite um dos números: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            rook_move();
            break;

        case 2:
            bishop_move();
            break;

        case 3:
            queen_move();
            break;

        case 4:
            printf("\nCavalo (partindo de d4):\n");
            printf("Saltos:\n");
            printf("Cima direita: ^^> e6\n");
            printf("Cima esquerda: ^^< c6\n");
            printf("Baixo direita: vv> e2\n");
            printf("Baixo esquerda: vv< c2\n");
            printf("Direita cima: ^>> f5\n");
            printf("Direita baixo: v>> f3\n");
            printf("Esquerda cima: ^<< b5\n");
            printf("Esquerda baixo: v<< b3\n");
            printf("Centro:       d4\n");
            break;

        case 5:
            printf("Saindo...\n");
            break;

        default:
            printf("Digite um número válido.\n");
            break;
    }

    return 0;
}
