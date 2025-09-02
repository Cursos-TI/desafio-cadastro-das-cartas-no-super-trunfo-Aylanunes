#include <stdio.h>

int main() {
    char estado1, estado2;
    char carta1[4], carta2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    unsigned int pontoturistico1, pontoturistico2;
    float dens1, dens2, pibpc1, pibpc2, superpoder1, superpoder2;

    printf("Digite a inicial do Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código de 01 até 04, ex:AO1, B03: \n");
    scanf("%s", carta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%u", &pontoturistico1);

      dens1 = populacao1 / area1;
      pibpc1 = pib1 / populacao1;
      superpoder1 = populacao1 + area1 + pib1 + pontoturistico1 + pibpc1 + (1.0f / dens1);

    printf("Carta 1 \n");
    printf("Estado: %c - Código: %s\n", estado1, carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área da cidade: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %u\n", pontoturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);
    printf("Super Poder: %.2f\n", superpoder1);

          //carta2
    printf("Digite as informações da 2° carta: \n");

    printf("Digite a inicial do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código de 01 até 04, ex:AO1, B03: \n");
    scanf("%s", carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%u", &pontoturistico2);

      dens2 = populacao2 / area2;
      pibpc2 = pib2 / populacao2;
      superpoder2 = populacao2 + area2 + pib2 + pontoturistico2 + pibpc2 + (1.0f / dens2);

    printf("Carta 2 \n");
    printf("Estado: %c - Código: %s\n", estado2, carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área da cidade: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %u\n", pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("Super Poder: %.2f\n", superpoder2);

       //comparações
    printf("Comparação de Cartas:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontoturistico1 > pontoturistico2);
    printf("Densidade Populacional: %d\n", dens1 < dens2);
    printf("PIB per Capita: %d\n", pibpc1 > pibpc2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);

    return 0;
}
