#include <stdio.h>

// Esta libreria me permite utilizar valores booleanos

#include <stdbool.h>

int main(int argc, char const *argv[])
{
    char a = 'C';        // Caracter unico --- %c
    char b[] = "Matias"; // Array de caracteres --- %s

    float c = 3.141592;           // Numero decimal flotante, 6 - 7 digitos --- %f
    double d = 3.141592653589793; // Numero decimal flotante, 15 - 16 digitos --- %lf

    bool e = true; // Valor tipo booleano, solo devuelve dos valores, si es true devuelve 1, si es false devuelve 0 --- %d

    char f = 100;          // Podemos guardar numeros enteros en char pero desde el -128 hasta el +127, y toma los formatos de especifiacion de %d (si lo quiero mostrar como un valor numerico) o %c (si lo quiero mostrar como un unico caracter)
    unsigned char g = 255; // Al utilizar la palabra reservada 'unsigned' dejamos de lado los numeros negativos, solo guarda numeros enteros que van desde el 0 hasta el +255 y toma tambien lso formatos %d y %c

    short int h = 32767; // Valor numerico de tipo entero donde almacena valores desde -32.768 hasta +32.767 ---  %d
    unsigned short int i = 65535; // Valor numerico de tipo entero que almacena el doble pero solamente positivos (0 al +65.535) --- %d

    int j = 2147483647; // Valor numerico de tipo entero donde puede almacenar valores numericos que van desde -2.147.483.648 hasta +2.147.483.647 --- %d
    unsigned int k = 4294967295; // Valor numerico de tipo entero que puede almacenar el doble de los valores del int pero solo positivos, almacena desde el 0 hasta el +4.294.967.295 --- %u

    long long int l = 9223372036854775807; // Valor numerico de tipo entero que acepta valores grandes que van desde el -9 quintillon hasta el +9 quintillon --- %lld
    unsigned long long int m = 18446744073709551615U; // Valor numerico de tipo entero que acepta valores grandes que duplican el valor del long long int pero que solo acepta postivos, va desde el 0 hata el +18 quintillon --- %llu

    printf("%c\n", a);
    printf("%s\n", b);
    printf("%f\n", c);
    printf("%lf\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
    printf("%c\n", f);
    printf("%d\n", g);
    printf("%c\n", g);
    printf("%d\n", h);
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%u\n", k);
    printf("%lld\n", l);
    printf("%llu\n", m);

    return 0;
}
