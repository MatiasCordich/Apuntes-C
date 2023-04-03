#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DETERMINAR EL AREA DE UN TRIANGULO

    // Determino las variables
    int base;
    int altura;
    int area;

    // Ingreso los valores de base y altura por teclado
    printf("Ingrese la base del Triangulo: ");
    scanf("%i", &base);
    printf("Ingrese la altura del Triangulo: ");
    scanf("%i", &altura);

    // Calculo el area del trinagulo mediante la operacion aritmetica de multiplicar base por altura y al resultado dividirlo por 2
    area = (base * altura)/2;

    // Imprimo el resultado
    printf("El area del triangulo es de: %i", area);
    
   
    return 0;
}