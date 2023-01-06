#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Elige un numero del 1 al 7: ");

    scanf("%d", &num);

    // El switch es para evaluar multiples condiciones, cada condicion se evalua como un 'caso' (case), el valor a evaluar entra en cada caso, si se cumple, se ejecuta el codigo, una vez ejecutado el switch se corta con un "break". Caso contrario, se sigue evaluando en los demas casos.


    switch (num) // La variable a evaluar es la variable num
    {
    case 1: // Cada condicion es como un 'caso', en este caso es el 1

        // Si el valor de la variable coincide con el caso, enteonces se ejecuta el codigo 

        printf("Es Lunes");

        // Una vez terminado de ejecutar el codigo se utiliza un 'break' para cortar con el switch

        break
        ;
    case 2:
        printf("Es Martes");
        break;
    case 3:
        printf("Es Miercoles");
        break;
    case 4:
        printf("Es Jueves");
        break;
    case 5:
        printf("Es Viernes");
        break;
    case 6:
        printf("Es Sabado");
        break;
    case 7:
        printf("Es Domingo");
        break;
    default: 

        // El default es la ultima condicion a evaluar, cuando el valor paso por todos los casos y no hubo correlacion, entre al ultimo caso por default.
        
        printf("Elegiste un numero incorrecto");
        break;
    }

    return 0;
}
