#ifndef MOVIMIENTO_PIEZAS_H
#define MOVIMIENTO_PIEZAS_H

#include "Tablero.h"

class MovimientoPiezas {
public:
    static bool MoverPeon(Tablero& tablero, int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino) {
        // Implementa las reglas de movimiento para el peón aquí
        // ...
    }

    static bool MoverTorre(Tablero& tablero, int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino) {
        // Implementa las reglas de movimiento para la torre aquí
        // ...
    }

    static bool MoverCaballo(Tablero& tablero, int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino) {
        // Implementa las reglas de movimiento para el caballo aquí
        // ...
    }

    static bool MoverAlfil(Tablero& tablero, int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino) {
        // Implementa las reglas de movimiento para el alfil aquí
        // ...
    }

    static bool MoverReina(Tablero& tablero, int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino) {
        // Implementa las reglas de movimiento para la reina aquí
        // ...
    }

    static bool MoverRey(Tablero& tablero, int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino) {
        // Implementa las reglas de movimiento para el rey aquí
        // ...
    }
};

#endif // MOVIMIENTO_PIEZAS_H