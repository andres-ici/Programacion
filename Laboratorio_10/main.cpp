#include <stdio.h>
#include <stdlib.h>
#include "libGato.h"


char matriz[3][3];
int coordenadaX, coordenadaY, turno = 1;
bool ganador = false;

int main() {
	
	mensajeInicial();
	
	creacionMatrizTablero(matriz);

	mostrarTablero(matriz);
	
	do {
		
		if(turno % 2 == 1) {
			
			mostrarJugador('X', 1);
	
			mostrarCoordenadas();

			ingresarCoordenada(&coordenadaX, &coordenadaY, 'X', matriz);
		
			mostrarTablero(matriz);
			
			ganador = verificacionGanador(matriz, 'X');

			if (ganador) {

				break;

			}

			turno++;

			}

			if(turno % 2 == 0) {
				
				mostrarJugador('O', 2);
		
				mostrarCoordenadas();
			
				ingresarCoordenada(&coordenadaX, &coordenadaY, 'O', matriz);
		
				mostrarTablero(matriz);

				ganador = verificacionGanador(matriz, 'O');

				turno++;
				
		    }
			
	} while(!ganador);
	
	system("pause");

	return 0;

}




