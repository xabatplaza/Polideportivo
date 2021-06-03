#include "actividad.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 50

void crearActividad(){

	char str[MAX_LINE];
	FILE * archivo = fopen("actividades.txt","a");
	if (archivo == NULL){
		perror("Error al crear el archivo");
		exit(1);
	}else{
		Actividad* a;
		printf("\n");
		printf("Nombre de la Actividad: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(a->nombre));
		fprintf(archivo,"Nombre de la actividad: %s ",&(a->nombre));

		printf("Numero de socios que se pueden apuntar: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%i", &(a->numSocios));
		fprintf(archivo,"Numero de socios: %i ",&(a->numSocios));

		printf("Descripcion: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(a->descripcion));
		fprintf(archivo,"Descripcion: %s\n",&(a->descripcion));

		fclose(archivo);
		system("pause");
		system("cls");


	}
}
void listarActividad(){
	char aux;
	FILE * fichero;

	fichero = fopen("actividades.txt","r");
	if(fichero == NULL){
		printf("No se ha podido abrir el fichero. \n");
		exit(1);
	}
	while(aux != EOF){
		aux = fgetc(fichero);
		printf("%c",aux);
	}
	printf("\n");
	printf("\n");
	printf("\n");

	fclose(fichero);
	system("pause");
	system("cls");
}
