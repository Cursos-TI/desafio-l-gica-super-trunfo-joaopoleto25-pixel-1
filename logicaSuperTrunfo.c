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
   

    // --- Menu Interativo ---

    int opcao;

    
    printf("\n--- DESAFIO SUPER TRUNFO: COMPARACAO ---\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO ---\n");
    printf("Carta 1: %s | Carta 2: %s\n", cidade1, cidade2);

//  Comparação de Cartas switch //



switch (opcao) {
    case 1: // População (Maior vence)
            printf("Atributo: Populacao\n");
            printf("%s: %d | %s: %d\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área (Maior vence)
            printf("Atributo: Area\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, area1, cidade2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB (Maior vence)
            printf("Atributo: PIB\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos (Maior vence)
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d | %s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos1);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (MENOR vence)
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km2 | %s: %.2f hab/km2\n", cidade1, densidade1, cidade2, densidade2);
            // ATENÇÃO: Lógica invertida (<)
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (Menor densidade)\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (Menor densidade)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida no menu.\n");
            break;
    }

    return 0;
}