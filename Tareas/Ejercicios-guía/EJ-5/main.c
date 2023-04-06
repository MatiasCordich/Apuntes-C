#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DISEÑAR UN ALGORITMO QUE CALCULE LA SUPERFICIE DE UN TRIANGULO A PARTIR DEL INGRESO DE SU BASE Y ALTURA. DEBE MOSTRAR EL RESULTADO 

    int base;
    int altura;
    int area_triangulo;

    // Ingreso la base que es un numero 
    printf("Ingrese la base: ");
    scanf("%i", &base);

    // Ingreso la altura que es un numero
    printf("Ingrese la altura: ");
    scanf("%i", &altura);

    // Con la base y altura sacados caluclo el area de un triangulo
    area_triangulo = (base * altura)/ 2;

    // Imprimo por pantalla el area de un triangulo
    printf("El area del triangulo es de %i cms", area_triangulo);
    return 0;
}
