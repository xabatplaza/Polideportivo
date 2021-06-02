#include "trabajador.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 50

void crearTrabajador(){
	Trabajador* t;
	char str[MAX_LINE];
	printf("\n Cuantos trabajadores quieres crear? ");
	fflush(stdout);
	fgets(str, MAX_LINE, stdin);
	sscanf(str,"%i",&(t->cuantas));
	int i = 0;
	while(i<(t->cuantas)){
		FILE * archivo = fopen("trabajadores.txt","a");
		if (archivo == NULL){
			perror("Error al crear el archivo");
			exit(1);
		}else{
			printf("\n");
			printf("DNI: ");
			fflush(stdout);
			fgets(str, MAX_LINE, stdin);
			sscanf(str, "%s", &(t->dni));
			fprintf(archivo,"DNI: %s ",&(t->dni));

			printf("Email: ");
			fflush(stdout);
			fgets(str, MAX_LINE, stdin);
			sscanf(str, "%s", &(t->email));
			fprintf(archivo,"Email: %s ",&(t->email));

			printf("Contraseña: ");
			fflush(stdout);
			fgets(str, MAX_LINE, stdin);
			sscanf(str, "%s", &(t->contrasenya));
			fprintf(archivo,"Contraseña: %s ",&(t->contrasenya));


			printf("¿A que cuenta se transfiere el dinero?: ISBN ");
			fflush(stdout);
			fgets(str, MAX_LINE, stdin);
			sscanf(str, "%s", &(t->cuentaBancaria));
			fprintf(archivo,"Cuenta Bancaria: %s\n",&(t->cuentaBancaria));

			fclose(archivo);
	}
		i++;
	}
}
void listarTrabajadores(){
	char aux;
	FILE * fichero;

	fichero = fopen("trabajadores.txt","r");
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
