#include <stdio.h>

int main()
{
    /* Déclarations simples */
    char caractère = 'C' ;
    int entier = 5 ;
    float reel = 35.5f ;
    long long biginteger = 887898989ll ;

    /* Impression de la valeur des variables avec leur adresse mémoire */
    printf("Valeur de la variable caractère = %c, Adresse de la variable caractère = %u\n", caractère, &caractère) ;
    printf("Valeur de la variable entier = %d, Adresse de la variable entier = %u\n", entier, &entier) ;
    printf("Valeur de la variable réel = %f, Adresse de la variable réel = %u\n", réel, &réel) ;
    printf("Valeur de la variable biginteger = %lld, Adresse de la variable biginteger = %u", biginteger, &biginteger) ;
    // www.PandaCodeur.com
    return 0 ;
}