#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    int codigo1, populacao1, turismo1;
    char nome1[50];
    float area1, pib1;

    printf("Cartas Super Trunfo\n");

    printf("Digite uma letra de A até H para representar um dos oito estados: ");
    scanf(" %c", &estado1);  // espaço antes do %c para consumir o \n anterior

    printf("Digite um número de 01 a 04 para esse estado: ");
    scanf("%d", &codigo1);

    printf("Digite o nome da cidade desejada: ");
    scanf("%s", nome1);

    printf("Digite o número da população dessa cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área dessa cidade: ");
    scanf("%f", &area1);

    printf("Digite o valor do PIB dessa cidade: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos existem nessa cidade: ");
    scanf("%d", &turismo1);

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %d%c\n", codigo1, estado1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turismo1);

    // Carta 2
    char estado2;
    int codigo2, populacao2, turismo2;
    char nome2[50];
    float area2, pib2;

    printf("\nCartas Super Trunfo\n");

    printf("Digite uma letra de A até H para representar um dos oito estados: ");
    scanf(" %c", &estado2);

    printf("Digite um número de 01 a 04 para esse estado: ");
    scanf("%d", &codigo2);

    printf("Digite o nome da cidade desejada: ");
    scanf("%s", nome2);

    printf("Digite o número da população dessa cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área dessa cidade: ");
    scanf("%f", &area2);

    printf("Digite o valor do PIB dessa cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos existem nessa cidade: ");
    scanf("%d", &turismo2);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %d%c\n", codigo2, estado2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);

    return 0;
}

