#include <stdio.h>

// Variables globales 

float tarea1;
float tarea2;
float tarea3;
float actitudinal;
float prueba1;
float prueba2;

int main(){
	
	// Pedir todas las notas anteriores
	printf("Calculo de ultima nota del curso\n");
	printf("Ingresa tus notas anteriores de la forma: tarea1 , tarea2 , tarea3 , actitudinal , prueba1\n"); // instrucciones 
	printf("Por ejemplo: 6.0 , 5.5 , 4.0 , 5.4 , 6.5\n");
	printf("Ingrese las notas: \n");
	scanf("%f , %f , %f , %f , %f" , &tarea1, &tarea2, &tarea3, &actitudinal, &prueba1);
	
	// Calcular la nota que necesita para aprobar el curso 
    prueba2 = (4.0 - tarea1 * 0.1 - tarea2 * 0.1 - tarea3 * 0.1 - actitudinal * 0.1 - prueba1 * 0.25) / 0.35;
    
	// Mostrar el resultado
	printf("La nota que necesitas para aprobar el curso es: %f", prueba2);
	
	}
