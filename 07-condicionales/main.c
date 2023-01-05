#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Pongamos como ejemplo un programa donde tenemos que ingresar la edad

    int age;

    printf("Ingrese su edad: ");
    scanf("%d", &age);

    // Dependiendo del numero que ingresemos queremos determinar si la persona es mayor de edad, si es menor de edad, o si el numero ingresado es una edad valida. Todo esto gracias a las multiples condiciones con el else if()

    if (age >= 18){

        // Primera condicion, se empieza con la sentencia if(), si se cumple la condicion se queda ahi y ejecuta el codigo, si no se cumple salta a la siguiente condicion

        printf("Sos mayor de edad, puedes tener una tarjeta");
    }
    else if (age < 0){

        // Segunda condicion para tener mas de dos condiciones debemos utlilzar el else if(), si la condicion se cumlple, se ejecuta el codigo, de lo contrario se va a la siguiente condicion

        printf("No es una edad valida");
    }
    else{

        // Tercera y ultima condicion, siempre la ultima condicion se utiliza el else, no hace falta agregar condiciones ya que la variable a evaluar ya fue filtrada por las otas condiciones, si se cumple, se ejecuta este codigo. 
        
        printf("Eres menor de edad, necesitas permiso de tus padres");
    }

    return 0;
}
