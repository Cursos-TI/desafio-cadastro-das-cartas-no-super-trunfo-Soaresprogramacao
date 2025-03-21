#include <stdio.h>

int main () {

    //Variáveis da primeira carta 

    char estado1 [50];
    char código1 [6];
    char cidade1 [50];
    int população1;
    float área1;
    float pib1;
    int pontos1; 

     //Variáveis da segunda carta 

     char estado2 [50];
     char código2 [6];
     char cidade2 [50];
     int população2;
     float área2;
     float pib2;
     int pontos2; 



     // Exebição da primeira carta 
    printf("digite o nome de seu estado:\n");
    scanf("%s", &estado1);

    printf("digite o código de sua carta:\n");
    scanf("%s", &código1);

    printf("digite o nome de sua cidade:\n"); 
    scanf("%s", &cidade1);

    printf("digite a da população da cidade:\n"); 
    scanf("%d",&população1);

    printf("digite a área em km²:\n");
    scanf("%f", &área1) 

    printf("digite o pib: \n"); 
    scanf("%f", &pib1);

    printf("digite quantos pontos turisticos existem:\n")
    scanf("%d", &pontos1); 

    // Exebição da segunda carta 

    printf("digite o nome de seu estado:\n");
    scanf("%s", &estado2);

    printf("digite o código de sua carta:\n");
    scanf("%s", &código2);

    printf("digite o nome de sua cidade:\n"); 
    scanf("%s", &cidade2);

    printf("digite a da população da cidade:\n"); 
    scanf("%d",&população2);

    printf("digite a área em km²:\n");
    scanf("%f", &área2)

    printf("digite o pib:\n"); 
    scanf("%f", &pib2);

    printf("digite quantos pontos turisticos existem:\n")
    scanf("%d", &pontos2); 


    // SAÍDA DE DADOS DA PRIMEIRA CARTA 
    printf("nome do estado: %s\n", estado1);
    printf("código da carta: %s\n", código1);
    printf("nome da cidade: %s\n", cidade1);
    printf("população: %d\n", população1);
    printf("área em km: %f\n", área1);
    printf("pib: %f\n", pib1);
    printf("pontos turisticos: %d\n", pontos1);

     // SAÍDA DE DADOS DA SEGUNDA CARTA 
     printf("nome do estado: %s\n", estado2);
     printf("código da carta: %s\n", código2);
     printf("nome da cidade: %s\n", cidade2);
     printf("população: %d\n", população2);
     printf("área em km: %f\n", área2);
     printf("pib: %f\n", pib2);
     printf("pontos turisticos: %d\n", pontos2);


    return 0;
}
