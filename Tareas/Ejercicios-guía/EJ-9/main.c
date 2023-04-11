#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DADOS CIERTOS CENTIMETROS COMO ENTRADA DE TIPO DECIMAL, ESCRIBIR SU EQUIVALENTE A PIES (ENTEROS) Y PULGADAS (DECIMAL), DANDO LAS PULGADAS COMO UNA UNA PRECISION DE 1 LUGAR DE DECIMAL. CONSIDERAR 2.54 CM POR PULGADA Y 12 PULGADAS POR PIE. LA SALIDA PODRA SER: 333.3 CM SON 10 PIES Y 11.2 PULGADAS

    // Declaro mis varaibles
    float centimetro;
    float pulgada;
    float centimetro_a_pulgada;
    int centimetro_a_pie;
    int pie;

    // Le defino valores a las variables pulgada y pie
    pulgada = 2.54;
    pie = pulgada * 12;

    // Pido por consola ingresar un valor para guardar en la variable centimetro
    printf("Ingrese una cantidad de centimetros: ");
    scanf("%f", &centimetro);

    // Hago una evaluacion simple para que los centimetros ingresados sean mayores a cero por logica
    if (centimetro > 0)
    {
        // Hago las conversiones
        centimetro_a_pie = centimetro / pie;
        centimetro_a_pulgada = centimetro / pulgada;

        // Imprimo por consola el valor
        printf("%.1f cm son %i pies y %.1f pulgadas", centimetro, centimetro_a_pie, centimetro_a_pulgada);
    }
    else
    {
        printf("ERROR: ingrese una cantidad de centimetros permitida");
    }

    return 0;
}
