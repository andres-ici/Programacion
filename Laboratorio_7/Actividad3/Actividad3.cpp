#include <stdio.h>

int numero;

int main() {
	
	printf("Divisores de un numero\n\n");
	printf("Ingrese un numero entero: \n");
	scanf("%i", &numero);
	printf("\nLos divisores de %i son: \n\n", numero);
	
	for (int i = 1 ; i <= numero ; i ++) {
		
		if (numero % i == 0) {
			
			printf("%i\n", i);
			
			}
		
		}
	
	
	
	
	return 0;
	
	}
