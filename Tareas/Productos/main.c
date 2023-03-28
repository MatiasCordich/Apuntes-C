#include <stdio.h>

int main(int argc, char const *argv[])
{
    int precio;
    int stock;
    int costo;

    printf("Ingrese el precio: ");
    scanf("%i", &precio);
    printf("Ingrese costo: ");
    scanf("%i", &costo);
    printf("Ingrese el stock: ");
    scanf("%i", &stock);


    int gananciaUnitaria = precio - costo;
    int costoTotal = stock * costo;
    int gananciaTotal = gananciaUnitaria * stock;

    printf("La ganacia unitaria es de: %i\n", gananciaUnitaria);
    printf("El costo total es de: %i\n", costoTotal);
    printf("La ganacia total es de: %i\n", gananciaTotal);
    return 0;
}
