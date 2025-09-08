#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo Nível Novato\n");

    // - Variáveis da carta 01 -

    int estado, codigo[4], cidade[25];
    int populacao, pontos;
    float area, pib;
    float mediadensidade, mediacapital;

    // - Variáveis da carta 02 -

    int estado2, codigo2[4], cidade2[25];
    int populacao2, pontos2;
    float area2, pib2;
    float mediadensidade2, mediacapital2; 

    // - Carta número 01 -

    printf("\n"); // --- Espaçamento ---

    printf("\n\n");

    // - Entrada de dados 01 - //

    printf("Digite a primeira letra do Estado: \n");
    scanf("%c", &estado);

    printf("Digite o código da Carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade);

    printf("Digite o número da População: \n");
    scanf("%d", &populacao);

    printf("Digite a área da Cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos Turísticos: \n");
    scanf("%d", &pontos);

    
    printf("\n\n"); // - Espaçamento -

    // - Cálculos após entrada de dados 01 - //
    
    mediadensidade = populacao / area;
    mediacapital = (pib * 1e9) / populacao;


    // - Saída de dados 01 - 

    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Quantidade de Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", mediadensidade);
    printf("PIB per Capita: %.2f reais\n", mediacapital);

     // -- Carta número um (2) --

    printf("\n"); // Espaçamento //

    // -- Carta número 2 --

    printf("Carta 2: \n\n");

    // -- Entrada de dados 02 -- //

    printf("Digite a primeira letra do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da Carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o número da População: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da Cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos Turistícos: \n");
    scanf("%d", &pontos2);

    printf("\n\n"); // Espaçamento //


    // --- Cálculos após entrada de dados 02 --- //

    mediadensidade2 = populacao2 / area2;
    mediacapital2 = (pib2 * 1e9) / populacao2;

    // --- Saída de dados 02 --- //

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Quantidade de pontos Turísticos: %.2f hab/km²\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", mediadensidade2);
    printf("PIB per capita: %.2f reais\n", mediacapital2);

    printf("\n\n"); // Espaçamento 


    // Comparação entre as Cartas

    printf("---- Comparação de Atributos das Cartas ---- \n\n");

    printf("Nome da Cidade - %s\n", cidade);
    printf("Escolha o atributo para comparar abaixo:\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n\n");

    int opcao;
    printf("Escolha um número de [1] à [5]:\n");
    scanf("%d", &opcao);

    printf("\n\n"); // Espaçamento 


    // Lógica de comparação de Atributos

printf(" --- Resultado da Comparação: ---\n\n");

switch (opcao) {
    case 1:
    if (populacao > populacao2)
        printf("População: %d habitantes - Carta 1 Venceu!\n", populacao);
    else if (populacao < populacao2)
        printf("População: %d habitantes - Carta 2 Venceu!\n", populacao2);
    else
        printf(" ----- Empate! ----\n");
        break;

    case 2:
        if (area > area2)
            printf("Área: %.2f km² Carta 1 Venceu!\n", area);
        else if (area < area2)
            printf("Área: %.2f km² - Carta 2 Venceu!\n", area2);
        else
            printf(" ---- Empate! ----\n");
        break;

    case 3:
        if (pib > pib2)
            printf("PIB: %.2f bilhões - Carta 1 Venceu!\n", pib);
        else if (pib < pib2)
            printf("PIB: %.2f bilhões - Carta 2 Venceu!\n", pib2);
        else
            printf(" --- Empate! ---\n");
        break;

    case 4:
        if (pontos > pontos2)
            printf("Pontos turísticos: %d - Carta 1 Venceu!\n", pontos);
        else if (pontos < pontos2)
            printf("Pontos turísticos: %d - Carta 2 Venceu!\n", pontos2);
        else
            printf("--- Empate! ---\n");
        break;
    
    case 5:
        if (mediadensidade > mediadensidade2)
            printf("Densidade Demográfica %.2f hab/km² - Carta 1 Venceu!\n", mediadensidade);
        else if (mediadensidade < mediadensidade2)
            printf("Densidade Demográfica %.2f hab/km² - Carta 2 Venceu!\n", mediadensidade2);
        else
            printf("--- Empate! ---\n");
        break;

        default:
            printf("Opção inválida!\n");
            break;

                 
}

return 0;

}
