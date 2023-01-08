#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    /* Operaciones aritmeticas */

    int x = 5;
    int y = 2;

    int suma, resta, multiplicacion, division, modulo;

    suma = x + y;
    resta = x - y;
    multiplicacion = x * y;
    division = x / y;
    modulo = x % y;

    printf("%d\n", suma);
    printf("%d\n", resta);
    printf("%d\n", multiplicacion);

    // En el caso de la division vemos que al dividir 5/2 nos da un numero decimal (2.5), si lo dejamos como esta solo nos va a mostrar la parte decimal

    printf("%d\n", division);

    // Primero creo una variable que guarde un numero de tipo decimal, pero como tanto x e y son de tipo entero, lo que tengo que hacer es CASTEAR la y, es decir, forzar su tipo de dato a tipo float.

    float casteo = x / (float)y;

    printf("%f\n", casteo);

    // Modulo

    // El modulo me devuelve el resto de la division entre 5 y 2, el resto es 1

    printf("%d\n", modulo);

    // Operadores de decremento e incremento

    // Estos operadores lo que hacen es incrementar el valor en 1 o decrementar en 1

    x++;
    y--;

    printf("%d\n", x);
    printf("%d\n", y);

    /* Operadores de asignacion */

    // Los operadores de asignacion son los que se le que se le asigna un valor a una variable. Todos estos operadores son la combinacion de los operadores aritmeticos (+, -, *,/) mas el signo igual (=)

    int num = 10, sum, res, mul, div;

    // num+=1; // num = num + 1
    // num-=2; // num = num - 1
    // num*=4; // num = num * 4
    num /= 2; // num = num / 2

    printf("%d\n", num);

    /* Operadores logicos */

    /*
        Existen 3 tipos de operadores logicos, los cuales son

        && = AND
        || = OR
        ! = NOT

        Estos operadores nos van a servir para evaluar dos o mas condiciones. El operador ! se utiliza para cambiar el valor opuesto de la variable.

    */

    // Operador AND &&

    // Este operador sirve para evaluar dos o mas condiciones, dichas condiciones SE TIENEN QUE CUMPLIR TODAS SI O SI

    float temp = -18;

    if (temp <= 0 && temp <= 10) // La condicion es que la temperatura tiene que ser mayor o igual a 0 Y (AND) menor o igual a 10, si el valor de la variable cumple con ambas condiciones se ejecuta el codigo
    {
        printf("Hace frio\n");
    }
    else if (temp >= 11 && temp <= 20) // La condicion es que la temperatura tiene que ser mayor o igual a 11 Y (AND) menor o igual a 20, si el valor de la variable cumple con ambas condiciones se ejecuta el codigo
    {
        printf("Esta templado\n");
    }
    else
    {
        printf("Hace calor\n");
    }

    // Operador OR ||

    // Este operador evalua dos o mas condiciones y con que SOLAMENTE UNA CONDICION sea verdadera es suficiente.

    if (temp < 0 || temp == 0 || temp <= 10) // La condiciones son que si la temperatura es menor a cero O (OR) la temperatura es cero O si la temperatura es menor o igual a 10 entonces ejecutame el siguiente codigo. Solo se tiene que cumplir una de las condiciones
    {
        printf("Hace frio\n");
    }
    else {
        printf("Esta templado\n");
    }

    return 0;
}
