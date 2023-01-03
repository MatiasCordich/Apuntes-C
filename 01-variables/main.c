#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    // Variable = es un nombre para identificar una o varias posiciones en la memoria donde el programa guarda los distintos valores de una misma identidad

    // Para declarar una varaible es necesario declarar primero el tipo de dato al que pertenece dicha variable

    int x; // declaracion
    x = 123; // inicializacion
    int y = 321; // declaracion e inicializacion

    // Tipos de varaibles

    int age = 21; // integer (numero entero)
    float temperature = 22.05; // floating number (numero decimal)
    char grade = 'B'; // single character (unico caracter)
    char name[] = "Matias"; // Array de caracteres, en C no existe el tipo de dato String.

    // Mostrar el valor de la variable por consola

    // Pra mostrar los valores de una variables es necesario el uso de los punteros, que se representan con con un simobolo de porcentaje (%) seguido de una letra que representan el tipo de valor

    // Mostrar el valor de la variable name

    printf("Hello %s\n", name);

    // Mostrar el valor de la variable age

    printf("You are %d years old\n", age);

    // Mostar el valor de la variable grade

    printf("Your average grade is %c\n", grade);

    // Mostar el valor de la variable temperature

    printf("The temperature is %f celsius\n", temperature);

    return 0;
}
