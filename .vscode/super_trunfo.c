#include <stdio.h>

int main (){
    
    // VARIÁVEIS CARTA 1
    char estado1;                       //%c
    char codigo1[4];                    // Ex:"A01"
    char cidade1[40];
    int populacao1;                     //%d
    float area1;                        //%f
    float pib1;
    int pontos_turisticos1;             //%d

    //VARIÁVEIS CARTA 2 
    char estado2;
    char codigo2[4];
    char cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //CARTA 1
    printf("==CADASTRO CARTA 1==");
    printf("Estado: ");
    scanf("%c",&estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("cidade: ");
    scanf("%s",cidade1);
    printf("população: ");
    scanf("%d", &populacao1);
    printf("Area km²: ");
    scanf("%f",&area1);
    printf("Pib: ");
    scanf("%f",&pib1);
    printf("Pontos turisticos: ");
    scanf("%d",&pontos_turisticos1);

    //cadastro carta 2      '
    printf("==cadastro carta 2==");
    printf("estado: ");
    scanf("%c",&estado2);
    printf("codigo: ");
    scanf("%s",codigo2);
    printf("cidade: ");
    scanf("%s",cidade2);
    printf("população: ");
    scanf("%d",&populacao2);
    printf("Area km²: ");
    scanf("%f",&area2);
    printf("Pib: ");
    scanf("%f",&pib2);
    printf("Pontos turisticos: ");
    scanf("%d",&pontos_turisticos2);

    //RESULTADO 
    //carta 1
    printf("\n===CARTA 1===\n");
    printf("Estado: %c\n",estado1);
    printf("Codigo: %s\n",codigo1);
    prinf("Cidade: %s\n",cidade1);
    print("População: %d\n",populacao1);
    print("Área: %.2f km²\n",area1);
    printf("PIB: %.2f bilhoes\n",pib1);
    print("Pontos Turísticos: %d\n",pontos_turisticos1);

 //carta 2
    printf("\n===CARTA 2===\n");
    printf("Estado: %c\n",estado2);
    printf("Código: %S\n",codigo2);
    prinf("Cidade: %s\n",cidade2);
    print("População: %d\n",populacao2);
    print("Área: %.2f km²\n",area2);
    printf("PIB: %.2f bilhoes\n",pib2);
    print("Pontos Turísticos: %d\n",pontos_turisticos2);

  return 0;
}