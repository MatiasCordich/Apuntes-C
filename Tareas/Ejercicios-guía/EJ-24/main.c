#include <stdio.h>

int main(int argc, char const *argv[])
{
    /**
     ESCRIBIR UN PROGRAMA QUE VISUALICE UNA TABLA DE LOS N PRIMEROS NÚMEROS, SIENDO N UN NÚMERO QUE INGRESA EL USUARIO. UTILIZAR EL SIGUIENTE DISEÑO DE SALIDA SUPONIENDO QUE EL USUARIO INGRESO UN 3:
        NUMERO CUADRADO CUBO
          1       1       1
          2       4       8
          3       9       27

    */
    // Declaro mis variables
    int num;
    int i;
    int cuadrado;
    int cubo;
    
    // Ingreso el valor de la variable num por teclado
    printf("Ingrese un numero: ");
    scanf("%i", &num);

    // Imprimo el encabezado de la tabla
    printf("NUMERO     CUADRADO     CUBO\n");

    // Hago el bucle for
    for (i = 1; i <= num; i++)
    {
        cuadrado = i * i;
        cubo = i * i * i;
        printf(" %i     %i      %i\n", i, cuadrado, cubo); 
    }
    


    return 0;
}
