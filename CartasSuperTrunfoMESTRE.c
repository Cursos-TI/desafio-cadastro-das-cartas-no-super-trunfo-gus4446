#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Nome:Gustavo Henrique da Silva


//****Desafio super trunfo, nível aventureiro****


//informações dos dois estados.
int main() {
  
  char estado1[3],estado2[3] ;
  char codigo_da_carta1[10],codigo_da_carta2[10] ;
  char nome_da_cidade1[50], nome_da_cidade2[50] ;
  int populacao1, populacao2;
  float area_em_km1, area_em_km2;
  float pontos_turisticos1, pontos_turisticos2 ;
  float PIB1, PIB2;
  float densidade1, densidade2;
  float PIB_per_capta1, PIB_per_capta2;

  float super_poder1, super_poder2;


  //cadastro da primeira carta.

  printf("super trunfo:\n");
  printf("\n cadrastro_da_carta1: \n");
  
  printf("sigla_do_estado:");
  scanf("%s", estado1);

  printf("codigo da carta:  ");
  scanf("%s", codigo_da_carta1);

  printf("nome da cidade:");
  scanf("%s", nome_da_cidade1);

  printf("populacao: ");
  scanf("%d", &populacao1);

  printf("area em km: ");
  scanf("%f", &area_em_km1);
 
  printf("pontos turisticos: ");
  scanf("%f", &pontos_turisticos1);

  printf("PIB: ");
  scanf("%f" ,&PIB1);

  printf("***\nPrimeira carta feita com sucesso!***\n");

  //cadastro da segunda carta.
  printf("super trunfo:\n");
  printf("\n cadrastro_da_carta2: \n");
  
  printf("sigla_do_estado:");
  scanf("%s", estado2);

  printf("codigo da carta:  ");
  scanf("%s", codigo_da_carta2);

  printf("nome da cidade:");
  scanf("%s", nome_da_cidade2);

  printf("populacao: ");
  scanf("%d", &populacao2);

  printf("area em km: ");
  scanf("%f", &area_em_km2);
 
  printf("pontos turisticos: ");
  scanf("%f", &pontos_turisticos2);

  printf("PIB: ");
  scanf("%f" ,&PIB2);

 


  printf("***\nSegunda carta feita com sucesso!***\n");
   
  
  // Cálculo da densidade populacional e PIB per capta
   densidade1= populacao1 / area_em_km1;
   densidade2= populacao2 / area_em_km2;
   PIB_per_capta1= PIB1 / populacao1;
   PIB_per_capta2= PIB2 / populacao2;


   //"super poder" resultado da soma dos fatores.

   super_poder1 = populacao1 + area_em_km1 + PIB1 + pontos_turisticos1 + PIB_per_capta1 + densidade1;

   super_poder2= populacao2 + area_em_km2 + PIB2 + pontos_turisticos2 + PIB_per_capta2 + densidade2;

   

  //exibição de resultados da primeira carta.

  printf("***\nInformacoes da primeira carta.***\n");

  printf("estado: %s\n", estado1);
  printf("codigo da carta: %s\n", codigo_da_carta1);
  printf("nome da cidade: %s\n", nome_da_cidade1);
  printf(" populacao: %d\n",populacao1);
  printf("area em km: %.2f\n", area_em_km1);
  printf("prontos turisticos:%.2f\n", pontos_turisticos1);
  printf("PIB: %.2f\n", PIB1);
  printf("densidade1: %.2f\n", densidade1);
  printf("PIB_per_capta1: %.2f\n",PIB_per_capta1 );
  printf("super poder1: %.2f\n", super_poder1);

  


  //exibição de resultados da segunda carta.

  printf("***Informacoes da segunda carta.***\n");

  printf("estado: %s\n", estado2);
  printf("codigo da carta: %s\n", codigo_da_carta2);
  printf("nome da cidade: %s\n", nome_da_cidade2);
  printf(" populacao: %d\n",populacao2);
  printf("area em km: %.2f\n", area_em_km2);
  printf("prontos turisticos:%.2f\n", pontos_turisticos2);
  printf("PIB: %.2f\n", PIB2);
  printf("densidade2: %.2f\n", densidade2);
  printf("PIB_per_capta2: %.2f\n", PIB_per_capta2);
  printf("Super Poder 2: %.2f\n", super_poder2);

  //super poder comparação

  printf("\n***super poder1 é maior que super poder2**\n");
  
  printf("super_poder1 > super_poder2: %d\n", super_poder1 > super_poder2);
  
  // carta maior ou menor
if(super_poder1>super_poder2){
  printf("carta1 venceu!\n");
}else{
  printf("carta2 venceu!");
}
  
  

    return 0;
}





