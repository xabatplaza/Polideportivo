#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 150

void clearIfNeeded(char *str, int max_line){
	// Limpia los caracteres de más introducidos
	if ((strlen(str) == max_line-1) && (str[max_line-2] != '\n'))
		while (getchar() != '\n');
}

int main(void){
	char str[MAX_LINE];
	char nombre;
	char integer[MAX_LINE];
	int participantes;
	char direccion;
	char fecha;

	char opcion;
	FILE * archivo = fopen("socios.txt","a");
	if (archivo == NULL){
		perror("Error al crear el archivo");
		exit(1);
	}else{
		printf("Nombre del torneo: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &nombre);
		fprintf(archivo,"Nombre_Torneo: %s ",&nombre);
		clearIfNeeded(str, MAX_LINE);

		printf("Participantes: ");
		fflush(stdout);
		fgets(integer, MAX_LINE, stdin);
		sscanf(integer, "%i", &participantes);
		fprintf(archivo,"Participantes: %i ",&participantes);
		clearIfNeeded(integer, MAX_LINE);

		printf("Direccion: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &direccion);
		fprintf(archivo,"DNI: %s ",&direccion);
		clearIfNeeded(str, MAX_LINE);

		printf("Fecha: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &fecha);
		fprintf(archivo,"Email: %s \n",&fecha);
		clearIfNeeded(str, MAX_LINE);

		fclose(archivo);
	}




}
