#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado[10];
  char codigo[10];
  char nome[10];
  int populacao;
  float area;
  float pib; 
  int numero;

  // Área para entrada de dados
  // Carta 01

  printf ("Carta 01 \n");

  printf ("Digite o estado: \n");
  scanf ("%s", &estado);

  printf ("Digite o codigo da carta: \n");
  scanf ("%s", &codigo);

  printf ("Digite o nome do estado: \n");
  scanf ("%s", &nome);

  printf ("Digite a população: \n");
  scanf ("%d", &populacao);

  printf ("Digite a area (em km²): \n");
  scanf ("%f", &area);

  printf ("Digite o PIB: \n");
  scanf ("%f", &pib);

  printf ("Digite o numero de pontos turisticos: \n");
  scanf ("%d", &numero);
  
  // Área para exibição dos dados da cidade

  printf ("Carta 1\n");
  printf ("Estado: %s\n", estado);
  printf ("Codigo da carta: %s\n", codigo);
  printf ("Nome do estado: %s\n", nome);
  printf ("População: %d\n", populacao);
  printf ("Area (em km²): %f\n", area);
  printf ("PIB: %f\n", pib);
  printf ("Numero de pontos turisticos: %d\n", numero);

  // Área para entrada de dados
  // Carta 02

  printf ("Carta 02 \n");

  printf ("Digite o estado: \n");
  scanf ("%s", &estado);

  printf ("Digite o codigo da carta: \n");
  scanf ("%s", &codigo);

  printf ("Digite o nome do estado: \n");
  scanf ("%s", &nome);

  printf ("Digite a população: \n");
  scanf ("%d", &populacao);

  printf ("Digite a area (em km²): \n");
  scanf ("%f", &area);

  printf ("Digite o PIB: \n");
  scanf ("%f", &pib);

  printf ("Digite o numero de pontos turisticos: \n");
  scanf ("%d", &numero);

  // Área para exibição dos dados da cidade

  printf ("Carta 2\n");
  printf ("Estado: %s\n", estado);
  printf ("Codigo da carta: %s\n", codigo);
  printf ("Nome do estado: %s\n", nome);
  printf ("População: %d\n", populacao);
  printf ("Area (em km²): %f\n", area);
  printf ("PIB: %f\n", pib);
  printf ("Numero de pontos turisticos: %d\n", numero);

return 0;
} 
