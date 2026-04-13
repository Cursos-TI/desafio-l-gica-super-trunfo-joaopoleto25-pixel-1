#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
   

    //  Variáveis de Controle de Atributos  //
    int opcao1, opcao2;
    float valor1_C1, valor1_C2, valor2_C1, valor2_C2;

    // --- Menu 1: Primeiro Atributo ---
    printf("\n Escolha o PRIMEIRO Atributo \n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    switch (opcao1) {
        case 1: valor1_C1 = (float)populacao1; valor1_C2 = (float)populacao2; break;
        case 2: valor1_C1 = area1; valor1_C2 = area2; break;
        case 3: valor1_C1 = pib1; valor1_C2 = pib2; break;
        case 4: valor1_C1 = (float)pontosTuristicos1; valor1_C2 = (float)pontosTuristicos2; break;
        case 5: valor1_C1 = densidade1; valor1_C2 = densidade2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // --- Menu 2: Segundo Atributo (DINÂMICO) ---
    printf("\n Escolha o SEGUNDO Atributo \n");
    if (opcao1 != 1) printf("1. Populacao\n");
    if (opcao1 != 2) printf("2. Area\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Pontos Turisticos\n");
    if (opcao1 != 5) printf("5. Densidade\n");
    printf("Escolha: ");
    scanf("%d", &opcao2);

    // Validação para não repetir atributo
    if (opcao1 == opcao2) {
        printf("Erro: Voce escolheu o mesmo atributo duas vezes!\n");
        return 0;
    }

    switch (opcao2) {
        case 1: valor2_C1 = (float)populacao1; valor2_C2 = (float)populacao2; break;
        case 2: valor2_C1 = area1; valor2_C2 = area2; break;
        case 3: valor2_C1 = pib1; valor2_C2 = pib2; break;
        case 4: valor2_C1 = (float)pontosTuristicos1; valor2_C2 = (float)pontosTuristicos2; break;
        case 5: valor2_C1 = densidade1; valor2_C2 = densidade2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // --- Lógica de Soma com Tratamento de Densidade ---
    // Pontos de Comparação (Invertendo a densidade para que a menor vença)
    float pontosC1 = (opcao1 == 5) ? (1.0f / valor1_C1) : valor1_C1;
    pontosC1 += (opcao2 == 5) ? (1.0f / valor2_C1) : valor2_C1;

    float pontosC2 = (opcao1 == 5) ? (1.0f / valor1_C2) : valor1_C2;
    pontosC2 += (opcao2 == 5) ? (1.0f / valor2_C2) : valor2_C2;

    // Somas Reais (Apenas para exibição)
    float somaBruta1 = valor1_C1 + valor2_C1;
    float somaBruta2 = valor1_C2 + valor2_C2;

    // --- Resultado Final ---
    printf("\n--- RESULTADO DA RODADA ---\n");
    printf("Cidades: %s vs %s\n\n", cidade1, cidade2);

    printf("%s: Atributo 1: %.2f | Atributo 2: %.2f | Soma: %.2f\n", cidade1, valor1_C1, valor2_C1, somaBruta1);
    printf("%s: Atributo 1: %.2f | Atributo 2: %.2f | Soma: %.2f\n", cidade2, valor1_C2, valor2_C2, somaBruta2);
    printf("--------------------------------------------------\n");

    // Comparação final baseada nos pontos (lógica de maior/menor tratada)
    if (pontosC1 > pontosC2) {
        printf("VENCEDOR: %s\n", cidade1);
    } else if (pontosC2 > pontosC1) {
        printf("VENCEDOR: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}