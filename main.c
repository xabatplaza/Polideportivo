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
#define Longitud 80

void clearIfNeeded(char *str, int max_line)
			{
				// Limpia los caracteres de más introducidos
				if ((strlen(str) == max_line-1) && (str[max_line-2] != '\n'))
					while (getchar() != '\n');
			}

void mainn(){
		char usuario[Longitud];
		char clave[Longitud];
		int intento= 0;
		int ingresa= 0;

		do {
			system("cls");
			printf("\n\t\t\t INICIAR SESION EN EL POLIDEPORTIVO\n");
			printf("\t\t\t\t **********************************\n");
			printf("\n\t USUARIO: ");
			fflush(stdout);

			fgets(usuario, Longitud, stdin);
			clearIfNeeded(usuario, Longitud);
			usuario[strcspn(usuario, "\r\n")] = 0;

			printf("\t CONTRASEÑA: ");
			fflush(stdout);
			fgets(clave, Longitud, stdin);
			clearIfNeeded(clave, Longitud);
			clave[strcspn(clave, "\r\n")] = 0;


			if (strcmp(usuario,Usuario)==0 && strcmp(clave,Clave)==0) {
				ingresa=1;

			}else {
				printf("\n\t Usuario y/o clave son incorrectos\n");
				intento++;
				getchar();

			}
		} while (intento<3 && ingresa==0);

		if (ingresa==1) {
			printf("\n\t Bienvenido al sistema\n");

			//Ir a la ventana correspondiente
		}else{
			printf("\n\t Has sobrepasado el numero maximo de intentos\n");
		}
	}

 void main(){
	int opcion;

	while(opcion!=5 || opcion>5){
		printf("1.Iniciar sesión como administrador\n");
		printf("2.Iniciar sesión como socio\n");
		printf("3.Iniciar sesión como trabajador\n");
		printf("4.Registrarse como nuevo socio\n");
		printf("5.Salir\n");
		printf("\n");
		printf("Opción? ->  ");
		scanf("%d",&opcion);
		//Cuando elijamos alguna de las opciones...
		switch(opcion){
			char usuario[Longitud];
			char clave[Longitud];
			int intento= 0;
			int ingresa= 0;

			case 1:
				do {
					system("cls");
					printf("\n\t\t\t INICIAR SESION EN EL POLIDEPORTIVO\n");
					printf("\t\t\t\t **********************************\n");
					printf("\n\t USUARIO: ");
					fflush(stdout);

					fgets(usuario, Longitud, stdin);
					clearIfNeeded(usuario, Longitud);
					usuario[strcspn(usuario, "\r\n")] = 0;

					printf("\t CONTRASEÑA: ");
					fflush(stdout);
					fgets(clave, Longitud, stdin);
					clearIfNeeded(clave, Longitud);
					clave[strcspn(clave, "\r\n")] = 0;


					if (strcmp(usuario,Usuario)==0 && strcmp(clave,Clave)==0) {
						ingresa=1;

					}else {
						printf("\n\t Usuario y/o clave son incorrectos\n");
						intento++;
						getchar();

					}
				} while (intento<3 && ingresa==0);

				if (ingresa==1) {
					printf("\n\t Bienvenido al sistema\n");

					//Ir a la ventana correspondiente
				}else{
					printf("\n\t Has sobrepasado el numero maximo de intentos\n");
				}
				break;

			case 2:
				mainn();
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

