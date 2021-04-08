#include "sesionTrabajador.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 10

int main(){
	printf("\n1. Apuntar a socio\n");
	printf("2. Desapuntar socio\n");
	printf("3. Asignar/Desasignar socio a torneo\n");
	printf("4. Asignar/Desasignar socio a actividad\n");
	printf("5.Ver lista de torneos/actividades\n");
	printf("6. Salir\n");
	printf("\n");
	printf("Opcion? ->  ");
	fflush(stdout);
	char linea[MAX_LINE];
	fgets(linea, MAX_LINE, stdin);
	clearIfNeeded(linea, MAX_LINE);
	return *linea;

	char opcionTrabajador;
	opcionTrabajador= menuTrabajador();
	switch (opcionTrabajador){
		case '1':
				break;
		case '2':
				break;
		case '3':
				break;
		case '4':
				break;
		case '5':
				break;
		case'6':
				menu();
				break;
	}
}
