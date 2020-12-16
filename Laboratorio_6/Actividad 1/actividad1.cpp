#include <stdio.h>

int numero;


int main(){
	
	printf("Numero par o impar \n\n");
	printf("Ingrese un numero entero: \n");
	scanf("%d", &numero);
	
	if (numero%2 == 0) {
		
		printf("El numero que ingreso es par\n");
		
		} else {
			
			printf("El numero que ingreso es impar\n");
			
			}
	
	return 0;
	
	
	}
