#include "instructor.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 50

void crearInstructor(){
	Instructor* ins;
	char str[MAX_LINE];
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
		fprintf(archivo," %s ",&(ins->nombre));

		printf("DNI: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(ins->dni));
		fprintf(archivo," %s ",&(ins->dni));

		printf("Email: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(ins->email));
		fprintf(archivo," %s ",&(ins->email));

		printf("Contraseña: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(ins->contrasenya));
		fprintf(archivo," %s ",&(ins->contrasenya));

		printf("Direccion: ");
		fflush(stdout);
		fgets(str,MAX_LINE, stdin);
		sscanf(str, "%s", &(ins->dir));
		fprintf(archivo, " %s",&(ins->dir));

		printf("Cuenta Bancaria: ISBN ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(ins->cuentaBancaria));
		fprintf(archivo," %s\n",&(ins->cuentaBancaria));
		fclose(archivo);
		system("pause");
		system("cls");

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

