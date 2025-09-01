#include <stdio.h>
#include <string.h>

int main(){

    //Primeira carta
    char estado;
    char nomeCidade[100];
    signed long int populacao; 
    int quantidadePontosTuristicos, codigo;
    float areaCidade, pib;
    float densidadePopulacional, pibPerCapita;
    float superPoder;

    //Segunda carta
    char estado2;
    char nomeCidade2[100];
    signed long int populacao2; 
    int quantidadePontosTuristicos2, codigo2;
    float areaCidade2, pib2;
    float densidadePopulacional2, pibPerCapita2;
    float superPoder2;


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
    fgets(nomeCidade2, 100, stdin); // digita o nome completo da cidade com string

    printf("Digite o numero de Habitantes: ");
    scanf("%d", &populacao2); // digita a populacao em tipo int

    printf("Digite a Área da cidade em quilometros quadrados: ");
    scanf("%f", &areaCidade2); // digita area da cidade tipo float

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2); // digita pib em tipo string

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &quantidadePontosTuristicos2); // digita quantidade de pontos turisticos em tipo int

    // propriedades das cartas 

    densidadePopulacional = populacao / areaCidade; // faz a densidade populacional do estado
    pibPerCapita = pib / populacao;   //faz a conta do percapita do estado
    
    densidadePopulacional2 = populacao2 / areaCidade2;
    pibPerCapita2 = pib2 / populacao2;

    superPoder = populacao + areaCidade + pib + pibPerCapita + densidadePopulacional;

    superPoder2 = populacao + areaCidade2 + pib + pibPerCapita2 + densidadePopulacional2;


    //Exibição da Primeira carta

    printf("\n\tCarta 1\n\n");
    printf("\tEstado: %c\n", estado);
    printf("\tCodigo: %c%d\n", estado,codigo);
    printf("\tNome da cidade: %s", nomeCidade);
    printf("\tPopulação: %d\n", populacao);
    printf("\tÁrea: %0.2f km²\n", areaCidade);
    printf("\tPIB: %0.2f Reais\n", pib);
    printf("\tNúmero de Pontos Turísticos: %d\n", quantidadePontosTuristicos);
    printf("\tDensidade Populacional: %.2f hab/km²\n",densidadePopulacional);
    printf("\tPIB per Capita: %.2f reais", pibPerCapita);

    //Exibição da Segunda carta

    printf("\n\n\tCarta 2\n\n");
    printf("\tEstado: %c\n" , estado2);
    printf("\tCodigo: %c%d\n", estado2,codigo2);
    printf("\tNome da cidade: %s", nomeCidade2);
    printf("\tPopulação: %d\n", populacao2);
    printf("\tÁrea: %0.2f\n", areaCidade2);
    printf("\tPIB: %0.2f Reais\n", pib2);
    printf("\tNúmero de Pontos Turísticos: %d\n", quantidadePontosTuristicos2);
    printf("\tDensidade Populacional: %.2f hab/km²\n",densidadePopulacional2);
    printf("\tPIB per Capita: %.2f reais\n\n", pibPerCapita2);

    // comparação entre cartas
    char carta1[10] = "Carta 1";
    char carta2[10] = "Carta 2";

    //faz uma comparação, na primeira ele exibe se é carta 1 ou 2 e na segunda ele exibe true ou false (1 ou 0) 1 = carta 1, 0 = carta 2;
    printf("População: %s venceu (%d)\n", populacao > populacao2 ? carta1 : carta2,
                                          populacao > populacao2);

    printf("Área: %s venceu (%d)\n", areaCidade > areaCidade2 ? carta1 : carta2,
                                     areaCidade > areaCidade2);

    printf("PIB: %s venceu (%d)\n", pib > pib2 ? carta1 : carta2,
                                   pib > pib2);

    printf("Pontos Turisticos: %s venceu (%d)\n", quantidadePontosTuristicos > quantidadePontosTuristicos2 ? carta1 : carta2,
                                                  quantidadePontosTuristicos > quantidadePontosTuristicos2);

    printf("Densidade Populacional: %s venceu(%d)\n", densidadePopulacional > densidadePopulacional2  ? carta1 : carta2,
                                                      densidadePopulacional > densidadePopulacional2);

    printf("PIB per Capita: %s venceu (%d)\n", pibPerCapita > pibPerCapita2 ? carta1 : carta2,
                                               pibPerCapita > pibPerCapita2);

    printf("Super Poder: %s venceu (%d)\n", superPoder > superPoder2 ? carta1 : carta2,
                                            superPoder > superPoder2);



    return 0;

}
