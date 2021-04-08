#include "sesionSocio.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 10

int main(){
	printf("\n1. Apuntarse/Desapuntarse a actividad\n");
	printf("2. Apuntarse/Desapuntarse a torneo\n");
	printf("3. Ver lista de torneos/actividades\n");
	printf("4. Enviar queja\n");
	printf("5. Salir\n");
	printf("\n");
	printf("Opcion? ->  ");
	fflush(stdout);
	char linea[MAX_LINE];
	fgets(linea, MAX_LINE, stdin);
	clearIfNeeded(linea, MAX_LINE);
	return *linea;

	char opcionSocio;
	opcionSocio= menuSocio();
	switch (opcionSocio){
		case '1':
				break;
		case '2':
				break;
		case '3':
				break;
		case '4':
				break;
		case '5':
				menu();
				break;

	}
}
