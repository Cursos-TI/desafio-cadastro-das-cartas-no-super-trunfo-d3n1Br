#include <stdio.h>

int main (){

    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    char codigo1[20], codigo2[20], estado1[20], estado2[20], nome1[20], nome2[20];

// Cadastro da Primeira Carta //
    printf("Digite o Estado da Primeira Carta: ");
    scanf("%s", &estado1);
    
    printf("Digite o Código da Primeira Carta: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da Primeira Cidade: ");
    scanf("%s", &nome1);

    printf("Digite a População da Primeira Cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da Primeira Cidade: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da Primeira Cidade ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos da Primeira Cidade: ");
    scanf("%d", &pontos1);

// Cadastro da Segunda Carta //
    printf("Digite o Estado da Segunda Carta: ");
    scanf("%s", &estado2);

    printf("Digite o Código da Segunda Carta: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da Segunda Cidade: ");
    scanf("%s", &nome2);

    printf("Digite a População da Segunda Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da Segunda Cidade: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da Segunda Cidade ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos da Segunda Cidade: ");
    scanf("%d", &pontos2);

// Dados da Primeira Carta //
    printf("\nCarta 1:\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f Bilhões de Reais\n Número de Pontos Turísticos: %d\n", estado1, codigo1, nome1, populacao1, area1, pib1, pontos1);

// Dados da Segunda Carta //
    printf("\nCarta 2:\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f Bilhões de Reais\n Número de Pontos Turísticos: %d\n", estado2, codigo2, nome2, populacao2, area2, pib2, pontos2);

return 0;

}