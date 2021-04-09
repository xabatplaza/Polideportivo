#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 150

void clearIfNeeded(char *str, int max_line){
	// Limpia los caracteres de más introducidos
	if ((strlen(str) == max_line-1) && (str[max_line-2] != '\n'))
		while (getchar() != '\n');
}

char dni;

void escribirFichero(){
	FILE * archivo = fopen("socios.txt","a");
	if (archivo == NULL){
		perror("Error al crear el archivo");
	}else{
		printf("Creando archivo");
		fputc(dni,archivo);
	}
}
char opcion(){
	printf("Continuar(S/N)? ->  ");
	fflush(stdout);
	char linea[MAX_LINE];
	fgets(linea, MAX_LINE, stdin);
	clearIfNeeded(linea, MAX_LINE);
	return *linea;

	char eleccion;
	eleccion= opcion();
	if(eleccion == 'S'){
		printf("Entrando en escribir fichero");
		escribirFichero();
	}else{
		printf("Error al entrar a escribir fichero");
	}

}

int main(void){
	char str[MAX_LINE];
	char nombre;
	char apellidos;
	char email;
	char dni;
	char contrasenya;
	char cuenta;
	char opcion;
	FILE * archivo = fopen("socios.txt","a");
	if (archivo == NULL){
		perror("Error al crear el archivo");
		exit(1);
	}else{
		printf("Creando archivo\n");
		printf("Nombre: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &nombre);
		fprintf(archivo,"Nombre: %s ",&nombre);
		clearIfNeeded(str, MAX_LINE);

		printf("Apellidos: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &apellidos);
		fprintf(archivo,"Apellido: %s ",&apellidos);
		clearIfNeeded(str, MAX_LINE);

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


		printf("Cuenta Bancaria: ISBN ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &cuenta);
		fprintf(archivo,"Cuenta Bancaria: %s\n",&cuenta);

		fclose(archivo);
	}




}
