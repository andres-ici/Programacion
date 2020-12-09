#include <stdio.h>

float radio;
float pi = 3.1415;
float area;
float perimetro;

int main(){
	
	printf("Calculo del perimetro y area de un circulo\n");
	
	printf("Ingrese el radio de una circunferencia: \n");
	scanf("%f", &radio);
	
	area = radio * radio * pi;
	perimetro = 2 * radio *pi;
	
	printf("El area del circulo es: %f\n", area);
	printf("El perimetro del circulo es: %f\n", perimetro);
	
	}
