#include <stdio.h>

int main() {
    // Carta 1
    printf("Carta 1\n");
    char Estado1[20] = "Parana";
    char Codigo1[20] = "A01";
    char Cidade1[20] = "Londrina";
    int Populacao1 = 300000;
    float Areakm21 = 1.652;
    float Pib1 = 40.636;
    int Numeropontosturisticos1 = 35;

    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área km²: %.3f\n", Areakm21);
    printf("PIB: %.3f\n", Pib1);
    printf("Número de pontos turísticos: %d\n", Numeropontosturisticos1);
    printf("\n\n");
    // Carta 2
    printf("Carta 2\n");
    char Estado2[20] = "Bahia";
    char Codigo2[20] = "B01";
    char Cidade2[20] = "Salvador";
    int Populacao2 = 450000;
    float Areakm22 = 3.500;
    float Pib2 = 50.000;
    int Numeropontosturisticos2 = 40;

    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área km²: %.3f\n", Areakm22);
    printf("PIB: %.3f\n", Pib2);
    printf("Número de pontos turísticos: %d\n", Numeropontosturisticos2);

    return 0;
}