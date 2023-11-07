#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Las criaturas magicas que te podes encontrar
char *criaturas_magicas[] = {
    "duende", "bruja", "hada", "hechicero", "dragón", "unicornio"};

// Los mensajes de cada criatura magica
char *mensajes_criaturas[] = {
    "¡Un duende apareció y te lanzó un hechizo!",
    "Te encontraste una bruja y te golpeó con la escoba",
    "Te encontraste con un hada que te concede un deseo, pero ¡cuidado!",
    "Un hechicero te desafía a un juego de adivinanzas",
    "Un dragón bloquea tu camino, ¿Qué harás?, ten cuidado de no quemarte.",
    "Un majestuoso unicornio aparece y te ofrece su ayuda."};

// Lista de objetos que el jugador puede encontrar
char *objetos[] = {"poción mágica", "mapa del tesoro", "un libro", "antorcha", "espada afilada", "espada mata dragones", "alfombra mágica", "poción multijugos", "baculo magico", "armadura", "casco", "poción restauradora", "llave", "arco y flecha", "gnomo", "amuleto", "doblones de oro", "galeones", "La amiga de Valeria", "lanza"};

// Vamos a crear la mochila, para eso vamos a crear una lista enlazada que consta de los siguientes pasos

// Las listas enlazadas tienen Nodos, para eso voy a crear primero creo la estructura Nodo

struct Nodo
{
    // Va a apuntar a objeto
    char *objeto;
    struct Nodo *next;
};

// Esta funcion va a darle existencia a la mochila

struct Nodo *crearMochila()
{
    struct Nodo *mochila = NULL;
    return mochila;
}

// Funcion para agregar un objeot a la mochila

void agregarObjeto(struct Nodo **mochila, char *objeto)
{
    struct Nodo *nuevoObjeto = (struct Nodo *)malloc(sizeof(struct Nodo));
    nuevoObjeto->objeto = objeto;
    nuevoObjeto->next = *mochila;
    *mochila = nuevoObjeto;
}

void comenzarJuego(){

    // Incializamos el generador de numeros aleatorios

    srand(time(NULL));

    // Definimos los niveles
    int nivel = 1;
    int nivelesTotales = rand() % 8 + 3;

    // Mensajes de inicio del juego
    printf("\n");
    printf("Bienvenide a la aventura en el bosque oscuro\n");
    printf("Estás en la entrada del bosque. Debes tomar decisiones para avanzar.\n");

    // Vamos a jugar hasta llegar al nivel final, para eso vamos a hacer un bucle 

    while (nivel <= nivelesTotales)
    {
        printf("Nivel %i de %i\n", nivel, nivelesTotales);
        char eleccion;
        printf("¿Qué camino vas a tomar?, ¿izquierda o derecha?: ");
        scanf("%s", eleccion);
        fflush(stdin);
    }
    
}

int main(int argc, char const *argv[])
{

    return 0;
}
