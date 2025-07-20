#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


    char País [50];
    int populacao1;
    float area1;
    float pib1;
    int numero_pontos_turisticos1;
    float densidade_populacional1;

    char País2[50];
    int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
    float densidade_populacional2;


   int resultado1, resultado2;
  char primeiroatributo, segundoatributo;
   


    // Gerar numero aleatório
    
    populacao1 = 1;//rand() % 100 + 1;// Número entre 1 e 100
    populacao2= 0; //rand ()% 100+1//Número entre 1 e 100
    area1 = 1;//rand() % 100 +1;// Número entre 1 e 100
    area2 = 0;//rand() % 100 + 1;// Número entre 1 e 100
    pib1 = 1;//rand() % 100 +1;// Número entre 1 e 100
    pib2 = 0;//rand() % 100 + 1;// Número entre 1 e 100
    numero_pontos_turisticos1 = 1;//rand() % 100 +1;// Número entre 1 e 100
    numero_pontos_turisticos2 = 0;//rand() % 100 + 1;// Número entre 1 e 100
    densidade_populacional1 = 1;//rand() % 100 +1;// Número entre 1 e 100
    densidade_populacional2 = 0;//rand() % 100 + 1;// Número entre 1 e 100

   
    

    // Menu para escolher o atributo de comparação
    int escolha;

    printf("***Atributo para comparação***\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
   

    printf("Escolha a comparacao: ");
    scanf(" %c", &primeiroatributo);

      switch (primeiroatributo)
    
    {
    case 1 :
         printf("Você escolheu a opção População\n");
     resultado1 = populacao1 > populacao2 ? 1:0;
     break;
    case 2:
         printf("Você escolheu a opção Area\n");
      resultado1 = area1 > area2 ? 1:0;
     break;
    case 3:
          printf:("Você escolheu a opção Pib\n");
      resultado1 = pib1 > pib2 ? 1:0;
     break;
     case 4:
          printf("Você escolheu a opção Numero_pontos_turisticos\n");
      resultado1 = numero_pontos_turisticos1 > numero_pontos_turisticos2 ? 1:0;
      break;
    case 5:
        printf("Você escolheu a opção densidade_populacional\n");
    resultado1 = densidade_populacional1 < densidade_populacional2 ? 1:0;
    break;
    }

  printf("***Atributo para comparação 2 atributo***\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
   

    printf("Escolha a comparacao: ");
    scanf(" %c", &segundoatributo);

    
    if(primeiroatributo == segundoatributo)

    {
    printf("Você escolheu omesmo atributo!");
   } 

      switch (segundoatributo)
    {
    case 1:
         printf("Você escolheu a opção População\n");
     resultado2 = populacao2 > populacao1 ? 1:0;
     break;
    case 2:
         printf("Você escolheu a opção Area\n");
      resultado2 = area2 > area1 ? 1:0;
     break;
    case 3:
          printf("Você escolheu a opção Pib\n");
      resultado2 = pib2 > pib1 ? 1:0;
     break;
     case 4:
          printf("Você escolheu a opção Numero_pontos_turisticos\n");
      resultado2 = numero_pontos_turisticos2 > numero_pontos_turisticos1 ? 1:0;
      break;
    case 5:
        printf("Você escolheu a opção densidade_populacional\n");
    resultado1 = densidade_populacional2 < densidade_populacional1 ? 1:0;
    break;
    default:
    printf("Opção de jogo inválida");
    }1
    

    return 0;

    }
