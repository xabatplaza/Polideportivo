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
#include <string.h>

//Se mostrará el siguiente menú en la pantalla principal

#define Usuario "admin1"
#define Clave "1234"
#define Email "socio1@gmail.com"
#define DNI "11111111A"
#define Contrasenya "123456789"
#define Longitud 80
#define MAX_LINE 10



void clearIfNeeded(char *str, int max_line){
	// Limpia los caracteres de más introducidos
	if ((strlen(str) == max_line-1) && (str[max_line-2] != '\n'))
		while (getchar() != '\n');
}


char menu(){
		printf("\n1. Iniciar sesion como administrador\n");
		printf("2. Iniciar sesion como socio\n");
		printf("3. Iniciar sesion como trabajador\n");
		printf("4. Registrarse como nuevo socio\n");
		printf("5. Salir\n");
		printf("\n");
		printf("Opcion? ->  ");
		fflush(stdout);
		char linea[MAX_LINE];
		fgets(linea, MAX_LINE, stdin);
		clearIfNeeded(linea, MAX_LINE);
		return *linea;
}


char registrarSocio(){ //cambiar
	printf("\n1. Iniciar sesion como administrador\n");
	printf("2. Iniciar sesion como socio\n");
	printf("3. Iniciar sesion como trabajador\n");
	printf("4. Registrarse como nuevo socio\n");
	printf("5. Salir\n");
	printf("\n");
	printf("Opcion? ->  ");
	fflush(stdout);
	char linea[MAX_LINE];
	fgets(linea, MAX_LINE, stdin);
	clearIfNeeded(linea, MAX_LINE);
	return *linea;
}


char menuAdministrador(){ ///cambiar por los valores que queramos introducir
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

char menuSocio(){ ///cambiar por los valores que queramos introducir
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

char menuTrabajador(){ ///cambiar por los valores que queramos introducir
	printf("\n1. Apuntar a socio\n");
	printf("2. Desapuntar socio\n");
	printf("3. Asignar/Desasignar socio a torneo\n");
	printf("4. Asignar/Desasignar socio a actividad\n");
	printf("5.Ver lista de torneos/actividades\n");
	printf("6. Salir\n");
	printf("\n");
	printf("Opcion ->  ");

	fflush(stdout);
	char linea[MAX_LINE];
	fgets(linea, MAX_LINE, stdin);
	clearIfNeeded(linea, MAX_LINE);
	//return *linea;

	//char opcionTrabajador;
	//opcionTrabajador= menuTrabajador();

	/*switch (opcionTrabajador){
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
	}*/



}

void logIn(){
	char usuario[Longitud];
	char clave[Longitud];
	int intento= 0;
	int ingresaAdministrador= 0;
	int ingresaSocio=0;
	int ingresaTrabajador=0;
	int i;
	char caracter;

		do {
			i=0;
			system("cls");
			printf("\n\t\t\t INICIAR SESION EN EL POLIDEPORTIVO\n");
			printf("\t\t\t **********************************\n");
			printf("\n\t USUARIO: ");
			fflush(stdout);

			fgets(usuario, Longitud, stdin);
			clearIfNeeded(usuario, Longitud);
			usuario[strcspn(usuario, "\r\n")] = 0;

			printf("\t CONTRASEÑA: ");
			fflush(stdout);
			//fgets(clave, Longitud, stdin);

			while (caracter=getch()){
				if (caracter==13){
					clave[i]= '\0';
					break;
				}else if(caracter==8){
					if(i>0){
						i--;
						printf("\b \b");
					}
				}else{
					if(i<Longitud){
						printf("*");
						clave[i]= caracter;
						i++;
					}
				}
			}

			clearIfNeeded(clave, Longitud);
			clave[strcspn(clave, "\r\n")] = 0;


			if (strcmp(usuario,Usuario)==0 && strcmp(clave,Clave)==0) {
				ingresaAdministrador=1;


	        }else if(strcmp(usuario,Email)==0 && strcmp(clave,Contrasenya)==0){
	            ingresaSocio=1;

	        }else if(strcmp(usuario,DNI)==0 && strcmp(clave,Contrasenya)==0){
	            ingresaTrabajador=1;

	        }else {
				printf("\n\t Usuario y/o clave son incorrectos\n");
				intento++;
				getchar();

			}
		} while (intento<3 && ingresaAdministrador==0 && ingresaSocio==0 && ingresaTrabajador==0);

		if (ingresaAdministrador==1) {
			printf("\n\t ¡Bienvenido al sistema como administrador!\n");
			menuAdministrador();// aqui se añade el menu de administrador una vez puesta la contraseña correcta

	    }else if(ingresaSocio==1){
	        printf("\n\t ¡Bienvenido al sistema como socio!\n");
	        menuSocio();
	    }else if(ingresaTrabajador==1){
	        printf("\n\t ¡Bienvenido al sistema como trabajador!\n");
	        menuTrabajador();


		}else{
			printf("\n\t Has sobrepasado el numero maximo de intentos\n");
		}
}




int main(void){
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
					registrarSocio();
					break;

			case '5':
					break;
	}
}


