#include <stdio.h>
#include "libGato.h"



void mensajeInicial(){

    printf("Juego Gato\n\n");
	
}

void mostrarCoordenadas(){

    printf("Coordenadas del tablero: \n\n");
	
	printf("[0,0] [0,1] [0,2]\n");
	printf("[1,0] [1,1] [1,2]\n");
	printf("[2,0] [2,1] [2,2]\n");

}

void mostrarTablero(char t[3][3]){

    printf("\nTablero: \n\n");

    for(int iy = 0; iy < 3; iy++) {
		
		for(int ix = 0; ix < 3; ix++){
			
			printf("[%c] ", t[ix][iy]);
			
			}
			
		printf("\n");
		
		}

}

void mostrarJugador(char j, int i){

	printf("\n\n");
	printf("jugador %i (%c): \n\n",i ,j);

}

bool verificacionGanador(char t[3][3], char le){

	if ((le == t[0][0] && t[0][0] == t[0][1] && t[0][1] == t[0][2]) ||
		(le == t[1][0] && t[1][0] == t[1][1] && t[1][1] == t[1][2]) ||
		(le == t[2][0] && t[2][0] == t[2][1] && t[2][1] == t[2][2]) ||
		(le == t[0][0] && t[0][0] == t[1][0] && t[1][0] == t[2][0]) ||
		(le == t[0][1] && t[0][1] == t[1][1] && t[1][1] == t[2][1]) ||
		(le == t[0][2] && t[0][2] == t[1][2] && t[1][2] == t[2][2]) ||
		(le == t[0][0] && t[0][0] == t[1][1] && t[1][1] == t[2][2]) ||
		(le == t[2][0] && t[2][0] == t[1][1] && t[1][1] == t[0][2]) 
		) {
					
			printf("\nEl jugador %c gano!!\n", le);
			
			return true;		

					} else {

						return false;

					}

}	

void creacionMatrizTablero(char m[3][3]){

	for(int iy = 0; iy < 3; iy++) { // creacion del tablero
		
		for(int ix = 0; ix < 3; ix++){
			
			m[ix][iy] = '-';
			
			}
		}

}

void ingresarJugada(int* coordenadaX, int* coordenadaY){

	printf("\nIngrese coordenada de la forma fila , columna: \n");
	scanf("%i , %i", coordenadaY, coordenadaX);

}

void ingresarCoordenada(int* coordenadaX, int* coordenadaY, char a, char m[3][3]){

	do {
			
		ingresarJugada(coordenadaX, coordenadaY);
				
		if (m[*coordenadaX][*coordenadaY] != '-') {
					
			printf("\nCoordenada no valida\n");
					
		}
				
	} while(m[*coordenadaX][*coordenadaY] != '-');
						
	m[*coordenadaX][*coordenadaY] = a; 

}