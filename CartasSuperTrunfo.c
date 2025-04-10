#include <stdio.h>

int main()
{
    char estado1;
    char numerodacarta1[20];
    char nomedacidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    char estado2;
    char numerodacarta2[20];
    char nomedacidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("Digite a inicial do estado 1: ");
    scanf(" %c", &estado1);
    printf("Digite o número da carta 1: ");
    scanf(" %s", &numerodacarta1);
    printf("Digite o nome da cidade 1: ");
    scanf(" %s", &nomedacidade1);
    printf("Digite o número de habitantes da cidade 1: ");
    scanf(" %i", &populacao1);
    printf("Digite a área em km² da cidade 1: ");
    scanf(" %f", &area1);
    printf("Digite o pib da cidade 1: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos 1: ");
    scanf(" %i", &pontosturisticos1);

    printf("\n");

    printf("Digite a inicial do estado 2: ");
    scanf(" %c", &estado2);
    printf("Digite o número da carta 2: ");
    scanf(" %s", &numerodacarta2);
    printf("Digite o nome da cidade 2: ");
    scanf(" %s", &nomedacidade2);
    printf("Digite o número de habitantes da cidade 2: ");
    scanf(" %i", &populacao2);
    printf("Digite a área em km² da cidade 2: ");
    scanf(" %f", &area2);
    printf("Digite o pib da cidade 2: ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos 2: ");
    scanf(" %i", &pontosturisticos2);

    printf("\n");
    printf("\n");

    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", numerodacarta1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Número de pontos Turísticos: %i\n", pontosturisticos1);

    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", numerodacarta2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Número de pontos Turísticos: %i\n", pontosturisticos2);

    return 0;
}
