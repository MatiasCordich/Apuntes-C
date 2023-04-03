#include <stdio.h>

int main(int argc, char const *argv[])
{
    // INGRESAR EL PRECIO, STOCK Y COSTO Y CON ESOS VALORES DETERMINAR LA GANANCIA UNITARIA, COSTO TOTAL y GANANCIA TOTAL

    // Determino las variables 
    int precio;
    int stock;
    int costo;
    int gananciaUnitaria;
    int costoTotal;
    int gananciaTotal;

    // Ingreso por teclado los valores de cada variable que se van a ir almacenando en cada una
    printf("Ingrese el precio: ");
    scanf("%i", &precio);
    printf("Ingrese costo: ");
    scanf("%i", &costo);
    printf("Ingrese el stock: ");
    scanf("%i", &stock);

    // Una vez ingresado los valores de las variables precio, costo y stock determinar lo que se pide mediante operaciones artimeticas
    gananciaUnitaria = precio - costo;
    costoTotal = stock * costo;
    gananciaTotal = gananciaUnitaria * stock;

    // Muestro por pantalla los resultados
    printf("La ganacia unitaria es de: %i\n", gananciaUnitaria);
    printf("El costo total es de: %i\n", costoTotal);
    printf("La ganacia total es de: %i\n", gananciaTotal);
    return 0;
}
