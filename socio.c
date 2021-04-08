#include "socio.h"
#include <stdio.h>
#include <stdlib.h>


#define Email "socio1@gmail.com"
#define Contrasenya "1234"
#define Longitud 80

void clearIfNeeded(char *str, int max_line)
{
	// Limpia los caracteres de más introducidos
	if ((strlen(str) == max_line-1) && (str[max_line-2] != '\n'))
		while (getchar() != '\n');
}

int main(){
	char email[Longitud];
	char contrasenya[Longitud];
	int intento= 0;
	int ingresa= 0;

	do {
		system("cls");
		printf("\n\t\t\t INICIA SESION COMO SOCIO\n");
		printf("\t\t\t\t **********************************\n");
		printf("\n\t Email: ");
		fflush(stdout);

		fgets(email, Longitud, stdin);
		clearIfNeeded(email, Longitud);
		email[strcspn(email, "\r\n")] = 0;

		printf("\t Contraseña: ");
		fflush(stdout);
		fgets(contrasenya, Longitud, stdin);
		clearIfNeeded(contrasenya, Longitud);
		contrasenya[strcspn(contrasenya, "\r\n")] = 0;


		if (strcmp(email,Email)==0 && strcmp(contrasenya,Contrasenya)==0) {
			ingresa=1;

		}else {
			printf("\n\t Email y/o Contraseña son incorrectos\n");
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

