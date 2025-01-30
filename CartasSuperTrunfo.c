#include <stdio.h>
#include <locale.h>

int main() {
    // Definição do tipo de dados para os atributos da cidade
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "C");
    char estado;
    int numero_cidade;
    unsigned long populacao;
    double area;
    unsigned long PIB;
    int pontosTuristicos;

    // Leitura dos Dados das Cartas:
    printf("Digite o nome do estado(A-H): \n");
    scanf(" %c", &estado);

    printf("Digite o número da cidade(1-4): \n");
    scanf("%d", &numero_cidade);

    printf("População: \n");
    scanf("%lu", &populacao);
    
    printf("Área: \n");
    scanf("%lf", &area);

    printf("PIB: \n");
    scanf("%lu", &PIB);

    printf("Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos);
        
    // Impressão dos Dados das Cartas:
    printf("\nCódigo da carta: %c%02d \n", estado, numero_cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %lu\n", PIB);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    // Fim da interação
    return 0;
}