#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaramos un variable 

    char name[25];
    int age;

    printf("Cual es tu nombre? ");

    // Para capturar el valor que ingresamos por consola y asignarselo a la variable utilizamos la funcion scanf() de la siguiente manera 

    //scanf("%s", &name);

    // El problema con el scanf() es que no lee los espacios en blanco si queremos escribir otra palabra, para solucionar esto tenemos que utilizar la funcion fgets()

    fgets(name, 25, stdin); // Esta funcion lleva como parametros, el nombre de la variable, el tamaño de array y el stdin que es un puntero para obtener la lectura de caracteres.

    printf("Cuantos años tenes? ");
    scanf("%d", &age);


    printf("Hola %s", name);
    printf("Tenes %d años", age);

    return 0;
}
