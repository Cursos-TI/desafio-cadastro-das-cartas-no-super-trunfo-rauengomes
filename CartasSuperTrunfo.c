#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Variaveis Carta 1
    char codigo[3] = "S01";
    char cidade[50] = "a";
    char estado[50] = "S212";
    int populacao = 1;
    float area = 1;
    float pib = 1;
    int pontosTuristicos = 1;

    //Variaveis Carta 2
    char codigo2[3] = "S01";
    char cidade2[50] = "a";
    char estado2[50] = "S212";
    int populacao2 = 1;
    float area2 = 1;
    float pib2 = 1;
    int pontosTuristicos2 = 1;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Dados Carta 1
    printf("\nDados da Carta 1\n");
    printf("Digite o estado: \n");
    scanf("%s", estado);
    printf("Digite o codigo do estado: \n");
    scanf("%s", codigo);
    printf("Digite a cidade: \n");
    scanf("%s", cidade);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos);

    //Dados Carta 2
    printf("\nDados da Carta 2\n");
    printf("Digite o estado: \n");
    scanf("%s", estado2);
    printf("Digite o codigo do estado: \n");
    scanf("%s", codigo2);
    printf("Digite a cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);
    printf("Digite a area: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //Print Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontosTuristicos);


    //Print Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);

    return 0;
}
