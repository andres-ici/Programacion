#include <stdio.h>

int numeroLimite, contador = 0;

int main() {
	
	printf("Numeros primos \n\n");
	printf("Ingrese un numero entero: \n");
	scanf("%i", &numeroLimite);
	printf("Todos los numeros primos entre 1 a %i son: \n\n", numeroLimite);
	
	for (int i = 1 ; i <= numeroLimite ; i ++ ) {
		
		
		for (int i2 = 1 ; i2 <= i ; i2 ++) {
			
			if (i % i2 == 0) {
				
				contador = contador + 1;
				
				}
			
			}
			
		if (contador == 2) {
			
			printf("%i\n", i);
			contador = 0;
			
			} else {
				
				contador = 0;
				
				}
		
		}
	
	
	
	
	
	
	
	return 0;
	
	}
