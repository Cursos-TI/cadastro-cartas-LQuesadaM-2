#include <stdio.h>

int main()
{
    // --- VARIÁVEIS DA CARTA 1 ---
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    double area1, pib1;
    double densidadePopulacional1, pibPerCapita1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    double area2, pib2;
    double densidadePopulacional2, pibPerCapita2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%lf", &area1);

    printf("PIB: ");
    scanf("%lf", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Maior preciçao
    densidadePopulacional1 = (double)populacao1 / area1;

    // Multiplicaçao por 1.000.000.000 para obter o valor real.
    pibPerCapita1 = (pib1 * 1000000000.0) / (double)populacao1;

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%lf", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Maior preciçao
    densidadePopulacional2 = (double)populacao2 / area2;

    // Multiplicaçao por 1.000.000.000 para obter o valor real.
    pibPerCapita2 = (pib2 * 1000000000.0) / (double)populacao2;

    // --- EXIBIÇÃO DOS DADOS ---
    printf("\n============================\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB percapita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB percapita: %.2f reais\n", pibPerCapita2);

    return 0;
}
