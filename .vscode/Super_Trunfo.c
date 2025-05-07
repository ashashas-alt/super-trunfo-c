/*
 * SUPER TRUNFO EM C - NIVEL NOVATO
 * Objetivo: Cadastro básico de cartas (estado, código, cidade, população, área, PIB, pontos turísticos).
 * 
 * PRÓXIMOS NÍVEIS:
 * - Aventureiro: Calcular densidade populacional e PIB per capita.
 * - Mestre: Implementar comparações e "Super Poder".
 */

#include <stdio.h>

int main (){
    
  // VARIÁVEIS CARTA 1   
    unsigned long populacao1;              
    char estado1[50];      //%c
    char codigo1[4];        // Ex:"A01"
    char cidade1[40];       //%d
    float area1;            //%f
    float pib1;             //%d
    int pontos_turisticos1;
    float densidade1;       // Adicionado para nível aventureiro
    float pib_per_capita1;  //nivel aventureiro
    //nível mestre
    float super_poder1 = populacao1 + area1 + pib1+pontos_turisticos1 + pib_per_capita1 + (1/densidade1);

    //VARIÁVEIS CARTA 2 
    char estado2[50];
    char codigo2[4];
    char cidade2[40];
    unsigned long populacao2; 
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;       // Adicionado para nível aventureiro
    float pib_per_capita2;  //nivel aventureiro
    float super_poder2 = populacao2 + area2 + pib2+pontos_turisticos2 + pib_per_capita2 + (1/densidade2);

  //CARTA 1
    printf("\n==CADASTRO CARTA 1==\n");
    printf("\n Estado (A-H): ");
    scanf(" %49s", estado1);
    printf("\n Codigo (ex: A01): ");
    scanf("%3s", codigo1);
    printf("\n cidade: ");
    scanf("%39s", cidade1);
    printf("\n população: ");
    scanf("%lu", &populacao1);
    printf("\n Area (km²): ");
    scanf("%f",&area1);
    printf("\n PIB (em bilhões): ");
    scanf("%f",&pib1);
    printf("\n Pontos turisticos: ");
    scanf("%d",&pontos_turisticos1);
 
  
  //CARTA 2
  printf("\n==CADASTRO CARTA 2==\n");
  printf("\n Estado (A-H): ");
  scanf(" %49s", estado2);
  printf("\n Codigo (ex: A01): ");
  scanf("%3s", codigo2);
  printf("\n cidade: ");
  scanf("%39s", cidade2);
  printf("\n população: ");
  scanf("%lu", &populacao2);
  printf("\n Area (km²): ");
  scanf("%f",&area2);
  printf("\n PIB (em bilhões): ");
  scanf("%f",&pib2);
  printf("\n Pontos turisticos: ");
  scanf("%d",&pontos_turisticos2);
   

// =====Nível aventureiro=====
//cálculos para carta 1

   densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000)/populacao1;

//cálculos para carta 2

densidade2 = populacao2 / area2;
pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    //RESULTADO 
    //carta 1
    printf("\n===CARTA 1===\n");
    printf("Estado: %s\n",estado1); //separar 
    printf("Codigo: %s\n",codigo1); //separar 
    printf("Cidade: %s\n",cidade1);
    printf("População: %lu\n",populacao1);
    printf("Área: %.2f km²\n",area1);
    printf("PIB: %.2f bilhoes\n",pib1);
    printf("Pontos Turísticos: %d\n",pontos_turisticos1);
    printf("Densidade: %.2f hab/km²\n", densidade1);  //adicionado
    printf("PIB per capita: %.2f\n", pib_per_capita1);  //adicionado

 //carta 2
    printf("\n===CARTA 2===\n");
    printf("Estado: %s\n",estado2);
    printf("Código: %s\n",codigo2);
    printf("Cidade: %s\n",cidade2);
    printf("População: %lu\n",populacao2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: %.2f bilhoes\n",pib2);
    printf("Pontos Turísticos: %d\n",pontos_turisticos2);
    printf("Densidade: %.2f hab/km²\n", densidade1); //adicionado
    printf("PIB per capita: %.2f\n", pib_per_capita1); //adicionado
    

    //== NIVEL MESTRE - COMPARAÇÕES (A maior carta vence)==
    printf("\n");
    printf("\n== RESULTADO DAS BATALHAS ==");
    printf("\n");
    // população 
    printf("\nPopulação: carta %d venceu", (populacao1> populacao2) ? 1:2); 

    // Área 
    printf("\nÁrea: carta %d venceu", (area1> area2) ? 1:2); 

    // PIB 
    printf("\nPIB: carta %d venceu", (pib1> pib2) ? 1:2); 

    //Pontos Turísticos 
    printf("\nPontos turísticos: carta %d venceu",(pontos_turisticos1>pontos_turisticos2)? 1:2);

    //Densidade (menor vence - regra especial)
    printf("\nDensidade: carta %d venceu",(densidade1<densidade2)? 1:2);

    //Super Poder (maior vence)
    printf("\nSuper Poder: Carta %d venceu",(super_poder1>super_poder2)?1:2);


  return 0;
}