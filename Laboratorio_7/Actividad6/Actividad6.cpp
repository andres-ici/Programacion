#include <stdio.h>\

int numero1 = 0 , numero2 = 1 , cantidad, suma;

int main() {
	
	printf("Sucesion de Fibonacci \n\n");
	
	printf("Ingrese un numero entero mayor a 2: \n");
	scanf("%i", &cantidad);
	
	printf("\nLos primeros %i numeros de la sumatoria de Fibonacci son: \n\n", cantidad);
	printf("0\n");
	printf("1\n");
	
	for(int i = 3 ; i <= cantidad ; i ++) {
		
		suma = numero1 + numero2;
		
		printf("%i\n", suma);
		
		numero1 = numero2;
		numero2 = suma;
		
		}
	
	
	return 0;
	
	}
