#include <iostream>
#include "Tablero.h"
using namespace std;
int main() {
    Tablero tablero;
    

    tablero.SetPieza(0, 0, TORRE);
    tablero.SetPieza(0, 7, TORRE);
    tablero.SetPieza(7, 0, TORRE);
    tablero.SetPieza(7, 7, TORRE);
    tablero.SetPieza(0, 1, CABALLO);
    tablero.SetPieza(0, 6, CABALLO);
    tablero.SetPieza(7, 1, CABALLO);
    tablero.SetPieza(7, 6, CABALLO);
    tablero.SetPieza(0, 2, ALFIL);
    tablero.SetPieza(0, 5, ALFIL);
    tablero.SetPieza(7, 2, ALFIL);
    tablero.SetPieza(7, 5, ALFIL);
    tablero.SetPieza(0, 3, REY);
    tablero.SetPieza(0, 4, REINA);
    tablero.SetPieza(7, 4, REY);
    tablero.SetPieza(7, 3, REINA);


    for (int i = 0; i < TAMANIO_TABLERO; i++) {
        tablero.SetPieza(1, i, PEON);
        tablero.SetPieza(6, i, PEON);
    }
    tablero.MostrarTablero();
     while (true) {
        if (tablero.EsTurnoBlancas()) {
            cout << "Turno de las blancas." << endl;
            tablero.CambiarTurno();
        } 
        else {
            cout << "Turno de las negras." << endl;
            tablero.CambiarTurno();
        }

        int filaOrigen, columnaOrigen, filaDestino, columnaDestino;
        cout << "Ingrese fila y columna de origen (ejemplo: 0 0): ";
        cin >> filaOrigen >> columnaOrigen;

        cout << "Ingrese fila y columna de destino (ejemplo: 3 3): ";
        cin >> filaDestino >> columnaDestino;


        tablero.MoverPieza(filaOrigen, columnaOrigen, filaDestino, columnaDestino);

        cout << "\nTablero después del movimiento:" << endl;
        tablero.MostrarTablero();

    }

    return 0;
}