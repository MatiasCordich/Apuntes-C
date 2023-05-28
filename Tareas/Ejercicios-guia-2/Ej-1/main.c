#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i;
    int vector_numeros[10] = {3,4,5,8,6,2,1,7,9,5};
    int cuadrado;
    int cubo;

    for (i = 0; i < 10; i++)
    {
        cuadrado = pow(vector_numeros[i],2);
        cubo = pow(vector_numeros[i],3);
        printf("-------------\n");
        printf("Numero: %i, Cuadrado: %i, Cubo: %i\n", vector_numeros[i], cuadrado, cubo);
        printf("-------------");
    }
    
    return 0;
}
