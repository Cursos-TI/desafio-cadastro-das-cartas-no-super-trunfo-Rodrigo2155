#include <stdio.h>



int main() {
    int carta1 = 1, carta2 = 2;
    int populacao1 = 12325000, populacao2 = 6748000; 
    float area1 = 1521.11, area2 = 1200.25; 
    int pontos_turisticos1 = 50, pontos_turisticos2 = 30;
    char estado1 = 'A', estado2 = 'B';
    char codigo1[5] = "A01", codigo2[5] = "B02";
    char cidade1[30] = "São_Paulo", cidade2[30] = "Rio_De_Janeiro";
    float pib1 = 699.28, pib2 = 300.50;
    
    printf ("Carta: %d\n", carta1);
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f Km²\n", area1);
    printf ("Pib: %.2f bilhões de reais\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf ("Carta: %d\n", carta2);
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f Km²\n", area2);
    printf ("Pib: %.2f bilhões de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", pontos_turisticos2);


    return 0;
}
    