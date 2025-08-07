#include <stdio.h>

int main() {
    // Carta 1
    char estado1, nome1[50];
    int codigo1, turismo1;
    unsigned long int populacao1;
    float area1, pib1, densidade1, per_capita1, super_poder1;

    printf("Cartas Super Trunfo\n");

    printf("Digite uma letra de A até H para representar um dos oito estados: ");
    scanf(" %c", &estado1);

    printf("Digite um número de 01 a 04 para esse estado: ");
    scanf("%d", &codigo1);

    printf("Digite o nome da cidade desejada: ");
    scanf("%49s", nome1);

    printf("Digite o número da população dessa cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área dessa cidade: ");
    scanf("%f", &area1);

    printf("Digite o valor do PIB dessa cidade: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos existem nessa cidade: ");
    scanf("%d", &turismo1);

    // Cálculos carta 1
    densidade1 = (float)populacao1 / area1;
    per_capita1 = pib1 / populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + turismo1 + per_capita1 + (1.0f / densidade1);

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %d%c\n", codigo1, estado1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Carta 2
    char estado2, nome2[50];
    int codigo2, turismo2;
    unsigned long int populacao2;
    float area2, pib2, densidade2, per_capita2, super_poder2;

    printf("\nVamos para a segunda carta!\n");

    printf("Digite uma letra de A até H para representar um dos oito estados: ");
    scanf(" %c", &estado2);

    printf("Digite um número de 01 a 04 para esse estado: ");
    scanf("%d", &codigo2);

    printf("Digite o nome da cidade desejada: ");
    scanf("%49s", nome2);

    printf("Digite o número da população dessa cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área dessa cidade: ");
    scanf("%f", &area2);

    printf("Digite o valor do PIB dessa cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos existem nessa cidade: ");
    scanf("%d", &turismo2);

    // Cálculos carta 2
    densidade2 = (float)populacao2 / area2;
    per_capita2 = pib2 / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + turismo2 + per_capita2 + (1.0f / densidade2);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %d%c\n", codigo2, estado2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\n--- Comparação de Cartas ---\n");

    // População
    if (populacao1 > populacao2)
        printf("População: Carta 1 venceu (1)\n");
    else if (populacao1 < populacao2)
        printf("População: Carta 2 venceu (0)\n");
    else
        printf("População: Empate (0)\n");

    // Área
    if (area1 > area2)
        printf("Área: Carta 1 venceu (1)\n");
    else if (area1 < area2)
        printf("Área: Carta 2 venceu (0)\n");
    else
        printf("Área: Empate (0)\n");

    // PIB
    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu (1)\n");
    else if (pib1 < pib2)
        printf("PIB: Carta 2 venceu (0)\n");
    else
        printf("PIB: Empate (0)\n");

    // Pontos turísticos
    if (turismo1 > turismo2)
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    else if (turismo1 < turismo2)
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    else
        printf("Pontos Turísticos: Empate (0)\n");

    // Densidade (menor vence!)
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else if (densidade1 > densidade2)
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    else
        printf("Densidade Populacional: Empate (0)\n");

    // PIB per capita
    if (per_capita1 > per_capita2)
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    else if (per_capita1 < per_capita2)
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    else
        printf("PIB per Capita: Empate (0)\n");

    // Super poder
    if (super_poder1 > super_poder2)
        printf("Super Poder: Carta 1 venceu (1)\n");
    else if (super_poder1 < super_poder2)
        printf("Super Poder: Carta 2 venceu (0)\n");
    else
        printf("Super Poder: Empate (0)\n");

    return 0;
}
