#include "socio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 50

void crearSocio(){
	Socio* s;
	char str[MAX_LINE];
	FILE * archivo = fopen("socios.txt","a");
	if (archivo == NULL){
		perror("Error al crear el archivo");
		exit(1);
	}else{
		printf("\n");
		printf("Nombre: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(s->nombre));
		fprintf(archivo," Nombre:%s ",&(s->nombre));

		printf("Apellidos: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(s->apellidos));
		fprintf(archivo," Apellidos:%s ",&(s->apellidos));

		printf("DNI: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(s->dni));
		fprintf(archivo," DNI:%s ",&(s->dni));

		printf("Email: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(s->email));
		fprintf(archivo," Email:%s ",&(s->email));

		printf("Contraseña: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(s->contrasenya));
		fprintf(archivo," Contraseña:%s ",&(s->contrasenya));


		printf("Cuenta Bancaria: ISBN ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &(s->cuentaBancaria));
		fprintf(archivo," Cuenta_Bancaria_ISBN:%s\n",&(s->cuentaBancaria));
		fclose(archivo);


  }


}
void listarSocios(){
	char aux;
	FILE * fichero;

	fichero = fopen("socios.txt","r");
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
