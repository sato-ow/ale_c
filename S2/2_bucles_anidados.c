



// para recorrer o crear matrices se deben usar bucles anidados, es decir, bucles dentro de bucles

int main()
{
    // mira como recorro esta matriz:

    int matrix[3][3] = { {1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};

    int i = 0;
    int j = 0;
    while(i < 3)
    {
        j = 0;
        while(j < 3)
        {
            printf("%d ", matrix[i][j]);
            j++;
        }
        printf("\n"); // esto es como imprimir un enter (un salto de linea)
        i++;
    }
    // Truco, para ver como funciona ir apuntando en un papel que pasa;
    return 0;
}