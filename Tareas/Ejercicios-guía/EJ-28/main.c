#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DADOS 3 NÚMEROS DONDE EL PRIMERO Y EL ULTIMO SON LÍMITES DE UN INTERVALO, INDICAR SI EL SEGUNDO PERTENECE A DICHO INTERVALO.

    int num1;
    int num2;
    int num3;

    // Ingreso los valores de cada numero

    printf("Ingrese un numero: ");
    scanf("%i", &num1);

    printf("Ingrese un segundo numero: ");
    scanf(" %i", num2);

    printf("Ingrese un tercer numero: ");
    scanf(" %i", &num3);

    /*
        Tengo que indiciar si el segundo numero pertenece al intervalo determinado por el primer y tercer numero por lo que num1 sera el limite inicial y num3 el limite final y

        num2 >= num1
        Y a la vez debe cumplir que
        num2 <= num3
    */

    if ((num2 >= num1) && (num2 <= num3))
    {
        printf("El numero %i esta dentro del intervalo %i - %i", num2, num1, num3);
    }
    else
    {
        printf("El numero %i NO esta dentro del intervalo %i - %i", num2, num1, num3);
    }

    return 0;
}
