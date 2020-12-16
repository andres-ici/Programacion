#include <stdio.h>

float numero1;
float numero2;
float multiplicacion;

int main(){
	
	printf("Multiplicacion de dos numeros float\n");
	printf("Ingresar los numeros de la forma: X.X , Y.Y\n");
	
	printf("Ingrese los numeros: \n");
	scanf("%f , %f", &numero1, &numero2);
	
    multiplicacion = numero1 * numero2;
	
	printf("La multiplicacion de los numeros es: %f", multiplicacion);
	
	}
