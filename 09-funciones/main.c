#include <stdio.h>

// Las funciones son bloques de codigo agrupados y que podemos llamar dicha funcion en la funcion principal (main) y podemos ejecutar ese bloque de codigo cuantas veces queramos. La estrucutra de la funcion es la siguiete

void saludo(){
    printf("Hola a todos\n");
}

// Argumenos en una funcion

// Los argumentos en una funcion son los valores que le vamos a pasar a una funcion con el fin de poder utilizarlos en el bloque de codigo, cada argumento tiene que ir con el tipo de dato especificado. 

void saludoCompleto (char name[], int age){
    printf("Hola %s\n", name);
    printf("Tu edad es de %d años\n", age);
}


int main(int argc, char const *argv[])
{
    
    // Llamamos a la funcion en la funcion principal

    saludo();

    // Podemos llamar a la funcion la cantidad de veces que queramos 

    saludo();
    saludo();

    // Supongamos que tenemos las siguiente variables

    char name[] = "Matias";
    int edad = 26;

    saludoCompleto(name, edad);

    return 0;
}
