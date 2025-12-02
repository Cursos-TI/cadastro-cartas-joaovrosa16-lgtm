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

  //Aqui o jogador escolhe o atributo que quer utilizar
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

  //Area de comparação do primeiro atributo
int resultado;

  switch(escolhadojogador)
  {case 1: printf("Você escolheu População\n");
    resultado = populaçao > populaçao2? 1:0;
    break;

    case 2: printf("Você escolheu Area\n");
    resultado = area_KM > area_KM2? 1:0;
    break;

    case 3: printf("Você escolheu PIB\n");
    resultado = PIB > PIB2? 1:0;
    break;

    case 4: printf("Você escolheu Pontos turisticos\n");
    resultado = pontos_turisticos > pontos_turisticos2? 1:0;
    break;

    case 5: printf("Você escolheu Densidade populacional\n");
    resultado = densidade_populacional < densidade_populacional2? 1:0;
    break;

    case 6: printf("Você escolheu PIB  per capita\n");
    resultado = PIB_per_capita > PIB2? 1:0;
    break;

    case 7: printf("Você escolheu SUPER PODER!\n");
    resultado = super_poder > super_poder2? 1:0;
    break;

    default:printf("Opção Invalida\n");
  }
//Resultado de comparação do primeiro atributo 
if (resultado == 1){
printf("Parabéns, você VENCEU o primeiro round\n");
}else{
printf("Infelizmente, você perdeu o primeiro round\n");
}

//Aqui o jogador escolhe o segundo atributo que quer utilizar
// estrutura if para caso o usuario escolha o mesmo atributo que o anterior
printf("\n");
int resultado2;
int escolhadojogador2;

printf("## Escolha o segundo atributo ##\n");
  printf("1. população\n");
  printf("2. Area\n");
  printf("3. PIB\n");
  printf("4. Pontos turisticos\n");
  printf("5. Densidade populacional\n");
  printf("6. PIB per capita\n");
  printf("7.Super  poder\n");
  scanf("%d",&escolhadojogador2);
  // estrutura if para caso o usuario escolha o mesmo atributo que o anterior
  if (escolhadojogador == escolhadojogador2)
  {printf("Você esolheu o mesmo atributo\n");
  }else{printf("## Escolha o segundo atributo ##\n");  printf("1. população\n");
  printf("2. Area\n");
  printf("3. PIB\n");
  printf("4. Pontos turisticos\n");
  printf("5. Densidade populacional\n");
  printf("6. PIB per capita\n");
  printf("7.Super  poder\n");
  scanf("%d",&escolhadojogador2);}

  //Area de comparação do segundo atributo
 switch(escolhadojogador2)
  {case 1: printf("Você escolheu População\n");
    resultado2 = populaçao > populaçao2? 1:0;
    break;

    case 2: printf("Você escolheu Area\n");
    resultado2 = area_KM > area_KM2? 1:0;
    break;

    case 3: printf("Você escolheu PIB\n");
    resultado2 = PIB > PIB2? 1:0;
    break;

    case 4: printf("Você escolheu Pontos turisticos\n");
    resultado2 = pontos_turisticos > pontos_turisticos2? 1:0;
    break;

    case 5: printf("Você escolheu Densidade populacional\n");
    resultado2 = densidade_populacional < densidade_populacional2? 1:0;
    break;

    case 6: printf("Você escolheu PIB  per capita\n");
    resultado2 = PIB_per_capita > PIB2? 1:0;
    break;

    case 7: printf("Você escolheu SUPER PODER!\n");
    resultado2 = super_poder > super_poder2? 1:0;
    break;

    default:printf("Opção Invalida\n");
  }
  //Resultado de comparação do segundo atributo 
if (resultado2 == 1){
printf("Parabéns, você VENCEU o segundo round\n");
}else{
printf("Infelizmente, você perdeu o segundo round\n");
}


}