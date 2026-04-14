#include <stdio.h>

int main()
{
    // --- VARIÁVEIS DA CARTA 1 ---
    char estado1, codigo1[4], nome1[50];
    unsigned long int populacao1;
    double area1, pib1, densidade1, pibPerCapita1;
    int pontosTuristicos1;
    float superPoder1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char estado2, codigo2[4], nome2[50];
    unsigned long int populacao2;
    double area2, pib2, densidade2, pibPerCapita2;
    int pontosTuristicos2;
    float superPoder2;

    // --- ENTRADA DE DADOS: CARTA 1 ---
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome: ");
    scanf(" %[^\n]s", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%lf", &area1);
    printf("PIB (bilhões): ");
    scanf("%lf", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = (double)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (double)populacao1;

    // Super Poder: Soma de atributos (Inverso da densidade: 1/densidade)
    superPoder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontosTuristicos1 + (float)pibPerCapita1 + (1.0f / (float)densidade1);

    // --- ENTRADA DE DADOS: CARTA 2 ---
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome: ");
    scanf(" %[^\n]s", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%lf", &area2);
    printf("PIB (bilhões): ");
    scanf("%lf", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = (double)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (double)populacao2;
    superPoder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontosTuristicos2 + (float)pibPerCapita2 + (1.0f / (float)densidade2);

    // --- COMPARAÇÃO E EXIBIÇÃO ---
    printf("\n--- Comparação de Cartas ---\n");

    // O resultado de uma comparação em C é 1 (verdadeiro) ou 0 (falso)
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);

    // Regra especial: Menor densidade vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}