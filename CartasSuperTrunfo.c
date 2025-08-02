#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){

    //Primeira carta
    char estado;
    char nomeCidade[100];
    int populacao, quantidadePontosTuristicos, codigo;
    float areaCidade, pib;

    //Segunda carta
    char estado2;
    char nomeCidade2[100];
    int populacao2, quantidadePontosTuristicos2, codigo2;
    float areaCidade2, pib2;

    //Cadastro das informações da primeira carta
    printf("\tCarta 1\n\n");
    printf("Digite a letra do estado: ");
    scanf("%c", &estado);  //Digita uma letra em tipo char

    printf("Digite o codigo do estado: ");
    scanf("%d", &codigo);  //Digita o codigo em tipo int

    getchar(); // Serve para consumir o ultimo caractere de nova linha do scanf para ler o fgets
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade, 100, stdin); // Digita o nome da cidade, com fgets dá pra digitar nome completo da cidade com espaços tipo string
    
    printf("Digite o numero de Habitantes: ");
    scanf("%d", &populacao); //Digita um valor de habitantes tipo int

    printf("Digite a Área da cidade em quilometros quadrados: ");
    scanf("%f", &areaCidade); //Digita a area da cidade em tipo float

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib); //Digita o PIB da cidade tipo float

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &quantidadePontosTuristicos); //Digita quantidade de pontos turisticos em tipo int

    //Cadastro das Informações da segunda carta
    getchar(); // utilizando para consumir a quebra de linha do scanf

    printf("\n\n\tCarta 2\n\n");
    printf("Digite a letra do Estado: ");
    scanf("%c", &estado2); //Digita uma ltra em tipo char

    printf("Digite o codigo do Estado: ");
    scanf("%d", &codigo2); //digita o codigo em tipo int

    getchar(); // utilizando o getchar pra consumir a quebra de linha do scanf
    printf("Digite o nome da Cidade: ");
    fgets(nomeCidade2,100,stdin); // digita o nome completo da cidade com string

    printf("Digite o numero de Habitantes: ");
    scanf("%d", &populacao2); // digita a populacao em tipo int

    printf("Digite a Área da cidade em quilometros quadrados: ");
    scanf("%f", &areaCidade2); // digita area da cidade tipo float

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2); // digita pib em tipo string

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &quantidadePontosTuristicos2); // digita quantidade de pontos turisticos em tipo int

    //Exibição da Primeira carta
    printf("\n\tCarta 1\n\n");
    printf("\tEstado: %c\n", estado);
    printf("\tCodigo: %c%d\n", estado,codigo);
    printf("\tNome da cidade: %s", nomeCidade);
    printf("\tPopulação: %d\n", populacao);
    printf("\tÁrea: %0.2f km²\n", areaCidade);
    printf("\tPIB: %0.2f Reais\n", pib);
    printf("\tNúmero de Pontos Turísticos: %d", quantidadePontosTuristicos);

    //Exibição da Segunda carta
    printf("\n\n\tCarta 2\n\n");
    printf("\tEstado: %c\n" , estado2);
    printf("\tCodigo: %c%d\n", estado2,codigo2);
    printf("\tNome da cidade: %s", nomeCidade2);
    printf("\tPopulação: %d\n", populacao2);
    printf("\tÁrea: %0.2f\n", areaCidade2);
    printf("\tPIB: %0.2f Reais\n", pib2);
    printf("\tNúmero de Pontos Turísticos: %d\n\n", quantidadePontosTuristicos2);

    return 0;

}
