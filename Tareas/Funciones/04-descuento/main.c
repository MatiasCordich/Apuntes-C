#include <stdio.h>

/*
    Declaro mi estructura de neto_pagar que tiene lo siguiente 
    - importe
    - porcentaje_descuento
    - neto
*/
typedef struct
{
    double importe;
    double porcentaje_descuento;
    double neto;
} s_neto_pagar;

/*
    Declaro funcion que me calcule el neto a pagar con los siguientes datos
    - es una funcion que me devuelve un double
    - recibe la IMPORTE que es de tipo double
    - recibe la PORCENTAJE DESCUENTO que es de tipo double
    - retorna un NETO A PAGAR que es de tipo double
*/
double calculo_neto (double importe, double porcentaje) {
    double bruto = importe;
    double descuento = bruto * (porcentaje/100);
    double neto = bruto - descuento;
    return neto;
}

int main(int argc, char const *argv[])
{
    // Creo mi variable importe_a_pagar en base a mi estructura s_neto_pagar
    s_neto_pagar importe_a_pagar;

    // Ingreso los valores internos de importe_a_pagar
    printf("Ingrese el importe bruto: ");
    scanf("%lf", &importe_a_pagar.importe);

    printf("Ingrese el porcentaje de descuento: ");
    scanf("%lf", &importe_a_pagar.porcentaje_descuento);

    // Calculo el importe neto a pagar con la fucnion para calcular el neto con el porcentaje de descuento
    importe_a_pagar.neto = calculo_neto(importe_a_pagar.importe, importe_a_pagar.porcentaje_descuento);

    // Imprimo por pantalla el resultado del importe neto a pegar 
    printf("Importe bruto: $%.1lf\n", importe_a_pagar.importe);
    printf("Importe neto: $%.1lf\n", importe_a_pagar.neto);

    return 0;
}
