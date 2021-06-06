extern "C"{
#include "actividad.h"
#include "instructor.h"
#include "socio.h"
#include "torneo.h"
#include "trabajador.h"
#include "menu.h"
#include "sqlite3.h"
#include "BD.h"
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;


int main(){
	char opcion;
	opcion= menu();
	switch (opcion){
			case '1':
					logIn();
					break;

			case '2':
					logIn();
					break;

			case '3':
					logIn();
					break;

			case '4':
					crearSocio();

			case '5':
					system("cls");
					printf("\n%cVUELVA PRONTO!\n", 173);
					exit(0);
					break;

	}
	return 0;
}
