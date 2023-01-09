#include <stdio.h>

// Los operadores ternarios son abreviaciones para los if/else y constan de dos simboles ? y :

// La sintaxis es la siguiente 
// (condicion) ? (si es true ejecuta esto) : (si es false ejecuta esto)

// Primero creamos la funcion que sabemos nos va a retornar un int

int findMax(int x, int y){

    // La condicion es si (x es mayor a y) ? si es true entonces devolveme "x" : si es false entonces devolveme "y"

    return (x > y) ? x : y;

}


int main(int argc, char const *argv[])
{
    int max = findMax(3,4);

    // 3 entra para x y 4 entra para y 
    // se evalua la condicion, (x > y) --> 3 > 4
    // 3 no es mayor a 4, es false por lo que pasa al : donde me va a devolver y=4

    printf("%d", max);

    return 0;
}
