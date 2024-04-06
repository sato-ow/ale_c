#include <stdio.h>
#include <unistd.h>

#define MAX(a, b) a > b ? a : b
#define MIN(a, b) a < b ? a : b

int inverse(int num)
{

}

int main()
{
    int num = 0;
    int num_aux = 0;

    printf("Introduce un numero aleatorio: ");
    scanf("%d", &num);

    printf("\nDale la vuelta a ese numero: ejemplo 123 -> 321\n");
    sleep(4);

    num_aux = inverseNum(num);

    printf("Ahora de esos dos numeros resta el más grande menos el pequeño\n");
    sleep(8);
    /* Te toca: */

    num = ...

    printf("Ahora dale a este nuevo numero la vuelta\n");
    sleep(4);
    num_aux = inverseNum(num);

    printf("Y sumalos\n");
    sleep(8);
    /* Te toca: */
    
    num = ...

    printf("El numero que te ha salido es el 1089!!!");
    
    return 0;
}