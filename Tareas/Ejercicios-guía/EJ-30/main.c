#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    REALIZAR LA TABLA DE MULTIPLICAR DE UN NUMERO ENTRE 0 Y 10 DE FORMA QUE SE VISUALICE DE LA SIGUIENTE FORMA:
        4 X 1 = 4
        4 X 2 = 8
        ………… 
    */

    // Declaro mis variables
    int i;
    int num;
    int multiplicacion;

    // Ingreso el valor de la variable num
    printf("Ingrese un numero: ");
    scanf("%i", &num);

    // Hago el bucle for para que se repita 10 veces
    for (i = 0; i <= 10; i++)
    {   
        // Realizo la multiplicacion entre el numero ingresado y el valor de i que toma durante la iteracion
        multiplicacion = num * i;

        // Imprimo por pantalla el resultdo como me pide el enunciado.
        printf("%i x %i = %i\n", num, i, multiplicacion);
    }
    


    return 0;
}
