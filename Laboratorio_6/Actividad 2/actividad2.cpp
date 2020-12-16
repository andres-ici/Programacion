#include <stdio.h>

int numero1, numero2, numero3;

int main(){
	
	printf("Mayor de tres numeros\n\n");
	printf("Ingrese tres numeros enteros de la forma: x , y , z: \n");
	scanf("%d , %d , %d", &numero1, &numero2, &numero3);
	
	if (numero1 > numero2 && numero1 > numero3) {
		
		printf("El primer numero ingresado es el mayor \n");
		
		} else if (numero2 > numero1 && numero2 > numero3) {
			
			printf("El segundo numero ingresado es el mayor \n");
			
			} else if (numero3 > numero1 && numero3 > numero2) {
				
				printf("El tercer numero ingresado es el mayor \n");
				
				} else if ( numero1 == numero2 && numero2 == numero3 ) {
					
					printf("Los tres numeros son iguales \n");
					
					} else {
						
						printf("Hay dos numeros mayores iguales \n");
						
						}
	
	return 0;
	
	}
