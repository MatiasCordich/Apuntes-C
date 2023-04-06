#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ESCRIBIR EL ALGORITMO QUE PERMITA LEER UN NUMERO DECIMAL QUE REPRESENTA UNA CANTIDAD DE GRADOS CELSIUS Y CONVIERTA DHICHO VALOR A LA CANTIDAD EQUIVALENTE A GRADOS FAHRENHEIT. LA SALIDA DEL PROGRAMA DEBE TOMAR LA SIGUIENTE FORMA: 100 GRADOS CELSIUS SON 212 GRADOS FAHRENHEIT.

    int celsius;
    float fahrenheit;
    
    // Ingreso un valor numerico que sera guardado en la variable celsius
    printf("Ingrese los grados celsius: ");
    scanf("%i", &celsius);

    // Con el valor de la variable celsius calculo los grados fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Imprimo por pantalla la conversion de celcius a fahrenheit
    printf("%i grados celsius son %f grados fahrenheit", celsius, fahrenheit);
    

    return 0;
}
