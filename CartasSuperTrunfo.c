#include <stdio.h>

int main()
{
    // --- VARIÁVEIS DA CARTA 1 ---
    // Ajustado para string conforme o novo requisito
    char estado1[50], codigo1[4], nome1[50];
    unsigned long int populacao1;
    double area1, pib1, densidade1, pibPerCapita1;
    int pontosTuristicos1;
    float superPoder1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char estado2[50], codigo2[10], nome2[50];
    unsigned long int populacao2;
    double area2, pib2, densidade2, pibPerCapita2;
    int pontosTuristicos2;
    float superPoder2;

    // --- ENTRADA DE DADOS: CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado: ");
    scanf(" %[^\n]s", estado1);
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
    superPoder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontosTuristicos1 + (float)pibPerCapita1 + (1.0f / (float)densidade1);

    // --- ENTRADA DE DADOS: CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado: ");
    scanf(" %[^\n]s", estado2);
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

    // --- LÓGICA DE COMPARAÇÃO (Atributo: População) ---
    printf("\n--- Comparação de Cartas (Atributo: População) ---\n");
    printf("Carta 1 - %s (%s): %lu\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nome2, estado2, populacao2);

    // Uso de if-else para determinar o vencedor
    if (populacao1 > populacao2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    }
    else if (populacao2 > populacao1)
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }
    else
    {
        printf("Resultado: Empate na população!\n");
    }

    return 0;
}