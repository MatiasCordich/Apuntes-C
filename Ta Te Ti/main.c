#include <stdio.h>

// Imprimir tablero
void imprimirTablero(char tablero[3][3])
{
    printf("  0 1 2\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", i);
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }
}

// Verificar si hay un ganador
int verificarGanador(char tablero[3][3], char jugador)
{

    // Verifico filas y columnas
    for (int i = 0; i < 3; i++)
    {
        // Verifico si todas las celdas de una fila o columna son del mismo jugador
        if ((tablero[i][0] == jugador && tablero[i][1] == jugador && tablero[i][2] == jugador) || (tablero[0][i] == jugador && tablero[1][i] == jugador && tablero[2][i] == jugador))
        {
            return 1; // Hay un ganador
        }
    }

    // Verifico diagonales
    // Verificar si todas las celdas en la diagonal principal son del mismo jugador
    if ((tablero[0][0] == jugador && tablero[1][1] == jugador && tablero[2][2] == jugador) ||
        // Verificar si todas las celdas en la diagonal opuesta son del mismo jugador
        (tablero[0][2] == jugador && tablero[1][1] == jugador && tablero[2][0] == jugador))
    {
        return 1; // Hay un ganador
    }

    return 0; // No hay ganador aun
}

// Función para realizar un movimiento
void realizarMovimiento(char tablero[3][3], int fila, int columna, char jugador) {
    tablero[fila][columna] = jugador;
}

// Validar eleccion del simbolo
char validarEleccion(){

    char eleccion;
    int entrada_valida;

    do
    {
        // Mostramos las opciones
        printf("Por favor, elige X o O en base al numero correspondiente: \n");
        printf("(1) X\n");
        printf("(2) O\n");
        printf("Opcion elegida: ");

        // Leemos lo que ingresamos por teclado
        entrada_valida = scanf(" %c", &eleccion);

        // Verificamos si la entrada no es un caracter o si no es 1 ni 2
        if (entrada_valida != 1 || (eleccion != '1' && eleccion != '2') )
        {
            // Si es asi, mostramos mensaje de error
            printf("ERROR, OPCION INVALIDA, ELIGE 1 PARA 'X' o 2 PARA 'O'.\n");

            // Limpiar el búfer del teclado en caso de entrada no válida
            while (getchar() != '\n');
        } else {
            break; // Si la eleccion es valida salimos del bucle
        }
        
    } while (1);

    return (eleccion == '1') ? 'X' : 'O';
    
    
}

int main()
{
    char tablero[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int fila, columna;
    char jugador_1, jugador_2;
    char jugador_actual;
    int movimientos = 0;


    // Validar la eleccion del Jugador 1
    printf("Jugador 1, elige ser:\n");
    jugador_1 = validarEleccion();

    // Le asigno el simbolo restante al Jugador 2
    jugador_2 = (jugador_1 == 'X') ? 'O' : 'X';

    // Inicializamos al primer jugador
    jugador_actual = jugador_1;

    while (1)
    {
        imprimirTablero(tablero);

        printf("Turno del jugador %c. Ingrese fila y columna: ", jugador_actual);
        scanf("%d %d", &fila, &columna);

        if (tablero[fila][columna] != ' ')
        {
            printf("---------------------------------");
            printf("CASILLA OCUPADA, INTENTELO DE NEUVO");
            printf("---------------------------------");
            continue;
        }

        realizarMovimiento(tablero, fila, columna, jugador_actual);
        movimientos++;

        
        if (verificarGanador(tablero, jugador_actual)) {
            imprimirTablero(tablero);
            printf("¡El jugador %c ha ganado!\n", jugador_actual);
            break;
        } else if (movimientos == 9) {
            imprimirTablero(tablero);
            printf("¡Es un empate!\n");
            break;
        }

        // Cambiar al siguiente jugador
        jugador_actual = (jugador_actual == jugador_1) ? jugador_2 : jugador_1;
        
    }
    


    
    return 0;
}
