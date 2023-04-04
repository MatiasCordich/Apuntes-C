#include <stdio.h>

int main(int argc, char const *argv[])
{
    // INGRESAR 5 NUMEROS E INGRESAR SU MEDIA

    int num_1;
    int num_2;
    int num_3;
    int num_4;
    int num_5;
    int promedio;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num_1);

    printf("Ingrese el segundo numero: ");
    scanf("%i", &num_2);

    printf("Ingrese el tercer numero: ");
    scanf("%i", &num_3);

    printf("Ingrese el cuarto numero: ");
    scanf("%i", &num_4);

    printf("Ingrese el quinto numero: ");
    scanf("%i", &num_5);

    promedio = (num_1 + num_2 + num_3 + num_4 + num_5)/5;

    printf("El promedio es de: %i", promedio);
    
    return 0;
}
