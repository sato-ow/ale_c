#include <stdio.h>


/*
*   Tipos de datos:
*       -> int -> ENTERO -> -+217000000 -> %d
*       -> unsigned int -> %u
*       -> char -> caracter -> %c
*       -> float -> Decimales %f
*       -> double -> 2x float -> %lf
*
*   que tamaños tienen? -> sizeof()
*
*/

int main()
{
    int numero = 27;
    unsigned int pepe = 47;
    char c = 'c';
    double raton = 0.1;


    
    printf("Un int %d tiene tamaño %ld bytes\n", numero, sizeof(numero));
    printf("Un unsigned int %u tiene tamaño %ld bytes\n", pepe, sizeof(pepe));
    printf("Un char %c tiene tamaño %ld bytes\n", c, sizeof(c));
    printf("Un float %lf tiene tamaño %ld bytes\n", raton, sizeof(raton));
    
    return 0;
    
}