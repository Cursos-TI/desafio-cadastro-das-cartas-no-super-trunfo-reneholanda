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
    scanf("%s", codigo_cidade1);
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
    scanf("%c", &estado_carta2);
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


    

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
