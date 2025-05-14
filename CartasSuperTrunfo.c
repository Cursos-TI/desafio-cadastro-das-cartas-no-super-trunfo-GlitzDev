#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int carta, pontosTuristicos, populacao;
    char estado[50], codigoCarta[10], nomeDaCidade[50];
    float area, pib;
    
    printf("Escolha um numero de 1 a 2 para sua carta: ");
    scanf("%d", &carta);

    printf("Escolha um Estado de A a H: ");
    scanf("%s", &estado);

    printf("Escolha um codigo para a sua carta de 01 a 04: ");
    scanf("%s", &codigoCarta);

    printf("Escolha uma cidade: ");
    scanf("%s", &nomeDaCidade);

    printf("Digite quantos habitantes tem na cidade: ");
    scanf("%d", &populacao);

    printf("Quantos quilometros tem a cidade: ");
    scanf("%f", &area);

    printf("Qual é o PIB dessa cidade: ");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem a cidade: ");
    scanf("%d", &pontosTuristicos);

    printf("A sua carta é a seguinte: \n");
    printf("Carta: %d \n", carta);
    printf("Estado: %s \n", estado);
    printf("Codigo: %s \n", codigoCarta);
    printf("Nome da cidade: %s \n", nomeDaCidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Numero de pontos turisticos: %d \n", pontosTuristicos);

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
