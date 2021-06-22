#include "torneo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 50

void crearTorneo(){
	Torneo* torneo;
	char str[MAX_LINE];
	FILE * archivo = fopen("torneos.txt","a");
	if (archivo == NULL){
		perror("Error al crear el archivo");
		exit(1);
	}else{
		printf("\n");
		printf("Nombre del torneo: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(torneo->nombre));
		fprintf(archivo," Nombre_Torneo:%s ",&(torneo->nombre));

		printf("Participantes: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(torneo->participantes));
		fprintf(archivo," Participantes:%s ",&(torneo->participantes));

		printf("Direccion: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(torneo->direccion));
		fprintf(archivo," Direccion:%s ",&(torneo->direccion));

		printf("Fecha: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(torneo->fecha));
		fprintf(archivo," Fecha:%s \n",&(torneo->fecha));

		fclose(archivo);
		system("pause");
		system("cls");

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
