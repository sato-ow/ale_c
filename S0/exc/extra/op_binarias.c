#include <stdio.h>
#include <stdlib.h>

/*
* Vamos a hacer pruebas con operaciones binarias
*
*   Rellena las siguentes funciones, compila y comprueba como funcionan 
*   
*   *Si quieres puedes usar internet para ver que operador es cada uno, lo importante es que veas como funcionan
*/

int xor(int num1, int num2)
{

}

int and(int num1,int num2)
{
    
}

int or(int num1,int num2)
{
    
}

int not(int num)
{
    
}

int desp_dcha(int num)
{

}

int desp_izq(int num)
{

}

/* Código un poco más complicado, no tocar*/

void printBinary(unsigned int num) {
    if (num > 1) {
        printBinary(num >> 1); // Desplaza bits a la derecha
    }
    printf("%d", num & 1); // Imprime el bit menos significativo
}

int main(int ac, char *av[])
{
    int num1, num2;
    
    if(ac != 3)
        return (printf("[ERR] Parametros incorrectos, prueba:\n\t./%s <numero1> <numero2>", __FILE__), -1);
    
    num1 = atoi(av[1]);
    num2 = atoi(av[2]);

    printf("Los numeros originales son: ");
    print_bin((unsigned int) num1);
    printf("y ");
    print_bin((unsigned int) num2);
    
    
    printf("\n\n NOT:\n\t");
    print_bin((unsigned int) num1);
    printf("\n\t");
    print_bin((unsigned int) not(num1));

    printf("\n\n Desplazamiento izquierda:\n\t");
    print_bin((unsigned int) num1);
    printf("\n\t");
    print_bin((unsigned int) desp_izq(num1));
    

    printf("\n\n Desplazamiento derecha:\n\t");
    print_bin((unsigned int) num1);
    printf("\n\t");
    print_bin((unsigned int) desp_dcha(num1));

    printf("\n\n AND:\n\t");
    print_bin((unsigned int) num1);
    printf("\n\t");
    print_bin((unsigned int) num2);
    printf("\n\t____\n\t");    
    print_bin((unsigned int) and(num1, num2));

    printf("\n\n OR:\n\t");
    print_bin((unsigned int) num1);
    printf("\n\t");
    print_bin((unsigned int) num2);
    printf("\n\t____\n\t");    
    print_bin((unsigned int) or(num1, num2));

    printf("\n\n XOR:\n\t");
    print_bin((unsigned int) num1);
    printf("\n\t");
    print_bin((unsigned int) num2);
    printf("\n\t____\n\t");    
    print_bin((unsigned int) xor(num1, num2));

    return 0;
}