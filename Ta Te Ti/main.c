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

int main()
{
    printf("Hola mundo");
    return 0;
}
