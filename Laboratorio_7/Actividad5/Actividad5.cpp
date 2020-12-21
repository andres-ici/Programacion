#include <stdio.h>

int entradaNum, sumatoria = 0;

int main() {
	
	printf("Sumatoria de numeros positivos\n\n");
	
	
	do {
		printf("Ingrese un numero entero: \n");
		scanf("%i",&entradaNum);
		
		sumatoria = entradaNum + sumatoria;
		
		} while (entradaNum > 0);
	
	printf("La sumatoria de todos los numeros ingresados es: %i", sumatoria);
	
	
	
	return 0;
	
	}
