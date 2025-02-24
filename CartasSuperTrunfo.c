#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Dessa vez foi implementado a segunda parte do desafio

int main(){

    // Declaração de variaveis
    char estado1[20],estado2[20]; 
    char codigo1[20],codigo2[20]; 
    char cidade1[50],cidade2[50];  
    int populacao1, populacao2, pontosTuristico1,pontosTuristico2;
    float area1, area2;
    float pib1, pib2; 
    float pibPerCapita1, densiPopulacional1, pibPerCapita2, densiPopulacional2;

    //Cadastrando a primeira carta!!
    printf("\n######## Cadastrando a Carta 1 ########\n");
    /*por algum motivo o programa nao quer que isso seja char(%c) entao deixei do jeito que funciona kkkk
    O padrao para os estados sao as letras do alfabeto, exemplos : A , B , C ....(por causa da minha alteração pode ser nomes dos estados mesmo)*/
    printf("Digite o nome do estado: "); 
    scanf("%s", estado1);
    // O padrao do programa é a letra ja indicada acima (ou a primeira letra do nome do estado) + um numero
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);
    // Aqui tem toda liberdade, porem nomes de cidades composta deve usar os "-" entre as palavras. Ex: Sao-Paulo, Rio-de-Janeiro.
    printf("Digite o nome da cidade desse estado: ");
    scanf("%s", cidade1);
    //Qualquer numero inteiro positivo e que seja maior que a area , para nao dar problema nos calculos
    printf("Digite o numero da populacao dessa cidade: ");
    scanf("%d",&populacao1);
    //Qualquer valor sendo positivo
    printf("Digite o numero da area dessa cidade: ");
    scanf("%f",&area1);
    //Recomendo sempre deixar esse valor maior que o da população para nao ficar zerado no PIB per capita
    printf("Digite o pib dessa cidade: ");
    scanf("%f",&pib1);
    //Qualquer valor sendo positivo
    printf("Digite o numero de pontos dessa cidade: ");
    scanf("%d",&pontosTuristico1);

    //Cadastrando a segunda carta!!
    printf("\n######## Cadastrando a Carta 2 ########\n");
    /*por algum motivo o programa nao quer que isso seja char(%c) entao deixei do jeito que funciona kkkk
    O padrao para os estados sao as letras do alfabeto, exemplos : A , B , C ....*/
    printf("Digite o nome do estado: ");
    scanf("%s", estado2);
    // O padrao do programa é a letra ja indicada acima + um numero 
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);
    // Aqui tem toda liberdade, porem nomes de cidades composta deve usar os "-" entre as palavras. Ex: Sao-Paulo, Rio-de-Janeiro.
    printf("Digite o nome da cidade desse estado: ");
    scanf("%s", cidade2);
    //Qualquer numero ate o limite dos numeros inteiros
    printf("Digite o numero da populacao dessa cidade: ");
    scanf("%d",&populacao2);
    //Qualquer valor sendo positivo
    printf("Digite o numero da area dessa cidade: ");
    scanf("%f",&area2);
    //Recomendo sempre deixar esse valor maior que o da população para nao ficar zerado no PIB per capita
    printf("Digite o numero do pib em reais : ");
    scanf("%f",&pib2);
    //Qualquer numero inteiro positivo
    printf("Digite o numero de pontos dessa cidade: ");
    scanf("%d",&pontosTuristico2);
    
    //Calcular a densiade populacional da carta 1

    densiPopulacional1 = (float)populacao1/area1;

    //Calcular o PIB per Capita da carta 1

    pibPerCapita1 = (float) pib1 / populacao1;

    //Calcular a densiade populacional da carta 2

    densiPopulacional2 = (float) populacao2/area2;

    //Calcular o PIB per Capita da carta 2
   
    pibPerCapita2 = (float) pib2 / populacao2;

    //Calcular o SUPER PODER!! da carta 1

    float superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristico1 + (1/densiPopulacional1) + pibPerCapita1; 

    //Calcular o SUPER PODER!! da carta 2

    float superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristico2 + (1/densiPopulacional2) + pibPerCapita2;
   
    //Hora de Printar as cartas començando da primeira

    printf("\nCarta1\n");
    printf("Estado : %s \n", estado1);
    printf("Codigo : %s\n", codigo1);
    printf("Cidade : %s\n", cidade1);
    printf("Populacao : %d\n", populacao1);
    printf("Area : %.2f km2\n", area1);
    printf("PIB : %.2f milhoes de reais\n", pib1);
    printf("Numeros de Pontos Turisticos : %d\n", pontosTuristico1);
    printf("Densidade Populacional: %.2f hab/km2\n", densiPopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder Carta 1: %.2f\n", superPoder1);

    //Prints da Segunda Carta

    printf("\nCarta2\n");
    printf("Estado : %s\n", estado2);
    printf("Codigo : %s\n", codigo2);
    printf("Cidade : %s\n", cidade2);
    printf("Populacao : %d\n", populacao2);
    printf("Area : %.2f quilometros quadrados\n", area2);
    printf("PIB : %.2f milhoes de reais\n", pib2);
    printf("Numeros de Pontos Turisticos : %d\n", pontosTuristico2);
    printf("Densidade Populacional: %.2f hab/km2\n", densiPopulacional2);
    printf("PIB per Capita: %.2f milhoes reais\n", pibPerCapita2);
    printf("Super Poder Carta 2: %.2f\n", superPoder2);

    //Prints das cartas que ganharem

    printf("\n##### Comparação de Cartas #####\n");
    printf("Populacao : %s \n", populacao1>populacao2 ? "Carta 1 ganhou!!":"Carta 2 ganhou!");
    printf("Area : %s \n", area1 > area2 ? "Carta 1 ganhou!!":"Carta 2 ganhou!");
    printf("PIB : %s \n", pib1 > pib2 ? "Carta 1 ganhou!!":"Carta 2 ganhou!");
    printf("Numeros de Pontos Turisticos : %s\n",pontosTuristico1> pontosTuristico2 ? "Carta 1 ganhou!!":"Carta 2 ganhou!");
    printf("Densidade Populacional: %s \n",densiPopulacional1 < densiPopulacional2 ? "Carta 1 ganhou!!":"Carta 2 ganhou!");
    printf("PIB per Capita: %s \n",pibPerCapita1> pibPerCapita2 ? "Carta 1 ganhou!!":"Carta 2 ganhou!");
    printf("Super poder: %s \n", superPoder1>superPoder2 ? "Carta 1 ganhou!!":"Carta 2 ganhou!");
    
}