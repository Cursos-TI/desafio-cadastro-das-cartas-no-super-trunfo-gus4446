#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Gustavo Henrique da Silva

int main() {


    char estado1[3],estado2[3] ;
    char codigo_da_carta1[10],codigo_da_carta2[10] ;
    char nome_da_cidade1[50], nome_da_cidade2[50] ;
    int populacao1, populacao2;
    float area_em_km1, area_em_km2;
    float pontos_turisticos1, pontos_turisticos2 ;
    float PIB1, PIB2;
  
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
  
    //cadastro da segunda carta.
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
  
    
  
    //exibição de resultados da primeira carta.
  
    printf("estado: %s\n", estado1);
    printf("codigo da carta: %s\n", codigo_da_carta1);
    printf("nome da cidade: %s\n", nome_da_cidade1);
    printf(" populacao: %d\n",populacao1);
    printf("area em km: %.2f\n", area_em_km1);
    printf("prontos turisticos:%.2f\n", pontos_turisticos1);
    printf("PIB: %.2f\n", PIB1);
  
    //exibição de resultados da segunda carta.
  
    printf("estado: %s\n", estado2);
    printf("codigo da carta: %s\n", codigo_da_carta2);
    printf("nome da cidade: %s\n", nome_da_cidade2);
    printf(" populacao: %d\n",populacao2);
    printf("area em km: %.2f\n", area_em_km2);
    printf("prontos turisticos:%.2f\n", pontos_turisticos2);
    printf("PIB: %.2f\n", PIB2);
  
  
  
    
  
    
    
  
  
      return 0;
}
