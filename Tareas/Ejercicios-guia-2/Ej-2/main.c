#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int cantidad = 5;
    int i;
    char letras[cantidad];
    char vector_invertido[cantidad];

    for (i = 0; i < cantidad; i++)
    {
        printf("Ingrese una letra: ");
        scanf("%c", &letras[i]);
    }

    for (i = 0; i < cantidad; i++)
    {
        strcpy(vector_invertido[i], letras[4 - i]);
    }

    printf("Vector letras invertidos:\n");
    for (i = 0; i < cantidad; i++)
    {
        printf("%s\n", vector_invertido[i]);
    }
    
    
    
    return 0;
}
