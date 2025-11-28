#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    // Área para entrada de dados das cartas

  char codigo_da_carta[3]="A1";
  char codigo_da_carta2[3]="B1";

  char estado[10]="RJ";
  char estado2[10]="SP";

  char nome_da_cidade[20]="Campo grande";
  char nome_da_cidade2[20]="Santos";

  unsigned long int populaçao=352.356;
  unsigned long int populaçao2=476.890;

  float area_KM=104.4;
  float area_KM2=219.9;

  float PIB=3577.322;
  float PIB2=478.923;

  int pontos_turisticos=2;
  int pontos_turisticos2= 17;

  float densidade_populacional =352.356*104.4;
  float densidade_populacional2 =476.890*219.9;

  float PIB_per_capita =3577.322/352.356;
  float PIB_per_capita2  =478.923/476.890;

  float super_poder =352.356 + 104.4 + 3577.322 + 2 + (352.356*104.4) + (3577.322/352.356);
  float super_poder2 =476.890 + 219.9 + 478.923 + 17 + (476.890*219.9) + (478.923/476.890);
  //Exibição de dados das cartas
  
  //Dados da Carta A1
  printf("Carta: %s\n",codigo_da_carta);
  printf("Estado: %s\n",estado);
  printf("cidade: %s\n",nome_da_cidade);
  printf("Populaçao: %lu\n",populaçao);
  printf("Area: %.f\n",area_KM);
  printf("PIB: %f\n",PIB);
  printf("Quantidade de pontos turisticos: %d\n",pontos_turisticos);
  printf("Densidade populacional: %.2f\n", densidade_populacional);
  printf(" PIB per capita: %.2f\n",PIB_per_capita);
  printf("Super poder : %f\n", super_poder);
  
  //Dados da carta B1
  printf("\n");
  printf("Carta: %s\n",codigo_da_carta2);
  printf("Estado: %s\n",estado2);
  printf("cidade: %s\n",nome_da_cidade2);
  printf("Populaçao: %lu\n",populaçao2);
  printf("Area: %f\n",area_KM2);
  printf("PIB: %f\n",PIB2);
  printf("Quantidade de pontos turisticos: %d\n",pontos_turisticos2);
  printf("Densidade populacional: %.2f\n", densidade_populacional2);
  printf(" PIB per capita: %.2f\n",PIB_per_capita2);
  printf("Super poder : %f\n", super_poder2);

  //Comparação dos atributos das cartas
  printf("\n");
  printf("Comparando PIB\n");
  printf("Carta A1 Campo Grande (RJ) PIB: %f\n",PIB);
  printf("Carta B1 Santos (SP) PIB: %f\n",PIB2);

printf("\n");
if(PIB>PIB2);
printf("Campo Grande VENCEDOR");
else
printf("Santos VENCEDOR");


}
