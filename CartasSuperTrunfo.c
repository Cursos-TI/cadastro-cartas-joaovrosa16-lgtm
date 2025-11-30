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

  int escolhadojogador;
  printf("## Escolha um atributo ##\n");
  printf("1. população\n");
  printf("2. Area\n");
  printf("3. PIB\n");
  printf("4. Pontos turisticos\n");
  printf("5. Densidade populacional\n");
  printf("6. PIB per capita\n");
  printf("7.Super  poder\n");
  scanf("%d",&escolhadojogador);

  switch(escolhadojogador)
  {case 1: printf("jogador 1 escolheu População\n");
    break;
    case 2: printf("jogador 1 escolheu Area\n");
    break;
    case 3: printf("jogador 1 escolheu PIB\n");
    break;
    case 4: printf("jogador 1 escolheu Pontos turisticos\n");
    break;
    case 5: printf("jogador 1 escolheu Densidade populacional\n");
    break;
    case 6: printf("jogador 1 escolheu PIB  per capita\n");
    break;
    case 7: printf("jogador 1 escolheu SUPER PODER!\n");
    break;
    default:printf("Opção Invalida\n");
  }
  int escolhadojogador2;
  printf("## Escolha o atributo do oponente ##\n");
  printf("1. população\n");
  printf("2. Area\n");
  printf("3. PIB\n");
  printf("4. Pontos turisticos\n");
  printf("5. Densidade populacional\n");
  printf("6. PIB per capita\n");
  printf("7.Super  poder\n");
  scanf("%d",&escolhadojogador2);

switch(escolhadojogador2)
  {case 1: printf("oponente escolheu População\n");
    break;
    case 2: printf("oponente escolheu Area\n");
    break;
    case 3: printf("oponente escolheu PIB\n");
    break;
    case 4: printf("oponente escolheu Pontos turisticos\n");
    break;
    case 5: printf("oponente escolheu Densidade populacional\n");
    break;
    case 6: printf("oponente escolheu PIB  per capita\n");
    break;
    case 7: printf("oponente escolheu SUPER PODER!\n");
    break;
    default: printf("Opção Invalida\n");
  }
if((populaçao > populaçao2) || (area_KM > area_KM2) ||  (PIB > PIB2) ||
(pontos_turisticos > pontos_turisticos2) || (densidade_populacional < densidade_populacional2) ||
(PIB_per_capita > PIB_per_capita2) || (super_poder > super_poder2)){
  printf("campo Grande RJ Venceu!!!");
}
else if((populaçao < populaçao2) || (area_KM < area_KM2) ||  (PIB < PIB2) ||
(pontos_turisticos < pontos_turisticos2) || (densidade_populacional > densidade_populacional2) ||
(PIB_per_capita < PIB_per_capita2) || (super_poder < super_poder2)){
  printf("Santos SP Venceu!!!");
}
  else{printf("## Empate ##");
  }

}
