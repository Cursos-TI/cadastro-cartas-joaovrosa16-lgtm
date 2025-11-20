#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para entrada de dados das cartas

  char codigo_da_carta[3]="A1";
  char codigo_da_carta2[3]="B1";

  char estado[10]="RJ";
  char estado2[10]="SP";

  char nome_da_cidade[20]="Campo grande";
  char nome_da_cidade2[20]="Santos";

  float populaçao=352.356;
  float populaçao2=476.890;

  float area_KM=104.4;
  float area_KM2=219.9;

  float PIB=3.577322;
  float PIB2=4.78923;

  int pontos_turisticos=2;
  int pontos_turisticos2= 17;
  //Exibição de dados das cartas
  
  //Dados da Carta A1
  printf("Carta: %s\n",codigo_da_carta);
  printf("Estado: %s\n",estado);
  printf("cidade: %s\n",nome_da_cidade);
  printf("Populaçao: %.3f\n",populaçao);
  printf("Area: %.f\n",area_KM);
  printf("PIB: %f\n",PIB);
  printf("Quantidade de pontos turisticos: %d\n",pontos_turisticos);

  //Dados da carta B1
 printf("\n");
  printf("Carta: %s\n",codigo_da_carta2);
  printf("Estado: %s\n",estado2);
  printf("cidade: %s\n",nome_da_cidade2);
  printf("Populaçao: %.3f\n",populaçao2);
  printf("Area: %f\n",area_KM2);
  printf("PIB: %f\n",PIB2);
  printf("Quantidade de pontos turisticos: %d\n",pontos_turisticos2);

return 0;
} 
