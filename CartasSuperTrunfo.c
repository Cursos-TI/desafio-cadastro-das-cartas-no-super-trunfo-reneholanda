#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio. 

int main() {

    // Variáveis dos atributos das cidades.

    char estado_carta1, estado_carta2;
    char codigo_cidade1[20], codigo_cidade2[20];
    char nome_cidade1[20], nome_cidade2[20];
    unsigned long int  populacao_cidade1, populacao_cidade2;
    float area_cidade1, area_cidade2;
    float pib_cidade1, pib_cidade2;
    int pontoturistico_cid1, pontoturistico_cid2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capta1, pib_per_capta2;
    float super_poder1, super_poder2;
    int menu;


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
    scanf("%lu", &populacao_cidade1);
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
    scanf("%lu", &populacao_cidade2);
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
    printf(" Nome da Cidade: %s\n População: %lu\n", nome_cidade1, populacao_cidade1);
    printf(" Área: %.2f km²\n PIB: %.2f bilhões de reais\n Numeros de Pontos Turísticos: %i\n", area_cidade1, pib_cidade1, pontoturistico_cid1);

    // Calculando Densidade Populacional e PIB per Capita Carta 1
    densidade_populacional1 = populacao_cidade1 / area_cidade1;
    pib_per_capta1 = (float) populacao_cidade1 / pib_cidade1;

    // Exibindo os resultados de Densidade Populacional e PIB per Capita Carta 1
    printf(" Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf(" PIB per Capita: %.2f reais\n", pib_per_capta1);

    // Calculando e exibindo o Super Poder Carta 1
    super_poder1 = populacao_cidade1 + area_cidade1 + pib_cidade1 + pontoturistico_cid1 + pib_per_capta1 + densidade_populacional1 / 1;
    printf(" Super Poder: %.2f\n",super_poder1);

    printf("\n");

    //Exibição dos Dados da Carta 2
    printf("Carta 2\n Estado: %c\n Código: %s\n", estado_carta2, codigo_cidade2);
    printf(" Nome da Cidade: %s\n População: %lu\n", nome_cidade2, populacao_cidade2);
    printf(" Área: %.2f km²\n PIB: %.2f bilhões de reais\n Numeros de Pontos Turísticos: %i\n", area_cidade2, pib_cidade2, pontoturistico_cid2);

    // Calculando Densidade Populacional e PIB per Capita
    densidade_populacional2 = populacao_cidade2 / area_cidade2;
    pib_per_capta2 = (float) populacao_cidade2 / pib_cidade2;

    // Exibindo os resultados de Densidade Populacional e PIB per Capita
    printf(" Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf(" PIB per Capita: %.2f reais\n", pib_per_capta2);

    // Calculando e exibindo o Super Poder Carta 2
    super_poder2 = populacao_cidade2 + area_cidade2 + pib_cidade2 + pontoturistico_cid2 + pib_per_capta2 + densidade_populacional2 / 1;
    printf(" Super poder: %.2f\n", super_poder2);

    printf("\n");


    // Comparando as Cartas
    int resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF, resultadoG;
    resultadoA = populacao_cidade1 > populacao_cidade2;
    resultadoB = area_cidade1 > area_cidade2;
    resultadoC = pib_cidade1 > pib_cidade2;
    resultadoD = pontoturistico_cid1 > pontoturistico_cid2;
    resultadoE = densidade_populacional1 < densidade_populacional2;
    resultadoF = pib_per_capta1 > pib_per_capta2;
    resultadoG = super_poder1 > super_poder2;

    // Exibindo resultado das comparações
    printf("Comparação de Cartas\n");

    printf(" População:%i\n", resultadoA);
    printf(" Área:%i\n", resultadoB);
    printf(" PIB:%i\n", resultadoC);
    printf(" Pontos Turísticos:%i\n", resultadoD);
    printf(" Densidade Populacional:%i\n", resultadoE);
    printf(" PIB per Capita:%i\n", resultadoF);
    printf(" Super Poder:%i\n", resultadoG);

    printf("\n");

    //Comparando atributos das cartas usando estruturas de decisão
    printf(" Comparação de cartas (Atributo: População):\n");
    printf(" Carta 1 - %s : %lu\n", nome_cidade1, populacao_cidade1);
    printf(" Carta 2 - %s : %lu\n", nome_cidade2, populacao_cidade2);

    if(populacao_cidade1 > populacao_cidade2){
        printf(" Resultado: Carta 1 venceu!\n");
    } else {
        printf(" Resultado: Carta 2 venceu!\n");
    }

    // Menu interativo para escolha e comparação dos atributos 

    printf("\n");

    printf("### Comparação de cartas ###\n");
    printf("Opções:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha um atributo: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("Resultado:\n");
        printf("%s e %s \n", nome_cidade1, nome_cidade2);
        printf("Atributo usado: População\n");
        printf("População carta 1 (%s): %lu - População carta 2 (%s): %lu\n", nome_cidade1, populacao_cidade1, nome_cidade2, populacao_cidade2);
        if (populacao_cidade1 > populacao_cidade2)
        {
            printf("Carta 1 venceu!!\n");
        } else if(populacao_cidade2 > populacao_cidade1){
            printf("Carta 2 venceu!\n");
        } else if (populacao_cidade1 == populacao_cidade2){
            printf("Empate!\n");
        }
        
        break;
    case 2:
        printf("Resultado:\n");
        printf("%s e %s \n", nome_cidade1, nome_cidade2);
        printf("Atributo usado: Área\n");
        printf("Área carta 1 (%s): %.2f km² - Área carta 2 (%s): %.2f km²\n", nome_cidade1, area_cidade1, nome_cidade2, area_cidade2);
        if (area_cidade1 > area_cidade2)
        {
            printf("Carta 1 venceu!!\n");
        } else if(area_cidade2 > area_cidade1){
            printf("Carta 2 venceu!\n");
        } else if (area_cidade1 == area_cidade2){
            printf("Empate!\n");
        }
            
    
    default:
        break;
    }

    
    return 0;
}
