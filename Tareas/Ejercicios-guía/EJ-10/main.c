#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ESCRIBIR EN PSEUDOCODIGO Y CODIFICAR EN C UN PROGRAMA QUE LEA 20 CARACTERES, LUEGO DE LA LECTURA INDICAR CUANTAS "A" SE INGRESARON Y CUANTAS "E, I , O , U"

    // Declaro mis varaibles
    
    char caracter;
    int cont_a;
    int cont_e;
    int cont_i;
    int cont_o;
    int cont_u;
    int i;

    // Tiene que leer 20 caracteres por lo que uso un FOR para leer 20 veces una letra que escriba por teclado
    for (i = 0; i < 20; i++)
    {
        // Pido la letra por consola y guardo ese valor en la variable caracter
        printf("Ingrese una letra: ");
        scanf("%c", &caracter);

        // Evaluo si el valor de la variable caracter entra en alguna de estas condiciones
        if (caracter == 'a' || caracter == 'A')
        {
            cont_a = cont_a + 1;
        } else if (caracter == 'e' || caracter == 'E'){
            cont_e = cont_e + 1;
        } else if (caracter == 'i' || caracter == 'I'){
            cont_i = cont_i + 1;
        }else if (caracter == 'o' || caracter == 'O'){
            cont_o = cont_o + 1;
        }else if (caracter == 'u' || caracter == 'U'){
            cont_u = cont_u + 1;
        }
        
    }

    // Escribo el resultado final
    printf("De 20 letras ingresaste %i letras a\n", cont_a);
    printf("De 20 letras ingresaste %i letras e\n", cont_e);
    printf("De 20 letras ingresaste %i letras i\n", cont_i);
    printf("De 20 letras ingresaste %i letras o\n", cont_o);
    printf("De 20 letras ingresaste %i letras u\n", cont_u);
    
    return 0;
}
