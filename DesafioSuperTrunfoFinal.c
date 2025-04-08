#include <stdio.h>

int main() {

    char nome1[50]; // Parana
    char cidade1[50]; // Curitiba
    char codigo1[50]; // PR01
    int populacao1; // 11444380
    float area1; // 199315.00
    double PIB1; // 718900000000 
    int PontosTuristicos1; //350
    float DensPop1; // = Pop / Area
    float PIBperCAP1; // = PIB / Pop
    double SuperPoder1; // = populacao1 + area1 + PIB1 + PontosTuristicos1 + (1 / DensPop1) + PIBperCAP1;

    char nome2[50]; // Santa Catarina
    char cidade2[50]; // Florianopolis
    char codigo2[50]; // SC01
    int populacao2; // 8058441
    float area2; // 195346.00
    double PIB2; // 531400000000
    int PontosTuristicos2; //600
    float DensPop2; // = Pop / Area
    float PIBperCAP2; // = PIB / Pop
    double SuperPoder2; // = populacao2 + area2 + PIB2 + PontosTuristicos2 + (1 / DensPop2) + PIBperCAP2;

    printf("Nome do Estado 1: ");
    scanf("%s", &nome1);

    printf("Nome da Cidade 1: ");
    scanf("%s", &cidade1);

    printf("Código da Cidade 1: ");
    scanf("%s", &codigo1);

    printf("Digite a População 1: ");
    scanf("%d", &populacao1);

    printf("Digite a Área 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB1: ");
    scanf("%lf", &PIB1);

    printf("Digite o número de pontos turísticos1: ");
    scanf("%d", &PontosTuristicos1);

    printf("Nome do Estado 2: ");
    scanf("%s", &nome2);

    printf("Nome da Cidade 2: ");
    scanf("%s", &cidade2);

    printf("Código da Cidade 2: ");
    scanf("%s", &codigo2);

    printf("Digite a População 2: ");
    scanf("%d", &populacao2);

    printf("Digite a Área 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB2: ");
    scanf("%lf", &PIB2);

    printf("Digite o número de pontos turísticos2: ");
    scanf("%d", &PontosTuristicos2);

    DensPop1 = (float) populacao1 / area1;
    PIBperCAP1 = (float) PIB1 / populacao1;
    DensPop2 = (float) populacao2 / area2;
    PIBperCAP2 = (float) PIB2 / populacao2;

    SuperPoder1 = (float) populacao1 + area1 + PIB1 + PontosTuristicos1 + (1 / DensPop1) + PIBperCAP1;
    SuperPoder2 = (float) populacao2 + area2 + PIB2 + PontosTuristicos2 + (1 / DensPop2) + PIBperCAP2;

    printf("Estado1: %s\n", nome1);
    printf("Cidade1: %s\n", cidade1);
    printf("Código1: %s\n", codigo1);
    printf("População1: %d\n", populacao1);
    printf("Área1: %.2f\n", area1);
    printf("PIB1: %.2lf\n", PIB1);
    printf("PontosTuristicos1: %d\n", PontosTuristicos1);
    printf("DensidadePopulacional1: %.2f\n", DensPop1);
    printf("PIBperCapita1: %.2f\n", PIBperCAP1);
    printf("SuperPoder1 é: %.2lf\n", SuperPoder1);

    printf("Estado2: %s\n", nome2);
    printf("Cidade2: %s\n", cidade2);
    printf("Código2: %s\n", codigo2);
    printf("População2: %d\n", populacao2);
    printf("Área2: %.2f\n", area2);
    printf("PIB2: %.2lf\n", PIB2);
    printf("PontosTuristicos2: %d\n", PontosTuristicos2);
    printf("DensidadePopulacional2: %.2f\n", DensPop2);
    printf("PIBperCapita2: %.2f\n", PIBperCAP2);
    printf("SuperPoder2 é: %.2lf\n", SuperPoder2);

    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPIB;
    int resultadoPontosTuristicos;
    int resultadoDensidadePop;
    int resultadoPIBperCap;
    int resultadoSuperPoder;

    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPIB = PIB1 > PIB2;
    resultadoPontosTuristicos = PontosTuristicos1 > PontosTuristicos2;
    resultadoDensidadePop = DensPop1 < DensPop2;
    resultadoPIBperCap = PIBperCAP1 > PIBperCAP2;
    resultadoSuperPoder = SuperPoder1 > SuperPoder2;

    printf("O vencedor no item População é: %d\n", resultadoPopulacao);
    printf("O vencedor no item Área é: %d\n", resultadoArea);
    printf("O vencedor no item PIB é: %d\n", resultadoPIB);
    printf("O vencedor no item Pontos Turisticos é: %d\n", resultadoPontosTuristicos);
    printf("O vencedor no item Densidade Populacional é: %d\n", resultadoDensidadePop);
    printf("O vencedor no item PIB per Capita é: %d\n", resultadoPIBperCap);
    printf("O vencedor no item Super Poder é: %d\n", resultadoSuperPoder);

    return 0;

}