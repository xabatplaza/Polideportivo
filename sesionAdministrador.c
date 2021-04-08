#include "sesionAdministrador.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE 10
int main(){
	printf("\n1. Crear socios\n");
	printf("2. Crear trabajadores\n");
	printf("3. Crear torneos\n");
	printf("4. Despedir trabajador\n");
	printf("5. Desapuntar socio\n");
	printf("6. Borrar torneo\n");
	printf("7. Crear actividades\n");
	printf("8. Borrar actividad\n");
	printf("9. Contratar instructor\n");
	printf("10. Despedir instructor\n");
	printf("11. Asignar/Desasignar instructor a actividad\n");
	printf("12. Asignar/Desasignar socios a torneo\n");
	printf("13. Asignar/Desasignar socio a actividad\n");
	printf("14. Ver lista de torneos/actividad/socios/instructores\n");
	printf("15. Salir\n");
	printf("\n");
	printf("Opcion? ->  ");
	fflush(stdout);
	char linea[MAX_LINE];
	fgets(linea, MAX_LINE, stdin);
	clearIfNeeded(linea, MAX_LINE);
	return *linea;
}
