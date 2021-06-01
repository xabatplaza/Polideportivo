#include "instructor.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 50

void crearInstructor(){
	Instructor* ins;
	char str[MAX_LINE];
	printf("\n Cuantos instructores quieres crear? ");
	fflush(stdout);
	fgets(str, MAX_LINE, stdin);
	sscanf(str,"%i",&(ins->cuantas));
	int i = 0;
	while(i<(ins->cuantas)){
		FILE * archivo = fopen("actividades.txt","a");
		if (archivo == NULL){
			perror("Error al crear el archivo");
			exit(1);
		}else{
			FILE * archivo = fopen("instructores.txt","a");
			if (archivo == NULL){
				perror("Error al crear el archivo");
				exit(1);
			}else{
				printf("\n");
				printf("Nombre: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &(ins->nombre));
				fprintf(archivo,"Nombre: %s ",&(ins->nombre));

				printf("DNI: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &(ins->dni));
				fprintf(archivo,"DNI: %s ",&(ins->dni));

				printf("Email: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &(ins->email));
				fprintf(archivo,"Email: %s ",&(ins->email));

				printf("Contraseņa: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &(ins->contrasenya));
				fprintf(archivo,"Contraseņa: %s ",&(ins->contrasenya));

				printf("Direccion: ");
				fflush(stdout);
				fgets(str,MAX_LINE, stdin);
				sscanf(str, "%s", &(ins->dir));
				fprintf(archivo, "Direccion: %s",&(ins->dir));

				printf("Cuenta Bancaria: ISBN ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &(ins->cuentaBancaria));
				fprintf(archivo,"Cuenta Bancaria: %s\n",&(ins->cuentaBancaria));

				fclose(archivo);
			}

		}
		i++;
	}
}
void listarInstructor(){
	char aux;
	FILE * fichero;

	fichero = fopen("instructores.txt","r");
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

