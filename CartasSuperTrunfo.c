#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char nome[50];
    char cidade[50];
    char codigo[50];
    int populacao;
    float area;
    float PIB;
    int PontosTuristicos;

    printf("Nome do Estado:\n");
    scanf("%s", &nome);

    printf("Nome da Cidade:\n");
    scanf("%s", &cidade);

    printf("Código da Cidade:\n");
    scanf("%s", &codigo);

    printf("Digite a População:\n");
    scanf("%d", &populacao);

    printf("Digite a Área:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &PontosTuristicos);

    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", cidade);
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("PontosTuristicos: %d\n", PontosTuristicos);


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
