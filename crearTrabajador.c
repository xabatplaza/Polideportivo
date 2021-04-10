#include "crearTrabajador.h"
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
	char email;
	char dni;
	char contrasenya;
	char cuenta;
	char opcion;
	FILE * archivo = fopen("trabajadores.txt","a");
	if (archivo == NULL){
		perror("Error al crear el archivo");
		exit(1);
	}else{
		printf("DNI: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &dni);
		fprintf(archivo,"DNI: %s ",&dni);
		clearIfNeeded(str, MAX_LINE);

		printf("Email: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &email);
		fprintf(archivo,"Email: %s ",&email);
		clearIfNeeded(str, MAX_LINE);

		printf("Contraseña: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &contrasenya);
		fprintf(archivo,"Contraseña: %s ",&contrasenya);
		clearIfNeeded(str, MAX_LINE);


		printf("¿A que cuenta se transfiere el dinero?: ISBN ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &cuenta);
		fprintf(archivo,"Cuenta Bancaria: %s\n",&cuenta);

		fclose(archivo);
	}




}
