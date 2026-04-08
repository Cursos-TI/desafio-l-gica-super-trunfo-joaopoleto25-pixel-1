#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // --- definição das variaveis (CARTAS 1)

  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float pibPerCapita1;
  float densidade1;
  float pibCapita1;
  float superPoder1;



      // --- definição das variaveis (CARTAS 2)


  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float pibPerCapita2;
  float densidade2;
  float pibCapita2;
  float superPoder2;

      // --- Cadastro da carta (CARTAS 1)

  printf("Cadastro da carta 1 \n");

  printf("Estado A: ");
  scanf(" %c", &estado1);

  printf("codigo A01: ");
  scanf(" %s", codigo1);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", cidade1);
  
  printf("Popolacao: ");
  scanf(" %d", &populacao1);

  printf("Area (km2): ");
  scanf(" %f", &area1);

  printf("PIB: ");
  scanf(" %f", &pib1);

  printf("Número de Pontos Turísticos: ");
  scanf(" %d", &pontosTuristicos1);

  densidade1 = (float)populacao1 / area1;
  pibPerCapita1 = pib1 / (float)populacao1;

  printf("\n");
  
  // --- Cadastro da carta (CARTAS 2)

  printf("Cadastro da carta 2 \n");

  printf("Estado B: ");
  scanf(" %c", &estado2);

  printf("codigo B02: ");
  scanf(" %s", codigo2);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", cidade2);
  
  printf("Populacao: ");
  scanf(" %d", &populacao2);

  printf("Area (km2): ");
  scanf(" %f", &area2);

  printf("PIB: ");
  scanf(" %f", &pib2);

  printf("Número de Pontos Turísticos: ");
  scanf(" %d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
 
  // Exibição - Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f Reais \n", pibPerCapita1);
  

    // Exibição - Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f Reais \n", pibPerCapita2);
   
// --- Comparação de Cartas IF e Else ---

    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    if (populacao1 > populacao2) {
         printf("Cidade A tem maior população.\n");
     } else {
         printf("Cidade B tem maior população.\n");
     }

         if (area1 > area2) {
         printf("Cidade A tem maior Area.\n");
     } else {
         printf("Cidade B tem maior Area.\n");
     }

         if (pibPerCapita1 > pibPerCapita2) {
         printf("Cidade A tem maior PIB.\n");
     } else {
         printf("Cidade B tem maior PIB.\n");
     }

     // --- VENCEDOR ---

    printf("\nResultado da Comparação de cartas (Atributo: População):\n");

    printf("Carta 1: %s: %lu\n", cidade1, populacao1);
   
    printf("Carta 2: %s:  %lu\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("\n Vencedor: %s com %lu habitantes!\n", cidade1, populacao1);
    } else if (populacao2 > populacao1) {
        printf("Vencedor: %s com %lu habitantes!\n", cidade2, populacao2);
    } else {
        printf("Empate! Ambas têm a mesma população.\n\n");
    }






    return 0;
}
