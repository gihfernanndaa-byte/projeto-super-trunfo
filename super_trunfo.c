// =====================================================================
//      PROJETO SUPER TRUNFO - NÍVEL MESTRE
//      Arquivo: super_trunfo.c
//      Descrição: Programa completo que cadastra duas cartas, calcula
//                 seus atributos, calcula um "Super Poder" e compara
//                 as duas cartas para determinar a vencedora de cada
//                 rodada.
// =====================================================================

#include <stdio.h> // Biblioteca padrão para funções de entrada e saída (printf, scanf)

int main() {
    // --- DECLARAÇÃO DAS VARIÁVEIS PARA A CARTA 1 ---
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    // Modificador de tipo: unsigned long int para populações muito grandes
    unsigned long int populacao1; 
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    // Nova variável para o poder de batalha
    float superPoder1;

    // --- DECLARAÇÃO DAS VARIÁVEIS PARA A CARTA 2 ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // --- DECLARAÇÃO DAS VARIÁVEIS PARA OS RESULTADOS DA BATALHA ---
    // (1 significa que a Carta 1 venceu, 0 que a Carta 2 venceu)
    int vitoriaPopulacao;
    int vitoriaArea;
    int vitoriaPIB;
    int vitoriaPontosTuristicos;
    int vitoriaDensidade;
    int vitoriaPIBPerCapita;
    int vitoriaSuperPoder;

    // =====================================================================
    //          ENTRADA DE DADOS - CARTA 1
    // =====================================================================

    printf("--- CADASTRO DA CARTA 1 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade1);
    printf("Digite a Populacao: ");
    // Usamos %lu como especificador de formato para ler um unsigned long int
    scanf("%lu", &populacao1); 
    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // =====================================================================
    //          ENTRADA DE DADOS - CARTA 2
    // =====================================================================
    
    printf("--- CADASTRO DA CARTA 2 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigoCarta2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade2);
    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =====================================================================
    //          PROCESSAMENTO / CÁLCULOS
    // =====================================================================
    
    // --- Cálculos para a Carta 1 ---
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    // Cálculo do Super Poder: somamos diferentes tipos de dados.
    // É crucial fazer a conversão de tipo (casting) para float para garantir
    // que a soma seja feita com precisão de ponto flutuante.
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    // --- Cálculos para a Carta 2 ---
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // =====================================================================
    //          COMPARAÇÕES (BATALHA)
    // =====================================================================
    // Usamos operadores relacionais. O resultado de uma comparação é sempre
    // 1 (verdadeiro) ou 0 (falso).

    vitoriaPopulacao = (populacao1 > populacao2);
    vitoriaArea = (area1 > area2);
    vitoriaPIB = (pib1 > pib2);
    vitoriaPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2);
    // Regra especial: para densidade, o MENOR valor vence.
    vitoriaDensidade = (densidadePopulacional1 < densidadePopulacional2); 
    vitoriaPIBPerCapita = (pibPerCapita1 > pibPerCapita2);
    vitoriaSuperPoder = (superPoder1 > superPoder2);

    // =====================================================================
    //          EXIBIÇÃO DOS RESULTADOS DA BATALHA
    // =====================================================================

    printf("\n\n==================================\n");
    printf("    RESULTADO DA BATALHA\n");
    printf("==================================\n\n");

    // O primeiro %d usa um operador ternário para decidir se imprime "1" ou "2".
    // O segundo %d imprime o resultado da comparação (1 ou 0).
    printf("Populacao: Carta %d venceu (%d)\n", (vitoriaPopulacao ? 1 : 2), vitoriaPopulacao);
    printf("Area: Carta %d venceu (%d)\n", (vitoriaArea ? 1 : 2), vitoriaArea);
    printf("PIB: Carta %d venceu (%d)\n", (vitoriaPIB ? 1 : 2), vitoriaPIB);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (vitoriaPontosTuristicos ? 1 : 2), vitoriaPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (vitoriaDensidade ? 1 : 2), vitoriaDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (vitoriaPIBPerCapita ? 1 : 2), vitoriaPIBPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", (vitoriaSuperPoder ? 1 : 2), vitoriaSuperPoder);

    return 0; // Indica que o programa terminou com sucesso
}