#include <stdio.h>


/*
*  -> Que operadores existen? y para que sirven?
*
*       -> Operadores normales (+ - / * %) 
*       -> Operadores de bits (~ & | >> << ^)
*/
int main()
{
    int a = 8, b = 3;
    int resultado = a+b;

    printf ("el numero %d mas el numero %d es igual a el numero %d \n", a, b, a+b);
    printf ("el numero %d menos el numero %d es igual a el numero %d \n", a, b, a-b);

    printf ("el numero %d entre el numero %d es igual a el numero %d \n", a, b, a/b);

    printf ("el numero %d por el numero %d es igual a el numero %d \n", a, b, a*b);
    printf ("el numero %d ? el numero %d es igual a el numero %d \n", a, b, a%b);

    return 0 ;
}