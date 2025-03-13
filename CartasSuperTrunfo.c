#include <stdio.h>



int main() {


    int   carta1 = 1, carta2 = 2;
    float  populacao1 = 2.574412, populacao2 = 576.361; 
    float area1 = 313.8, area2 = 675.4; 
    int   pontos_turisticos1 = 57, pontos_turisticos2 = 47;
    char  estado1 = 'A', estado2 = 'B';
    char  codigo1[5] = "A01", codigo2[5] = "B02";
    char  cidade1[30] = "Fortaleza", cidade2[30] = "Florianópolis";
    float pib1 = 12.67391382545, pib2 = 12.000000;
    float densidade1 = (float)(populacao1 / area1);
    float densidade2 = (float)(populacao2 / area2);
    float pibpercapita1 = (float)(pib1 / populacao1);
    float pibpercapita2 = (float)(pib2 / populacao2);

    printf ("Carta: %d\n", carta1);
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", cidade1);
    printf ("População: %.3f habitantes\n", populacao1);
    printf ("Área: %.3f Km²\n", area1);
    printf ("Densidade Populacional: %f habitantes por quilômetro quadrado\n", densidade1);
    printf ("Pib: %.3f bilhões de reais em 2024\n", pib1);
    printf ("Pib Per capita: %.2f\n", pibpercapita1);
    printf ("Número de Pontos Turísticos: %d\n\n\n", pontos_turisticos1);

    
    
    
    printf ("Carta: %d\n", carta2);
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", cidade2);
    printf ("População: %.3f\n", populacao2);
    printf ("Área: %.3f Km²\n", area2);
    printf ("Densidade Populacional: %f habitantes por quilômetro quadrado\n", densidade2);
    printf ("Pib: %.2f bilhões de reais em 2024\n", pib2);
    printf ("Pib Per Capita: %f\n", pibpercapita2);
    printf ("Número de Pontos Turísticos: %d\n\n\n", pontos_turisticos2);


    return 0;
}
    