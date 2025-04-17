#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Dados da carta 1
    char estado1[50], cidade1[50], codigo1[50];
    int populacao1, pontos_turisticos1;
    float pib1, area1, densidade1, pib_per_capita1, super_poder1;

    // Dados da carta 2
    char estado2[50], cidade2[50], codigo2[50];
    int populacao2, pontos_turisticos2;
    float pib2, area2, densidade2, pib_per_capita2, super_poder2;

    // Cadastro das cartas
    printf("*** Cadastro das Cartas ***\n");
    printf("Carta 1\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("PIB (em milhoes): ");
    scanf("%f", &pib1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000) / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1;

    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("PIB (em milhoes): ");
    scanf("%f", &pib2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000) / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2;

    int opcao;
    printf("\n*** Menu Interativo ***\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &opcao);

    printf("\n*** Resultado da Comparação ***\n");
    switch (opcao) {
        case 1:
            printf("Populacao: %d vs %d\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: Carta 1 (%s)\n", estado1);
            else if (populacao2 > populacao1)
                printf("Vencedor: Carta 2 (%s)\n", estado2);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Area: %.2f km² vs %.2f km²\n", area1, area2);
            if (area1 > area2)
                printf("Vencedor: Carta 1 (%s)\n", estado1);
            else if (area2 > area1)
                printf("Vencedor: Carta 2 (%s)\n", estado2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("PIB: %.2f milhoes vs %.2f milhoes\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Vencedor: Carta 1 (%s)\n", estado1);
            else if (pib2 > pib1)
                printf("Vencedor: Carta 2 (%s)\n", estado2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Pontos Turisticos: %d vs %d\n", pontos_turisticos1, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2)
                printf("Vencedor: Carta 1 (%s)\n", estado1);
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("Vencedor: Carta 2 (%s)\n", estado2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Densidade Demografica: %.2f vs %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: Carta 1 (%s)\n", estado1);
            else if (densidade2 < densidade1)
                printf("Vencedor: Carta 2 (%s)\n", estado2);
            else
                printf("Empate!\n");
            break;
        case 6:
            printf("PIB per Capita: %.2f vs %.2f\n", pib_per_capita1, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2)
                printf("Vencedor: Carta 1 (%s)\n", estado1);
            else if (pib_per_capita2 > pib_per_capita1)
                printf("Vencedor: Carta 2 (%s)\n", estado2);
            else
                printf("Empate!\n");
            break;
        case 7:
            printf("Super Poder: %.2f vs %.2f\n", super_poder1, super_poder2);
            if (super_poder1 > super_poder2)
                printf("Vencedor: Carta 1 (%s)\n", estado1);
            else if (super_poder2 > super_poder1)
                printf("Vencedor: Carta 2 (%s)\n", estado2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
