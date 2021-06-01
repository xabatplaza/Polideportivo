#include "socio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 50

void crearSocio(){
	Socio* a;
	char str[MAX_LINE];
	printf("\n Cuantas actividades quieres crear? ");
	fflush(stdout);
	fgets(str, MAX_LINE, stdin);
	sscanf(str,"%i",&(a->cuantas));
	int i = 0;
	while(i<(a->cuantas)){
		FILE * archivo = fopen("socios.txt","a");
		if (archivo == NULL){
			perror("Error al crear el archivo");
			exit(1);
		}else{
			printf("\n");
			printf("Nombre: ");
			fflush(stdout);
			fgets(str, MAX_LINE, stdin);
			sscanf(str, "%s", &(a->nombre));
			fprintf(archivo,"Nombre: %s ",&(a->nombre));

			printf("Apellidos: ");
			fflush(stdout);
			fgets(str, MAX_LINE, stdin);
			sscanf(str, "%s", &(a->apellidos));
			fprintf(archivo,"Apellido: %s ",&(a->apellidos));

			printf("DNI: ");
			fflush(stdout);
			fgets(str, MAX_LINE, stdin);
			sscanf(str, "%s", &(a->dni));
			fprintf(archivo,"DNI: %s ",&(a->dni));

			printf("Email: ");
			fflush(stdout);
			fgets(str, MAX_LINE, stdin);
			sscanf(str, "%s", &(a->email));
			fprintf(archivo,"Email: %s ",&(a->email));

			printf("Contraseña: ");
			fflush(stdout);
			fgets(str, MAX_LINE, stdin);
			sscanf(str, "%s", &(a->contrasenya));
			fprintf(archivo,"Contraseña: %s ",&(a->contrasenya));


			printf("Cuenta Bancaria: ISBN ");
			fflush(stdout);
			fgets(str, MAX_LINE, stdin);
			sscanf(str, "%s", &(a->cuentaBancaria));
			fprintf(archivo,"Cuenta Bancaria: %s\n",&(a->cuentaBancaria));

			fclose(archivo);
	}
		printf("i++");
		i++;
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
