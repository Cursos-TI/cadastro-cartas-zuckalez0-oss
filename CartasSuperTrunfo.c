#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado_a;
  char estado_b;

  char nome_da_cidade_a[30];
  char nome_da_cidade_b[30];

  int populacao_a;
  int populacao_b;

  float area_a;
  float area_b;

  float pib_a;
  float pib_b;

  int numero_de_pontos_turisticos_a;
  int numero_de_pontos_turisticos_b;

  char codigo_da_carta_a[4];
  char codigo_da_carta_b[4];

  // Área para entrada de dados

  printf("Super Trunfo de Paises\n\n");

  printf("Digite os dados da carta 1:\n");
  printf("Digite a letra do estado: ");
  scanf(" %c", &estado_a);

  printf("Digite o nome da cidade: ");
  scanf("%s", nome_da_cidade_a);

  printf("Digite a populacao da cidade: ");
  scanf("%d", &populacao_a);

  printf("Digite a area da cidade: ");
  scanf("%f", &area_a);

  printf("Digite o PIB da cidade: ");
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

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib_b);

  printf("Digite o numero de pontos turisticos da cidade: ");
  scanf("%d", &numero_de_pontos_turisticos_b);

  sprintf(codigo_da_carta_a, "%c01", estado_a);
  sprintf(codigo_da_carta_b, "%c02", estado_b);

  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado_a);
  printf("Codigo da carta: %s\n", codigo_da_carta_a);
  printf("Nome da cidade: %s\n", nome_da_cidade_a);
  printf("Populacao: %d\n", populacao_a);
  printf("Area: %.2f\n", area_a);
  printf("PIB: %.2f\n", pib_a);
  printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos_a);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado_b);
  printf("Codigo da carta: %s\n", codigo_da_carta_b);
  printf("Nome da cidade: %s\n", nome_da_cidade_b);
  printf("Populacao: %d\n", populacao_b);
  printf("Area: %.2f\n", area_b);
  printf("PIB: %.2f\n", pib_b);
  printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos_b);

return 0;
} 
