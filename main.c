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

char menuAdministrador(){ ///cambiar por los valores que queramos introducir
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

char menuSocio(){ ///cambiar por los valores que queramos introducir
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

char menuTrabajador(){ ///cambiar por los valores que queramos introducir
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

void logIn(){
	char usuario[Longitud];
	char clave[Longitud];
	int intento= 0;
	int ingresa= 0;
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
		fgets(clave, Longitud, stdin);

		/*while (caracter=getch()){					Esta función sirve para poner la contraseña oculta
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
		}*/

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
		printf("\n\t ¡Bienvenido al sistema!\n");
		menuAdministrador();// aqui se añade el menu de administrador una vez puesta la contraseña correcta

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
					break;

			case '3':
					break;

			case '4':
					break;

			case '5':
					break;
	}
}


