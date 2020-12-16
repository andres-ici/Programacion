#include <stdio.h>

int destino, edad;

int main () {
	
	printf("Venta de pasajes\n\n");
	printf("Ingrese numero de destino: \n");
	scanf("%i", &destino);
	printf("Ingrese su edad: \n");
	scanf("%i", &edad);
	
	if (destino == 1) {
		
		if (edad < 15) {
			
			printf("El valor a pagar por su viaje es: $2500\n");
			
			} else if ( edad <= 65) {
				
				printf("El valor a pagar por su viaje es: $4200\n");
				
				} else {
					
					printf("El valor a pagar por su viaje es: $3000\n");
					
					} 
		
		
		} else if (destino == 2) {
			
			if (edad < 15) {
			
				printf("El valor a pagar por su viaje es: $1200\n");
			
				} else if ( edad <= 65) {
				
						printf("El valor a pagar por su viaje es: $3000\n");
				
						} else {
					
							printf("El valor a pagar por su viaje es: $2000\n");
					
							} 
			
			} else if (destino == 3) {
				
				if (edad < 15) {
			
					printf("El valor a pagar por su viaje es: $2000\n");
			
					} else if ( edad <= 65) {
				
						printf("El valor a pagar por su viaje es: $3800\n");
				
						} else {
					
							printf("El valor a pagar por su viaje es: $2500\n");
					
							} 
				
				}else {
					
					printf("Destino ingresado no valido");
					
					}
	
	
	return 0;
	}
