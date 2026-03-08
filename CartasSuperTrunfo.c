#include <stdio.h>

int main() {

    // =========================
    // DECLARAÇÃO DAS CARTAS
    // =========================

    // Carta 1
    char estado1[3];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    float densidade2;
    float pibPerCapita2;

    // =========================
    // CADASTRO CARTA 1
    // =========================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (ex: SP): ");
    scanf("%s", estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Calcula valores
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // =========================
    // CADASTRO CARTA 2
    // =========================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Calcula valores
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // =========================
    // COMPARAÇÃO DAS CARTAS
    // ATRIBUTO ESCOLHIDO: POPULAÇÃO
    // =========================

    printf("\nComparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    // Estrutura de decisão para determinar vencedor
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}