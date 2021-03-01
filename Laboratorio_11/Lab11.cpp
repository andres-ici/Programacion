#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Desafio 2 implementar funcion para generar ruta del archivo

void generarRuta(char path[100], char nombre_archivo[15]);

int main(){

    FILE* archivo;

    char path[100];
    char nombre_archivo[15];
    int opcion = 0;

    while(opcion != 5){

        //MENU

        printf("\n--- MENU ---\n\n");
        printf("0.- Listar archivos\n");
        printf("1.- Crear archivo\n");
        printf("2.- Leer archivo\n");
        printf("3.- Agregar registro\n");
        printf("4.- Eliminar archivo\n");
        printf("5.- Leer archivo\n");
        printf("Ingrese el numero de la opcion que quiere seleccionar:\n");
        scanf("%d", &opcion);
        printf("\n");

        switch (opcion){
            
            case 0: 

                system("dir *.txt");

                break;

            case 1:

                printf("Ingrese el nombre del archivo en el que quiere crear:\n");
                generarRuta(path, nombre_archivo);
                archivo = fopen(path, "w");
                fclose(archivo);
                break;

            case 2:

                printf("Ingrese el nombre del archivo en el que quiere leer:\n");
                generarRuta(path, nombre_archivo);
                archivo = fopen(path, "r");

                if(archivo == NULL){

                    printf("El archivo que quiere abrir no existe.\n");
                    
                }else{

                    //Desafio 1, que imprima todo el contenido
                    char caracter[2];
                    printf("\nLectura de %s:\n\n", nombre_archivo);
                    while(!feof(archivo)){

                        fgets(caracter, 2, archivo);
                        printf("%s", caracter);

                    }
                    printf("\n");
                    fclose(archivo);

                }
                break;

            case 3:

                printf("Ingrese el nombre del archivo en el que quiere agregar informacion:\n");
                generarRuta(path, nombre_archivo);
                archivo = fopen(path, "r+");

                if(archivo == NULL){

                    printf("El archivo que quiere abrir no existe.\n");
                    
                }else{

                    fseek(archivo, 0, SEEK_END);
                    char nombre[20];
                    char apellido[20];
                    char telefono[20];
                    printf("Ingrese el nombre: \n");
                    scanf("%s", nombre);
                    printf("Ingrese el apellido: \n");
                    scanf("%s", apellido);
                    printf("Ingrese el telefono: \n");
                    scanf("%s", telefono);
                    fprintf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                    fclose(archivo);

                }
                break;

            case 4:

                printf("Ingrese el nombre del archivo en el que quiere eliminar:\n");
                generarRuta(path, nombre_archivo);
                archivo = fopen(path, "r");

                if(archivo == NULL){

                    printf("El archivo que quiere eliminar no existe.\n");
                    
                }else{

                    fclose(archivo);
                    remove(path);
                    printf("Archivo eliminado\n");

                }

                break;

            case 5:

                printf("Cerrando programa\n");
                break;

            default: printf("La opcion ingresada no es valida.\n");
            
        }



    }

    return 0;

}

void generarRuta(char path[100], char nombre_archivo[15]){

    strcpy(path, "\\Users\\aicar\\Desktop\\Universidad\\Programacion\\Laboratorio_11\\");
    scanf("%s", nombre_archivo);
    strcat(nombre_archivo, ".txt");
    strcat(path, nombre_archivo);

}