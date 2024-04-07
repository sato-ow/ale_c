#include <stdio.h>

char mayusc(char c)
{
    return (c- 32);
}

int main()
{
    char minuscula;
    scanf("%c", &minuscula);
 
    char mayuscula = mayusc(minuscula);
    printf("%c -> %c", minuscula, mayuscula);

    return 0;
}