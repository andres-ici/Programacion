#include <stdio.h>

char matriz[3][3];
int coordenadaX, coordenadaY, turno = 1;
bool ganador = false;


void mensajeInicial();
void mostrarTablero(char t[3][3]); //matriz del tablero
void mostrarCoordenadas();
void mostrarJugador(char j, int i);
int ingresarX();
int ingresarY();
bool verificacionGanador(char t[3][3], char le);



int main() {
	
	mensajeInicial();
	
	for(int iy = 0; iy < 3; iy++) { // creacion del tablero
		
		for(int ix = 0; ix < 3; ix++){
			
			matriz[ix][iy] = '-';
			
			}
		}

	mostrarTablero(matriz);
	
	do {
		
		if(turno % 2 == 1) {
			
			mostrarJugador('X', 1);
	
			mostrarCoordenadas();

			do {
			
				coordenadaY = ingresarX();
				coordenadaX = ingresarY();
				
				if (matriz[coordenadaX][coordenadaY] != '-') {
					
					printf("\nCoordenada no valida\n");
					
					}
				
				} while(matriz[coordenadaX][coordenadaY] != '-');
						
			
			matriz[coordenadaX][coordenadaY] = 'X'; 
		
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
			
				do {
		
					coordenadaY = ingresarX();
					coordenadaX = ingresarY();
					
					if (matriz[coordenadaX][coordenadaY] != '-') {
						
						printf("\nCoordenada no valida\n");
						
						}
					
					} while(matriz[coordenadaX][coordenadaY] != '-');
				
				matriz[coordenadaX][coordenadaY] = 'O'; 
		
				mostrarTablero(matriz);

				ganador = verificacionGanador(matriz, 'O');

				turno++;
				
				
				
			}
			
	} while(!ganador);
	
	return 0;

	}

void mensajeInicial(){

    printf("Juego Gato\n\n");
	
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

void mostrarCoordenadas(){

    printf("Coordenadas del tablero: \n\n");
	
	printf("[0,0] [0,1] [0,2]\n");
	printf("[1,0] [1,1] [1,2]\n");
	printf("[2,0] [2,1] [2,2]\n");

}

void mostrarJugador(char j, int i){

	printf("\n\n");
	printf("jugador %i (%c): \n\n",i ,j);

}

int ingresarX(){

	int a;
	printf("\nIngrese fila: \n");
	scanf("%i", &a);
	return a;

}

int ingresarY(){

	int a;
	printf("\nIngrese Columna: \n");
	scanf("%i", &a);
	return a;

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

