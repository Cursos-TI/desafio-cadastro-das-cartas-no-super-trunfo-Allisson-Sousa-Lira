#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Dessa vez foi implementado a segunda parte do desafio

int main(){

    // Declaração de variaveis
    char estado1[20],estado2[20]; //os estados tem que ser declarados com letras. Exemplo : "A","B", ....
    char codigo1[20],codigo2[20]; //por padrao deste programa o inicio do codigo é a letra do estado seguido de uma numeração.
    char cidade1[50],cidade2[50]; // Nomes de cidades composta usar os "-" entre as palavras. Ex: Sao-Paulo, Rio-de-Janeiro. 
    int populacao1, populacao2, pontosTuristico1,pontosTuristico2;
    float area1, area2; 
    /*no caso do pib o indicado é sempre escreve o numero completo, por exemplo , ao invez de so colocar 699.28 colocar 699280000000.00,
     o uso do double ficou muito melhor por causa dos valores em bilhoes*/
    double pib1, pib2; 
    float pibPerCapita1, densiPopulacional1, pibPerCapita2, densiPopulacional2;


    //Cadastrando a primeira carta!!
    printf("\n######## Cadastrando a Carta 1 ########\n");
    printf("Digite o nome do estado: ");//por algum motivo o programa nao quer que isso seja char(%c) entao deixei do jeito que funciona kkkk
    scanf("%s", estado1);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade desse estado: ");
    scanf("%s", cidade1);
    printf("Digite o numero da populacao dessa cidade: ");
    scanf("%d",&populacao1);
    printf("Digite o numero da area dessa cidade: ");
    scanf("%f",&area1);
    printf("Digite o numero do pib dessa cidade: ");
    scanf("%lf",&pib1);
    printf("Digite o numero de pontos dessa cidade: ");
    scanf("%d",&pontosTuristico1);

    //Cadastrando a segunda carta!!
    printf("\n######## Cadastrando a Carta 2 ########\n");
    printf("Digite o nome do estado: "); //por algum motivo o programa nao quer que isso seja char (%c) entao deixei do jeito que funciona kkkk
    scanf("%s", estado2);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade desse estado: ");
    scanf("%s", cidade2);
    printf("Digite o numero da populacao dessa cidade: ");
    scanf("%d",&populacao2);
    printf("Digite o numero da area dessa cidade: ");
    scanf("%f",&area2);
    printf("Digite o numero do pib dessa cidade: ");
    scanf("%lf",&pib2);
    printf("Digite o numero de pontos dessa cidade: ");
    scanf("%d",&pontosTuristico2);

    //Calcular a densiade populacional e o PIB per capita da carta 1

    densiPopulacional1 =  populacao1/area1;
    pibPerCapita1 =  pib1 / populacao1;

   //Calcular a densiade populacional e o PIB per capita da carta 2

    densiPopulacional2 = populacao2/area2;
    pibPerCapita2 = pib2 / populacao2;
    
    //Hora de Printar as cartas començada da primeira

    // Caso o usuario sempre escrevesse um pib em Bilhoes daria para converter assim para que na saida de dados o numero sair mais apresentavel kkkk

    //pib1 = pib1 / 1000000000;
    //pib2 = pib2 / 1000000000;

    printf("\nCarta1\n");
    printf("Estado : %s\n", estado1);
    printf("Codigo : %s\n", codigo1);
    printf("Cidade : %s\n", cidade1);
    printf("Populacao : %d\n", populacao1);
    printf("Area : %.2f km2\n", area1);
    printf("PIB : %.2f bilhoes de reais\n", pib1);
    printf("Numeros de Pontos Turisticos : %d\n", pontosTuristico1);
    printf("Densidade Populacional: %.2f hab/km2\n", densiPopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    //Prints da Segunda Carta

    printf("\nCarta2\n");
    printf("Estado : %s\n", estado2);
    printf("Codigo : %s\n", codigo2);
    printf("Cidade : %s\n", cidade2);
    printf("Populacao : %d\n", populacao2);
    printf("Area : %.2f km2\n", area2);
    printf("PIB : %.2f bilhoes de reais\n", pib2);
    printf("Numeros de Pontos Turisticos : %d\n", pontosTuristico2);
    printf("Densidade Populacional: %.2f hab/km2\n", densiPopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
}