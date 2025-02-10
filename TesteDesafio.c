#include <stdio.h>

// Desafio do Super Trunfo - Jogo de Cartas de Cidades.

int main() {
    // Declaração das variáveis para armazenar os dados da cidade
    
    char estado; // Letra do estado (A-H)
    char codigo[4]; // Código da carta (ex: A01, B02)
    char nomeCidade[50]; // Nome da cidade
    int populacao; // Número de habitantes
    float area; // Área total em km²
    float pib; // Produto Interno Bruto da cidade
    int pontosTuristicos; // Quantidade de pontos turísticos

    // As linhas abaixo são para entrada de dados
    
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado); // Coloquei um espaço antes do %c para evitar problemas com o buffer

    printf("Digite o código da carta (ex: A01, B02): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade); // Lê uma string com espaços

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao); // Coloquei um espaço antes do %d para evitar problemas com o buffer

    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area); // Coloquei um espaço antes do %f para evitar problemas com o buffer

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib); // Coloquei um espaço antes do %f para evitar problemas com o buffer

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos); // Coloquei um espaço antes do %d para evitar problemas com o buffer

    // As linhas abaixo são para exibição dos dados cadastrados
    
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}