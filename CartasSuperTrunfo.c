#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){

    // Declaração de variaveis
    char estado1[20],estado2[20]; //os estados tem que ser declarados com letras. Exemplo : "A","B", ....
    char codigo1[20],codigo2[20];
    char cidade1[50],cidade2[50];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int pontosTuristico1,pontosTuristico2;

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
    scanf("%f",&pib1);
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
    scanf("%f",&pib2);
    printf("Digite o numero de pontos dessa cidade: ");
    scanf("%d",&pontosTuristico2);
    
    //Hora de Printar as cartas començada da primeira

    printf("\nCarta1\n");
    printf("Estado : %s\n", estado1);
    printf("Codigo : %s\n", codigo1);
    printf("Cidade : %s\n", cidade1);
    printf("Populacao : %d\n", populacao1);
    printf("Area : %.2f km²\n", area1);
    printf("PIB : %.2f bilhoes de reais\n", pib1);
    printf("Numeros de Pontos Turisticos : %d\n", pontosTuristico1);

    //Prints da Segunda Carta

    printf("\nCarta2\n");
    printf("Estado : %s\n", estado2);
    printf("Codigo : %s\n", codigo2);
    printf("Cidade : %s\n", cidade2);
    printf("Populacao : %d\n", populacao2);
    printf("Area : %.2f km²\n", area2);
    printf("PIB : %.2f bilhoes de reais\n", pib2);
    printf("Numeros de Pontos Turisticos : %d", pontosTuristico2);
}