#include <stdio.h>

int clave = 20911564;
int entradaDeClave;

int main () {
	
	printf("Control de acceso con clave \n\n");
	printf("Ingrese clave: \n");
	scanf("%i", &entradaDeClave);
	
	if (entradaDeClave == clave) {
		
		printf("Bienvenido al sistema \n");
		
		} else {
			
			printf("Clave incorrecta \n");
			printf("Ingrese clave nuevamente: \n");
			scanf("%i", &entradaDeClave);
			
			if (entradaDeClave == clave) {
				
				printf("Bienvenido al sistema \n");
				
				} else {
					
					printf("Clave incorrecta \n");
					printf("Ingrese clave nuevamente: \n");
					scanf("%i", &entradaDeClave);
					
					if (entradaDeClave == clave) {
						
						printf("Bienvenido al sistema \n");
						
						} else {
							
							printf("Clave incorrecta \n");
							printf("Usuario bloqueado \n");
							
							}
					
					}
			
			}
	
	return 0;
	
	}
