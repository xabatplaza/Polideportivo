#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 150
#define MAX_LINE_INT 2


void clearIfNeeded(char *str, int max_line){
	// Limpia los caracteres de más introducidos
	if ((strlen(str) == max_line-1) && (str[max_line-2] != '\n'))
		while (getchar() != '\n');
}
int main(void){
	char str[MAX_LINE];
	char integer[MAX_LINE];
	char nombreActividad;
	char cantidadSocios;
	char descripcion;
	char opcion;
	FILE * archivo = fopen("actividades.txt","a");
	if (archivo == NULL){
		perror("Error al crear el archivo");
		exit(1);
	}else{
		printf("Creando archivo\n");
		printf("Nombre de la Actividad: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &nombreActividad);
		fprintf(archivo,"Nombre de la actividad: %s ",&nombreActividad);
		clearIfNeeded(str, MAX_LINE);

		printf("Numero de socios que se pueden apuntar: ");
		fflush(stdout);
		fgets(integer, MAX_LINE_INT, stdin);
		sscanf(integer, "%i", &cantidadSocios);
		fprintf(archivo,"Numero de socios: %i ",&cantidadSocios);
		clearIfNeeded(integer, MAX_LINE_INT);

		printf("Descripcion: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &descripcion);
		fprintf(archivo,"Descripcion: %s",&descripcion);
		clearIfNeeded(str, MAX_LINE);


		fclose(archivo);
	}




}
