#include <stdio.h>

// El return sirve para devolver un valor una vez ejecutada toda mi funcion.

// En este caso la sintaxis de la funcion cambia, primero tenemos que definir que valor va a retornar la funcion. En este caso la funcion square() nos va a devolver un valor de tipo double por lo que la funcion va a empezar con double en vez con void

double square(double x) {

    double result = x * x;
    return result;

}

int main(int argc, char const *argv[])
{
    double num = square(3.14);

    printf("%lf", num);

    return 0;
}
