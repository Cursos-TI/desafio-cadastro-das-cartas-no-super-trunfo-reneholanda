#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Variáveis dos atributos das cidades.

    char estado_carta1, estado_carta2;
    char codigo_cidade1[20], codigo_cidade2[20];
    char nome_cidade1[20], nome_cidade2[20];
    int  populacao_cidade1, populacao_cidade2;
    float area_cidade1, area_cidade2;
    float pib_cidade1, pib_cidade2;
    int pontoturistico_cid1, pontoturistico_cid2;

    // Cadastro das Cartas:

    printf("Insira os dados das cartas\n");

    printf("Carta 1\n");
    printf("Estado: ");
    scanf("%c", &estado_carta1);
    printf("Código da carta: ");
    scanf(" %s", codigo_cidade1);
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade1);
    printf("População: ");
    scanf("%i", &populacao_cidade1);
    printf("Área: ");
    scanf("%f", &area_cidade1);
    printf("PIB: ");
    scanf("%f", &pib_cidade1);
    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontoturistico_cid1);

    printf("Carta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado_carta2);
    printf("Código da carta: ");
    scanf("%s", codigo_cidade2);
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade2);
    printf("População: ");
    scanf("%i", &populacao_cidade2);
    printf("Área: ");
    scanf("%f", &area_cidade2);
    printf("PIB: ");
    scanf("%f", &pib_cidade2);
    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontoturistico_cid2);

    printf("\n");
    
    // Exibição dos Dados das Cartas:

    // Exibição dos Dados da Carta 1:
    printf("Carta 1\n Estado: %c\n Código: %s\n", estado_carta1, codigo_cidade1);
    printf(" Nome da Cidade: %s\n População: %i\n", nome_cidade1, populacao_cidade1);
    printf(" Área: %.2f km²\n PIB: %.2f bilhões de reais\n Numeros de Pontos Turísticos: %i\n", area_cidade1, pib_cidade1, pontoturistico_cid1);

    printf("\n");

    //Exibição dos Dados da Carta 2
    printf("Carta 2\n Estado: %c\n Código: %s\n", estado_carta2, codigo_cidade2);
    printf(" Nome da Cidade: %s\n População: %i\n", nome_cidade2, populacao_cidade2);
    printf(" Área: %.2f km²\n PIB: %.2f bilhões de reais\n Numeros de Pontos Turísticos: %i\n", area_cidade2, pib_cidade2, pontoturistico_cid2);

    return 0;
}
