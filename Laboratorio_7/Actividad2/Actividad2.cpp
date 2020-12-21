#include <stdio.h>

int numero1 , numero2, contador = 0;

int main() {
	
	printf("Multiplicacion \n\n");
	
	printf("Ingrese dos numeros enteros de la forma X , Y \n\n");
	
	scanf("%i , %i", &numero1, &numero2);
	
	for (int i = 0 ; i < numero1 ; i ++ ) {
		
		contador = numero2 + contador;
	
		}
	
	printf("\nLa multiplicacion de los dos numeros que ingreso es: %i \n", contador);
	
	return 0;
	
	}
