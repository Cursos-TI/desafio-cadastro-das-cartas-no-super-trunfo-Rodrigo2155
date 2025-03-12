#include <stdio.h>



int main() {


    int   carta1 = 1, carta2 = 2;
    int   populacao1 = 2428708, populacao2 = 8058441; 
    float area1 = 312.353, area2 = 675.41; 
    int   pontos_turisticos1 = 57, pontos_turisticos2 = 47;
    char  estado1 = 'A', estado2 = 'B';
    char  codigo1[5] = "A01", codigo2[5] = "B02";
    char  cidade1[30] = "Fortaleza", cidade2[30] = "Florianópolis";
    float pib1 = 73, pib2 = 23.55;
    
    printf ("Carta: %d\n", carta1);
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", cidade1);
    printf ("População: %d habitantes\n", populacao1);
    printf ("Área: %.3f Km²\n", area1);
    printf ("Pib: %.3f bilhões de reais em 2024\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n\n\n", pontos_turisticos1);

    printf ("Carta: %d\n", carta2);
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.3f Km²\n", area2);
    printf ("Pib: %.2f bilhões de reais em 2024\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n\n\n", pontos_turisticos2);


    return 0;
}
    