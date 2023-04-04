#include <stdio.h>

int main(int argc, char const *argv[])
{
    // INGRESAR EL PRECIO, STOCK Y COSTO Y CON ESOS VALORES DETERMINAR LA GANANCIA UNITARIA, COSTO TOTAL y GANANCIA TOTAL

    // Determino las variables 
    int precio_unitario;
    int stock;
    int costo_unitario;
    int ganacia_unitaria;
    int costo_total;
    int ganancia_total;

    // Ingreso por teclado los valores de cada variable que se van a ir almacenando en cada una
    printf("Ingrese el precio: ");
    scanf("%i", &precio_unitario);
    printf("Ingrese costo: ");
    scanf("%i", &costo_unitario);
    printf("Ingrese el stock: ");
    scanf("%i", &stock);

    // Una vez ingresado los valores de las variables precio, costo y stock determinar lo que se pide mediante operaciones artimeticas
    ganacia_unitaria = precio_unitario - costo_unitario;
    costo_total = stock * costo_unitario;
    ganancia_total = ganacia_unitaria * stock;

    // Muestro por pantalla los resultados
    printf("La ganacia unitaria es de: %i\n", ganacia_unitaria);
    printf("El costo total es de: %i\n", costo_total);
    printf("La ganacia total es de: %i\n", ganancia_total);
    return 0;
}
