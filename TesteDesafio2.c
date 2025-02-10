#include <stdio.h>

// Desafio do Super Trunfo - Comparação entre cartas de cidades
int main() {
    // Declaração das variáveis para armazenar os dados das duas cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada de dados para a primeira cidade
    printf("Digite a letra do estado (A-H) da primeira cidade: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01, B02): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);
    
    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Entrada de dados para a segunda cidade
    printf("\nDigite a letra do estado (A-H) da segunda cidade: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01, B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Cálculo da densidade populacional e PIB per capita
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    
    // Exibição das cartas cadastradas
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f\n", 
           estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1);
    
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f\n", 
           estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2);
    
    // Comparação das cartas (usando população como critério)
    printf("\n--- Comparação das Cartas ---\n");
    printf("Critério de comparação: População\n");
    
    if (populacao1 > populacao2) {
        printf("A cidade vencedora é: %s\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("A cidade vencedora é: %s\n", nomeCidade2);
    } else {
        printf("As duas cidades possuem a mesma população!\n");
    }
    
    return 0;
}