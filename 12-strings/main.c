#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string1[] = "Matias";
    char string2[] = "Cordich";

    strlwr(string1);    // convierte todas las letras del string en minustuclas

    strupr(string1);    // convierte todas la letras del string en mayusculas    

    strcat(string1, string2);   // concatena el string2 al final del string1

    strncat(string1, string2, 1);// concatena n caracteres desde el string2 al string1

    strcpy(string1, string2);   // copia el string2 al string1

    strncpy(string1, string2, 2);   // copia n carecteres del string2 al string1

    strset(string1, '?');   //setea todos las caracteres del string al caracter dado
    strnset(string1, 'x', 1);   //setea los primeros n caracteres del string en el formato del caracter dado
    
    strrev(string1);    // da vuelta el string

    int result = strlen(string1);   // me devuelve la longituad del string en un numero de tipo int 

    int result = strcmp(string1, string2);  // compara los caracteres de ambos strings

    int result = strncmp(string1, string2, 1);  // compara n caracteres de ambos strings

    int result = strcmpi(string1, string1); // compara todo los caracteres

    int result = strnicmp(string1, string1, 1);     // compara n caracteres de los strings

    printf("%s", string1);

    if(result == 0)
    {
       printf("Son lo mismo");
    }
    else
    {
       printf("No son lo mismo");
    }
    
    return 0;
}
