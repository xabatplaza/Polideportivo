#include "administrador.h"
#include "crearActividad.h"
#include "crearInstructor.h"
#include "crearSocio.h"
#include "crearTorneo.h"
#include "crearTrabajador.h"
#include "sesionAdministrador.h"
#include "sesionSocio.h"
#include "sesionTrabajador.h"
#include "socio.h"
#include "trabajador.h"

#include <stdio.h>
#include <stdlib.h>
//Se mostrar� el siguiente men� en la pantalla principal
void main(){
	int opcion;

	while(opcion!=5 || opcion>5){
		printf("1.Iniciar sesi�n como administrador\n");
		printf("2.Iniciar sesi�n como socio\n");
		printf("3.Iniciar sesi�n como trabajador\n");
		printf("4.Registrarse como nuevo socio\n");
		printf("5.Salir\n");
		printf("\n");
		printf("Opci�n? ->  ");
		scanf("%d",&opcion);
		//Cuando elijamos alguna de las opciones...
		switch(opcion){
		case 1:
		break;

		case 2:
		break;

		case 3:
		break;

		case 4:
		break;

		case 5:
		break;
		}
	}
}

