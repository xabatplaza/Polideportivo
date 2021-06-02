#include "torneo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 50

void crearTorneo(){
	Torneo* t;
	char str[MAX_LINE];
	char integer[MAX_LINE];
	printf("\n Cuantos torneos quieres crear? ");
	fflush(stdout);
	fgets(str, MAX_LINE, stdin);
	sscanf(str,"%i",&(t->cuantas));
	int i = 0;
	while(i<(t->cuantas)){
		FILE * archivo = fopen("torneos.txt","a");
		if (archivo == NULL){
			perror("Error al crear el archivo");
			exit(1);
		}else{
			printf("\n");
			printf("Nombre del torneo: ");
			fflush(stdout);
			fgets(str, MAX_LINE, stdin);
			sscanf(str, "%s", &(t->nombre));
			fprintf(archivo,"Nombre_Torneo: %s ",&(t->nombre));

			printf("Participantes: ");
			fflush(stdout);
			fgets(integer, MAX_LINE, stdin);
			sscanf(integer, "%i", &(t->participantes));
			fprintf(archivo,"Participantes: %i ",&(t->participantes));

			printf("Direccion: ");
			fflush(stdout);
			fgets(str, MAX_LINE, stdin);
			sscanf(str, "%s", &(t->direccion));
			fprintf(archivo,"DNI: %s ",&(t->direccion));

			printf("Fecha: ");
			fflush(stdout);
			fgets(str, MAX_LINE, stdin);
			sscanf(str, "%s", &(t->fecha));
			fprintf(archivo,"Email: %s \n",&(t->fecha));

			fclose(archivo);
	}
	i++;
	}
}
void listarTorneos(){
	char aux;
	FILE * fichero;

	fichero = fopen("torneos.txt","r");
	if(fichero == NULL){
		printf("No se ha podido abrir el fichero. \n");
		exit(1);
	}
	while(aux != EOF){
		aux = fgetc(fichero);
		printf("%c",aux);
	}
	printf("\n");

	fclose(fichero);

	system("pause");
	system("cls");

}
