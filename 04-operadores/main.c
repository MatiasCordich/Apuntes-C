#include <stdio.h>

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

    float casteo = x / (float) y;

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

    //num+=1; // num = num + 1
    //num-=2; // num = num - 1
    //num*=4; // num = num * 4
    num/=2; // num = num / 2

    printf("%d\n", num);

    return 0;
}
