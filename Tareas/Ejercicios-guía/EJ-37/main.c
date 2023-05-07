#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
        DEL REGISTRO DE PARTES METEOROLÓGICO POR CADA DÍA SE REGISTRA LA FECHA, TEMPERATURA MÁXIMA Y TEMPERATURA MÍNIMA. DISEÑAR EN PSEUDOCODIGO UN ALGORITMO QUE PERMITA INFORMAR:
            - EL DÍA MAS FRIO Y CUAL FUE ESA TEMPERATURA.
            - EL DÍA MÁS CÁLIDO Y CUAL FUE ESA TEMPERATURA
    */

    int i;
    char dia;
    char dia_mas_frio;
    char dia_mas_calido;
    float temperatura_maxima;
    float temperatura_minima;
    float temp_mas_fria;
    float temp_mas_calida;

    for (i = 0; i < 7; i++)
    {
        printf("Ingrese el dia: ");
        scanf(" %c", &dia);
        printf("Ingrese la temperatura MAXIMA de ese dia: ");
        scanf(" %f", &temperatura_maxima);
        printf("Ingrese la temperatura MINIMA de ese dia: ");
        scanf(" %f", &temperatura_minima);

        if (i == 0)
        {
            temp_mas_fria = temperatura_minima;
            temp_mas_calida = temperatura_maxima;
            dia_mas_calido = dia;
            dia_mas_frio = dia;
        }
        else
        {
            if (temperatura_maxima > temp_mas_calida)
            {
                temp_mas_calida = temperatura_maxima;
                dia_mas_calido = dia;
            }

            if (temperatura_minima < temp_mas_fria)
            {
                temp_mas_fria = temperatura_minima;
                dia_mas_frio = dia;
            }
        }
    }

    printf("----- REPORTE -----\n");
    printf("----- DIA MAS FRIO -----\n");
    printf("DIA: %c\n", dia_mas_frio);
    printf("TEMPERATURA: %.2f\n", temp_mas_fria);
    printf("----- DIA MAS CALIDO -----\n");
    printf("DIA: %c\n", dia_mas_calido);
    printf("TEMPERATURA: %.2f\n", temp_mas_calida);
    printf("------------------\n");



    return 0;
}
