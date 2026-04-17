#include <stdio.h>

int main() {
    char estado_a, estado_b;
    char nome_da_cidade_a[60], nome_da_cidade_b[60];
    int populacao_a, populacao_b;
    float area_a, area_b;
    float pib_a, pib_b; // PIB em bilhões
    int numero_de_pontos_turisticos_a, numero_de_pontos_turisticos_b;

    char codigo_da_carta_a[4], codigo_da_carta_b[4];

    float densidade_populacional_a, densidade_populacional_b;
    float pib_per_capita_a, pib_per_capita_b;
    float super_poder_a, super_poder_b;

    int resultado_populacao;
    int resultado_area;
    int resultado_pib;
    int resultado_pontos_turisticos;
    int resultado_densidade;
    int resultado_pib_per_capita;
    int resultado_super_poder;

    printf("Super Trunfo de Cidades\n\n");

    printf("Digite os dados da carta 1:\n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado_a);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade_a);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao_a);

    printf("Digite a area da cidade: ");
    scanf("%f", &area_a);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib_a);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &numero_de_pontos_turisticos_a);

    printf("\nDigite os dados da carta 2:\n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado_b);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade_b);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao_b);

    printf("Digite a area da cidade: ");
    scanf("%f", &area_b);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib_b);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &numero_de_pontos_turisticos_b);

    sprintf(codigo_da_carta_a, "%c01", estado_a);
    sprintf(codigo_da_carta_b, "%c02", estado_b);

    densidade_populacional_a = (float) populacao_a / area_a;
    densidade_populacional_b = (float) populacao_b / area_b;

    pib_per_capita_a = (pib_a * 1000000000.0f) / populacao_a;
    pib_per_capita_b = (pib_b * 1000000000.0f) / populacao_b;

    super_poder_a = populacao_a
                  + area_a
                  + pib_a
                  + numero_de_pontos_turisticos_a
                  + pib_per_capita_a
                  + (1.0f / densidade_populacional_a);

    super_poder_b = populacao_b
                  + area_b
                  + pib_b
                  + numero_de_pontos_turisticos_b
                  + pib_per_capita_b
                  + (1.0f / densidade_populacional_b);

    resultado_populacao = populacao_a > populacao_b;
    resultado_area = area_a > area_b;
    resultado_pib = pib_a > pib_b;
    resultado_pontos_turisticos = numero_de_pontos_turisticos_a > numero_de_pontos_turisticos_b;
    resultado_densidade = densidade_populacional_a < densidade_populacional_b;
    resultado_pib_per_capita = pib_per_capita_a > pib_per_capita_b;
    resultado_super_poder = super_poder_a > super_poder_b;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_a);
    printf("Codigo: %s\n", codigo_da_carta_a);
    printf("Nome da Cidade: %s\n", nome_da_cidade_a);
    printf("Populacao: %d\n", populacao_a);
    printf("Area: %.2f km2\n", area_a);
    printf("PIB: %.2f bilhoes de reais\n", pib_a);
    printf("Numero de Pontos Turisticos: %d\n", numero_de_pontos_turisticos_a);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional_a);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_a);
    printf("Super Poder: %.2f\n", super_poder_a);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_b);
    printf("Codigo: %s\n", codigo_da_carta_b);
    printf("Nome da Cidade: %s\n", nome_da_cidade_b);
    printf("Populacao: %d\n", populacao_b);
    printf("Area: %.2f km2\n", area_b);
    printf("PIB: %.2f bilhoes de reais\n", pib_b);
    printf("Numero de Pontos Turisticos: %d\n", numero_de_pontos_turisticos_b);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional_b);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_b);
    printf("Super Poder: %.2f\n", super_poder_b);

    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", resultado_populacao ? 1 : 2, resultado_populacao);
    printf("Area: Carta %d venceu (%d)\n", resultado_area ? 1 : 2, resultado_area);
    printf("PIB: Carta %d venceu (%d)\n", resultado_pib ? 1 : 2, resultado_pib);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", resultado_pontos_turisticos ? 1 : 2, resultado_pontos_turisticos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado_densidade ? 1 : 2, resultado_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado_pib_per_capita ? 1 : 2, resultado_pib_per_capita);
    printf("Super Poder: Carta %d venceu (%d)\n", resultado_super_poder ? 1 : 2, resultado_super_poder);

    return 0;
}