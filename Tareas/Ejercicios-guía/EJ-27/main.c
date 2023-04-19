#include <stdio.h>

int main(int argc, char const *argv[])
{
    // INGRESAR POR TECLADO 3 NÚMEROS CORRESPONDIENTES A LOS LADOS DE UN TRIÁNGULO. TENIENDO EN CUENTA QUE LA SUMA DE LOS DOS LADOS MENORES TIENE QUE SER SUPERIOR AL LADO MAYOR PARA QUE FORMEN UN TRIÁNGULO, INDICAR SI LOS NÚMEROS INDICADOS FORMAN UN TRIÁNGULO Y SI LO FORMAN QUE TIPO DE TRIANGULO ES (SEGÚN SUS LADOS).

    float L1;
    float L2;
    float L3;

    // Ingreso los lados de cada triangulo

    printf("Ingrese el primer lado del triangulo: ");
    scanf("%f", &L1);

    printf("Ingrese el segundo lado del triangulo: ");
    scanf(" %f", &L2);

    printf("Ingrese el tercer lado del triangulo: ");
    scanf(" %f", &L3);

    /*
        Para que sea un triangulo, la suma de sus dos lados tiene quer ser mayor al tercer lado superior

    */

    if (((L1 + L2) > L3) && ((L1 + L3) > L2) && ((L2 + L3) > L1))
    {
        /*
            Si se forma un triangulo cumplienado alguna de las condiciones ahora debo determinar que tipo de triangulo es
            EQUILATERO --> todos sus lados son iguales L1 = L2 = L3
            ISOSCELES --> dos de sus lados son iguales L1 = L2, L2 = L3, L1 = L3
            ESCALENO --> todos sus lados son diferentes L1 != L2 != L3
        */

       if (L1 == L2 && L3 == L1)
       {
        printf("Es un triangulo equilatero");
       } else if ((L1 == L2) || (L2 == L3) || (L1 == L3))
       {
        printf("Es un triangulo isosceles");
       } else {
        printf("Es un triangulo escaleno");
       }
    
    }
    else
    {
        printf("No forman un triangulo");
    }

    return 0;
}
