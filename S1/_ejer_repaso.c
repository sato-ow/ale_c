#include <stdio.h>


int main()
{

// Primero imprime "Hola mundo!"

// despues escribe tu nombre en ascii, por ejemplo
    char Ej[7];
    Ej[0] = 65;
    Ej[1] = 108;
    Ej[2] = 118;
    Ej[3] = 97;
    Ej[4] = 114;
    Ej[5] = 111;
    Ej[6] = 0;

    printf("%s\n", Ej);

    // Ahora tu:
    char Alejandro[10];






    Alejandro[9] = 0; // Siempre que se ponen muchos char's seguidos se acaba con un 0.

    printf("%s\n", Alejandro);
    return 0;
}