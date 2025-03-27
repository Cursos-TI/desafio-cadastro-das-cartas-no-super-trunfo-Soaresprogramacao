#include <stdio.h> 

int main () {

    // Variaveis da primeira carta 

    char estado1 [50];
    char codigo1 [6];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Variaveis da segunda carta 

    char estado2 [50];
    char codigo2 [6];
    char cidade2[50];
    int populacao2; 
    float area2; 
    float pib2;
    int pontos2;


    // Exibicao da primeira carta 
    printf("DIGITE O NOME DE SEU ESTADO:\n");
    scanf("%s", &estado1);

    printf("DIGITE O CODIGO DE SUA CARTA:\n");
    scanf("%s", &codigo1);

    printf("DIGITE O NOME DE SUA CIDADE:\n"); 
    scanf("%s", &cidade1);

    printf("DIGITE A POPULACAO DA CIDADE:\n"); 
    scanf("%d", &populacao1);

    printf("DIGITE A AREA EM KM:\n"); 
    scanf("%f", &area1);

    printf("DIGITE O PIB:\n");
    scanf("%f", &pib1);

    printf("DIGITE O NUMERO DE PONTOS TURISTICOS:\n");
    scanf("%d", &pontos1);

    //Exibicao da segunda carta 

    printf("DIGITE O NOME DE SEU ESTADO:\n"); 
    scanf("%s", &estado2); 
   
    printf("DIGITE O CODIGO DE SUA CARTA:\n");
    scanf("%s", &codigo2);

    printf("DIGITE O NOME DE SUA CIDADE:\n");
    scanf("%s", &cidade2);

    printf("DIGITE A POPULACAO:\n");
    scanf("%d", &populacao2);

    printf("DIGITE A AREA EM KM:\n");
    scanf("%f", &area2);

    printf("DIGITE O PIB:\n");
    scanf("%f", &pib2);

    printf("DIGITE OS PONTOS TURISTICOS:\n");
    scanf("%d", &pontos2);

    // SAIDA DE DADOS DA PRIMEIRA CARTA 
    printf("ESTADO: %s\n", estado1);
    printf("CODIGO: %s\n", codigo1);        
    printf("CIDADE: %s\n", cidade1);
    printf("POPULACAO: %d\n", populacao1);
    printf("AREA: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("PONTOS TURISTICOS: %d\n", pontos1);

    // SAIDA DE DADOS DA SEGUNDA CARTA
    printf("ESTADO: %s\n", estado2);
    printf("CODIGO: %s\n", codigo2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULACAO: %d\n", populacao2);
    printf("AREA: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("PONTOS TURISTICOS: %d\n", pontos2);

    
    return 0;
}