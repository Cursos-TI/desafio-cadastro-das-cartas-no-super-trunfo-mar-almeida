#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char nome1[50];
    char cidade1[50];
    char codigo1[50];
    int populacao1;
    float area1;
    float PIB1;
    int PontosTuristicos1;

    char nome2[50];
    char cidade2[50];
    char codigo2[50];
    int populacao2;
    float area2;
    float PIB2;
    int PontosTuristicos2;

    printf("Nome do Estado 1:\n");
    scanf("%s", &nome1);

    printf("Nome da Cidade 1:\n");
    scanf("%s", &cidade1);

    printf("Código da Cidade 1:\n");
    scanf("%s", &codigo1);

    printf("Digite a População 1:\n");
    scanf("%d", &populacao1);

    printf("Digite a Área 1:\n");
    scanf("%f", &area1);

    printf("Digite o PIB1:\n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos1:\n");
    scanf("%d", &PontosTuristicos1);

    printf("Nome do Estado 2:\n");
    scanf("%s", &nome2);

    printf("Nome da Cidade 2:\n");
    scanf("%s", &cidade2);

    printf("Código da Cidade 2:\n");
    scanf("%s", &codigo2);

    printf("Digite a População 2:\n");
    scanf("%d", &populacao2);

    printf("Digite a Área 2:\n");
    scanf("%f", &area2);

    printf("Digite o PIB2:\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos2:\n");
    scanf("%d", &PontosTuristicos2);

    printf("Estado1: %s\n", nome1);
    printf("Cidade1: %s\n", cidade1);
    printf("Código1: %s\n", codigo1);
    printf("População1: %d\n", populacao1);
    printf("Área1: %.2f\n", area1);
    printf("PIB1: %.2f\n", PIB1);
    printf("PontosTuristicos1: %d\n", PontosTuristicos1);

    printf("Estado2: %s\n", nome2);
    printf("Cidade2: %s\n", cidade2);
    printf("Código2: %s\n", codigo2);
    printf("População2: %d\n", populacao2);
    printf("Área2: %.2f\n", area2);
    printf("PIB2: %.2f\n", PIB2);
    printf("PontosTuristicos2: %d\n", PontosTuristicos2);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
