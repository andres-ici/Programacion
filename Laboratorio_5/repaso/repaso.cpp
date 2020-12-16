#include <stdio.h>

int numero1;
int numero2;
int suma;

int main(){
	
	printf("Suma de dos numeros\n");
	
	printf("Ingrese primer numero: \n");
	scanf("%i", &numero1);
	
	printf("Ingrese segundo numero: \n");
	scanf("%i", &numero2);
	
	int suma = numero1 + numero2;
	
	printf("La suma de los numeros es: %i", suma);
	
	}
