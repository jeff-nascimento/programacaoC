#include <stdio.h>

int main() {
    char estado1;
    int codigo1, turismo1;
    unsigned long int populacao1;
    char nome1[50];
    float area1, pib1;
    float densidade1, per_capita1;

    printf("Cartas Super Trunfo\n");

    printf("Digite uma letra de A até H para representar um dos oito estados. ");
    scanf(" %c", &estado1);

    printf("Digite um número de 01 a 04 para esse estado: ");
    scanf("%d", &codigo1);

    printf("Digite o nome da cidade desejada: ");
    scanf("%s", nome1);

    printf("Digite a número da população dessa cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área dessa cidade: ");
    scanf("%f", &area1);

    printf("Digite o valor do PIB dessa cidade: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos existem nessa cidade: ");
    scanf("%d", &turismo1);

    densidade1 = populacao1 / area1;
    per_capita1 = pib1 / populacao1;

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %d%c\n", codigo1, estado1);
    printf("Nome da cidade: %s\n", nome1);
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

    printf("Vamos para a segunda carta!\n");

    printf("Digite uma letra de A até H para representar um dos oito estados. ");
    scanf(" %c", &estado2);

    printf("Digite um número de 01 a 04 para esse estado: ");
    scanf("%d", &codigo2);

    printf("Digite o nome da cidade desejada: ");
    scanf("%s", nome2);

    printf("Digite a número da população dessa cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área dessa cidade: ");
    scanf("%f", &area2);

    printf("Digite o valor do PIB dessa cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos existem nessa cidade: ");
    scanf("%d", &turismo2);

    densidade2 = populacao2 / area2;
    per_capita2 = pib2 / populacao2;

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %d%c\n", codigo2, estado2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", per_capita2);

    int attr1, attr2;

    printf("\nEscolha um número de 2 a 6 para o primeiro atributo (não pode escolher 1 - nome):\n");
    printf("2. População\n3. Área\n4. PIB\n5. Pontos Turísticos\n6. Densidade Demográfica\n");
    scanf("%d", &attr1);

    while (attr1 < 2 || attr1 > 6) {
        printf("Opção inválida. Escolha novamente:\n");
        scanf("%d", &attr1);
    }

    printf("Escolha um número de 2 a 6 para o segundo atributo (diferente do primeiro):\n");
    for (int i = 2; i <= 6; i++) {
        if (i != attr1) {
            switch (i) {
                case 2: printf("2. População\n"); break;
                case 3: printf("3. Área\n"); break;
                case 4: printf("4. PIB\n"); break;
                case 5: printf("5. Pontos Turísticos\n"); break;
                case 6: printf("6. Densidade Demográfica\n"); break;
            }
        }
    }
    scanf("%d", &attr2);

    while (attr2 < 2 || attr2 > 6 || attr2 == attr1) {
        printf("Opção inválida. Escolha novamente:\n");
        scanf("%d", &attr2);
    }

    float valorCarta1Attr1, valorCarta2Attr1, valorCarta1Attr2, valorCarta2Attr2;

    switch (attr1) {
        case 2:
            valorCarta1Attr1 = (float)populacao1;
            valorCarta2Attr1 = (float)populacao2;
            break;
        case 3:
            valorCarta1Attr1 = area1;
            valorCarta2Attr1 = area2;
            break;
        case 4:
            valorCarta1Attr1 = pib1;
            valorCarta2Attr1 = pib2;
            break;
        case 5:
            valorCarta1Attr1 = (float)turismo1;
            valorCarta2Attr1 = (float)turismo2;
            break;
        case 6:
            valorCarta1Attr1 = densidade1;
            valorCarta2Attr1 = densidade2;
            break;
    }

    switch (attr2) {
        case 2:
            valorCarta1Attr2 = (float)populacao1;
            valorCarta2Attr2 = (float)populacao2;
            break;
        case 3:
            valorCarta1Attr2 = area1;
            valorCarta2Attr2 = area2;
            break;
        case 4:
            valorCarta1Attr2 = pib1;
            valorCarta2Attr2 = pib2;
            break;
        case 5:
            valorCarta1Attr2 = (float)turismo1;
            valorCarta2Attr2 = (float)turismo2;
            break;
        case 6:
            valorCarta1Attr2 = densidade1;
            valorCarta2Attr2 = densidade2;
            break;
    }

    int vencedorAttr1, vencedorAttr2;

    if (attr1 == 6) {
        if (valorCarta1Attr1 < valorCarta2Attr1) vencedorAttr1 = 1;
        else if (valorCarta1Attr1 > valorCarta2Attr1) vencedorAttr1 = 2;
        else vencedorAttr1 = 0;
    } else {
        if (valorCarta1Attr1 > valorCarta2Attr1) vencedorAttr1 = 1;
        else if (valorCarta1Attr1 < valorCarta2Attr1) vencedorAttr1 = 2;
        else vencedorAttr1 = 0;
    }

    if (attr2 == 6) {
        if (valorCarta1Attr2 < valorCarta2Attr2) vencedorAttr2 = 1;
        else if (valorCarta1Attr2 > valorCarta2Attr2) vencedorAttr2 = 2;
        else vencedorAttr2 = 0;
    } else {
        if (valorCarta1Attr2 > valorCarta2Attr2) vencedorAttr2 = 1;
        else if (valorCarta1Attr2 < valorCarta2Attr2) vencedorAttr2 = 2;
        else vencedorAttr2 = 0;
    }

    float somaCarta1 = valorCarta1Attr1 + valorCarta1Attr2;
    float somaCarta2 = valorCarta2Attr1 + valorCarta2Attr2;

    printf("\nResultado da Comparação:\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n", nome2);

    printf("Atributos escolhidos: %d e %d\n", attr1, attr2);

    printf("Valores da Carta 1: %.2f e %.2f\n", valorCarta1Attr1, valorCarta1Attr2);
    printf("Valores da Carta 2: %.2f e %.2f\n", valorCarta2Attr1, valorCarta2Attr2);

    printf("Soma dos atributos - Carta 1: %.2f\n", somaCarta1);
    printf("Soma dos atributos - Carta 2: %.2f\n", somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("Carta 1 venceu!\n");
    } else if (somaCarta2 > somaCarta1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
