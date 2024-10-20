#include <unistd.h>


void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (/* condition */)
    {
        /* code (imprimir el caracter str[i])*/
    }
    
}







int main()
{
    // Ahora que ya has usado los bucles while para imprimir el abecedario entero quiero que hagas un bucle que imprima una string 
    // IMPORTANTE ~ Acordarse que cuando acaba la string el valor es 0
    char test[11] = "Hola q tal";

    ft_putstr(test);
    return 0;
}