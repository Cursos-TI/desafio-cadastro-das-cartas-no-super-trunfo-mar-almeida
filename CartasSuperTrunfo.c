#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char nome[50];
    char cidade[50];
    char código[50];
    int população;
    float área;
    float PIB;
    int PontosTurísticos;

    printf("Nome do Estado:\n");
    scanf("%s", &nome);

    printf("Nome da Cidade:\n");
    scanf("%s", &cidade);

    printf("Código da Cidade:\n");
    scanf("%s", &código);

    printf("Digite a População:\n");
    scanf("%d", &população);

    printf("Digite a Área:\n");
    scanf("%f", &área);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &PontosTurísticos);

    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", cidade);
    printf("Código: %s\n", código);
    printf("População: %d\n", população);
    printf("Área: %.2f\n", área);
    printf("PIB: %.2f\n", PIB);
    printf("PontosTurísticos: %d", PontosTurísticos);


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
