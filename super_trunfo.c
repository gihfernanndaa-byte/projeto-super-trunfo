// =====================================================================
//      PROJETO SUPER TRUNFO - CADASTRO DE CARTAS
//      Arquivo: super_trunfo.c
//      Descrição: Programa para cadastrar os dados de duas cartas
//                 do jogo Super Trunfo e exibi-los na tela.
// =====================================================================

#include <stdio.h> // Biblioteca padrão para funções de entrada e saída (printf, scanf)

int main() {
    // --- DECLARAÇÃO DAS VARIÁVEIS PARA A CARTA 1 ---
    // Nomes de variáveis claros para facilitar a leitura do código.
    char estado1;
    char codigoCarta1[5];      // Array de char para armazenar o código (ex: "A01" + caractere nulo '\0')
    char nomeCidade1[50];      // Array de char para o nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- DECLARAÇÃO DAS VARIÁVEIS PARA A CARTA 2 ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // =====================================================================
    //          ENTRADA DE DADOS - CARTA 1
    // =====================================================================
    // Usamos printf para mostrar instruções claras ao usuário.

    printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Digite o Estado (uma letra de A-H): ");
    // O espaço antes de %c em " %c" é importante para consumir qualquer
    // caractere de nova linha ('\n') deixado por um scanf anterior.
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Digite o Nome da Cidade: ");
    // Nota: scanf("%s", ...) lê apenas até o primeiro espaço.
    // Para nomes compostos (ex: "Sao Paulo"), você aprenderá métodos melhores depois.
    scanf("%s", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    
    printf("\n"); // Adiciona uma linha em branco para separar os cadastros

    // =====================================================================
    //          ENTRADA DE DADOS - CARTA 2
    // =====================================================================
    
    printf("--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o Estado (uma letra de A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigoCarta2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =====================================================================
    //          EXIBIÇÃO DOS DADOS CADASTRADOS
    // =====================================================================
    // Usamos printf para exibir os valores armazenados de forma organizada.
    // '\n' é o caractere especial para "pular uma linha".

    printf("\n\n==================================\n");
    printf("     CARTAS CADASTRADAS\n");
    printf("==================================\n\n");

    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);          // "%.2f" formata o float para exibir apenas 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0; // Indica que o programa terminou com sucesso
}