#ifndef TABLERO_H
#define TABLERO_H

#include <iostream>

enum Pieza {
    VACIO,
    PEON,
    TORRE,
    CABALLO,
    ALFIL,
    REINA,
    REY
};

const int TAMANIO_TABLERO = 8;

class Tablero {
public:
    Tablero() {
        InicializarTablero();
    }

    void InicializarTablero() {
        turnoBlancas = true;
        for (int fila = 0; fila < TAMANIO_TABLERO; fila++) {
            for (int columna = 0; columna < TAMANIO_TABLERO; columna++) {
                tablero[fila][columna] = VACIO;
            }
        }
    }

    void SetPieza(int fila, int columna, Pieza pieza) {
        tablero[fila][columna] = pieza;
    }

    void MoverPieza(int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino) {
        tablero[filaDestino][columnaDestino] = tablero[filaOrigen][columnaOrigen];
        tablero[filaOrigen][columnaOrigen] = VACIO;
        
    }


    void MostrarTablero() {
        char caracteresPiezas[] = ".PTCARK"; 

        for (int fila = 0; fila < TAMANIO_TABLERO; fila++) {
            for (int columna = 0; columna < TAMANIO_TABLERO; columna++) {
                std::cout << caracteresPiezas[tablero[fila][columna]] << ' ';
            }
            std::cout << std::endl;
        }
    }
    bool EsTurnoBlancas() {
        return turnoBlancas;
    }

    void CambiarTurno() {
        turnoBlancas = !turnoBlancas; 
    }

private:
    Pieza tablero[TAMANIO_TABLERO][TAMANIO_TABLERO];
    bool turnoBlancas;
};
#endif 