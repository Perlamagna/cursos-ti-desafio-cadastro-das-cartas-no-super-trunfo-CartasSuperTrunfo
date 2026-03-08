#include <stdio.h>

int main() {

    // CARTA 1
    char pais1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8516000;
    float pib1 = 1.92;
    int pontos1 = 20;

    // CARTA 2
    char pais2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780000;
    float pib2 = 0.63;
    int pontos2 = 15;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;

    printf("=== SUPER TRUNFO ===\n");
    printf("Escolha o PRIMEIRO atributo:\n");

    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    scanf("%d", &atributo1);

    printf("\nEscolha o SEGUNDO atributo:\n");

    if(atributo1 != 1) printf("1 - Populacao\n");
    if(atributo1 != 2) printf("2 - Area\n");
    if(atributo1 != 3) printf("3 - PIB\n");
    if(atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if(atributo1 != 5) printf("5 - Densidade Demografica\n");

    scanf("%d", &atributo2);

    if(atributo1 == atributo2){
        printf("Erro: atributos iguais!\n");
        return 0;
    }

    float valor1_c1, valor1_c2;
    float valor2_c1, valor2_c2;

    // ATRIBUTO 1
    switch(atributo1){

        case 1:
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
            break;

        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            break;

        case 3:
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            break;

        case 4:
            valor1_c1 = pontos1;
            valor1_c2 = pontos2;
            break;

        case 5:
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            break;

        default:
            printf("Opcao invalida\n");
            return 0;
    }

    // ATRIBUTO 2
    switch(atributo2){

        case 1:
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
            break;

        case 2:
            valor2_c1 = area1;
            valor2_c2 = area2;
            break;

        case 3:
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            break;

        case 4:
            valor2_c1 = pontos1;
            valor2_c2 = pontos2;
            break;

        case 5:
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            break;

        default:
            printf("Opcao invalida\n");
            return 0;
    }

    // SOMA DOS ATRIBUTOS
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n=== RESULTADO ===\n");

    printf("%s: %.2f + %.2f = %.2f\n", pais1, valor1_c1, valor2_c1, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", pais2, valor1_c2, valor2_c2, soma2);

    // OPERADOR TERNARIO
    (soma1 > soma2) ? printf("\nVencedor: %s\n", pais1) :
    (soma2 > soma1) ? printf("\nVencedor: %s\n", pais2) :
    printf("\nEmpate!\n");

    return 0;
}