#include <stdio.h>

int main (){
    
    // VARIÁVEIS CARTA 1
    char estado1[50];                       //%c
    char codigo1[4];                    // Ex:"A01"
    char cidade1[40];
    int populacao1;                     //%d
    float area1;                        //%f
    float pib1;
    int pontos_turisticos1;             //%d

    //VARIÁVEIS CARTA 2 
    char estado2[50];
    char codigo2[4];
    char cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //CARTA 1
    printf("\n==CADASTRO CARTA 1==\n");
    printf("\nEstado: ");
    scanf(" %49s", &estado1);
    printf("\nCodigo: ");
    scanf("%3s", &codigo1);
    printf("\ncidade: ");
    scanf("%39s", &cidade1);
    printf("\npopulação: ");
    scanf("%d", &populacao1);
    printf("\nArea km²: ");
    scanf("%f",&area1);
    printf("\nPib: ");
    scanf("%f",&pib1);
    printf("\nPontos turisticos: ");
    scanf("%d",&pontos_turisticos1);

    //cadastro carta 2      '
    printf("\n==CADASTRO CARTA 2==\n");
    printf("\nEstado: ");
    scanf(" %49s", &estado2);
    printf("\nCodigo: ");
    scanf("%3s", &codigo2);
    printf("\ncidade: ");
    scanf("%39s", &cidade2);
    printf("\npopulação: ");
    scanf("%d", &populacao2);
    printf("\nArea km²: ");
    scanf("%f",&area2);
    printf("\nPib: ");
    scanf("%f",&pib2);
    printf("\nPontos turisticos: ");
    scanf("%d",&pontos_turisticos2);

    //RESULTADO 
    //carta 1
    printf("\n===CARTA 1===\n");
    printf("Estado: %s\n",estado1); //separar 
    printf("Codigo: %s\n",codigo1); //separar 
    printf("Cidade: %s\n",cidade1);
    printf("População: %d\n",populacao1);
    printf("Área: %.2f km²\n",area1);
    printf("PIB: %.2f bilhoes\n",pib1);
    printf("Pontos Turísticos: %d\n",pontos_turisticos1);

 //carta 2
    printf("\n===CARTA 2===\n");
    printf("Estado: %s\n",estado2);
    printf("Código: %s\n",codigo2);
    printf("Cidade: %s\n",cidade2);
    printf("População: %d\n",populacao2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: %.2f bilhoes\n",pib2);
    printf("Pontos Turísticos: %d\n",pontos_turisticos2);

  return 0;
}