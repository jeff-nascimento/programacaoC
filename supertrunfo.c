#include <stdio.h>

int main(){
    char estado1;
    int codigo1, turismo1;
    unsigned long int populacao1; 
    char nome1[50];
    float area1, pib1;
    float densidade1, per_capita1;
    float super_poder1;

    printf("Cartas Super Trunfo\n");

    printf("Digite uma letra de A até H para representar um dos oito estados: ");
    scanf(" %c", &estado1);

    printf("Digite um número de 01 a 04 para esse estado: ");
    scanf("%d", &codigo1);

    printf("Digite o nome da cidade desejada: ");
    scanf("%s", nome1);

    printf("Digite o número da população dessa cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área dessa cidade: ");
    scanf("%f", &area1);

    printf("Digite o valor do PIB dessa cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos existem nessa cidade: ");
    scanf("%d", &turismo1);

    densidade1 = (float)populacao1 / area1;
    per_capita1 = (pib1 * 1000000000.0f) / populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)turismo1 + per_capita1 + (1.0f / densidade1);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %d%c\n", codigo1, estado1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", per_capita1);

    char estado2;
    int codigo2, turismo2;
    unsigned long int populacao2; 
    char nome2[50];
    float area2, pib2;
    float densidade2, per_capita2;
    float super_poder2;

    printf("\nVamos para a segunda carta!\n");

    printf("Digite uma letra de A até H para representar um dos oito estados: ");
    scanf(" %c", &estado2);

    printf("Digite um número de 01 a 04 para esse estado: ");
    scanf("%d", &codigo2);

    printf("Digite o nome da cidade desejada: ");
    scanf("%s", nome2);

    printf("Digite o número da população dessa cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área dessa cidade: ");
    scanf("%f", &area2);

    printf("Digite o valor do PIB dessa cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos existem nessa cidade: ");
    scanf("%d", &turismo2);

    densidade2 = (float)populacao2 / area2;
    per_capita2 = (pib2 * 1000000000.0f) / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + per_capita2 + (1.0f / densidade2);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %d%c\n", codigo2, estado2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", per_capita2);

    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turismo1 > turismo2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", per_capita1 > per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
