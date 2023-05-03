#include <stdio.h>

int main(int argc, char const *argv[])
{
    /**
        LA FECHA DE PASCUA CORRESPONDE AL PRIMER DOMINGO DESPUÉS DE LA PRIMERA LUNA LLENA QUE SIGUE EL EQUINOCCIO DE PRIMAVERA, Y SE CALCULA CON LAS SIGUIENTES EXPRESIONES:
            A = AÑO MOD 19
            B = AÑO MOD 4
            C = AÑO MOD 7
            D = (19*A + 24) MOD 30
            E = 2*B + 4*C + 6*D +5) MOD 7
            N = (22 + D + E)
        EN EL QUE N INDICA EL NÚMERO DEL DÍA DE MARZO (O ABRIL SI N > 31) CORRESPONDIENTE AL DOMINGO DE PASCUA.
        REALIZAR UN PROGRAMA QUE CALCULE ESA FECHA PARA LOS AÑOS 2018 Y 2019.
    */

    // Int declaro mis variables
    int anio;
    int a;
    int b;
    int c;
    int d;
    int e;
    int n;

    // Ingreso un anio
    printf("Ingrese un anio: ");
    scanf("%i", &anio);

    // Con ese anio ingresado realizo las operaciones de las expresiones
    a = anio%19;
    b = anio%4;
    c = anio%7;
    d = ((19*a) + 24)%30;
    e = (2*b + 4*c + 6*d +5) % 7;
    n = (22 + d + e);

    // Indico en que dia de abril o marzo cayo pascua dependiendo del resultado que obtengamos

    // Si n me da mayor a 31
    if (n <=31)
    {
        // La fecha de pascua es en marzo y escribo por pantalla el dia que cayo con el anio
        printf("El anio %i de pascua cayo el dia %i de marzo.", anio, n);
    } else {
        // Si es mayor a 31, la pascua en en abril y escribo por pantalla el dia que cayo con el anio
        // Como n es mayor a 31 (es decir 32 o mas) tengo que restarle 31. 
        printf("El anio %i de pascua cayo el dia %i de abril.", anio, n-31);
    }
    

    return 0;
}
