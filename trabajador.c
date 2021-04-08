#include "trabajador.h"
#include <stdio.h>
#include <stdlib.h>

#define DNI "11111111A"
#define Contrasenya "123456789"
#define Longitud 80
#define MAX_LINE 10
void clearIfNeeded(char *str, int max_line)
{
	// Limpia los caracteres de más introducidos
	if ((strlen(str) == max_line-1) && (str[max_line-2] != '\n'))
		while (getchar() != '\n');
}
int main(){
	char dni[Longitud];
	char contrasenya[Longitud];
	int intento= 0;
	int ingresa= 0;

	do {
		system("cls");
		printf("\n\t\t\t INICIA SESION COMO TRABAJADOR\n");
		printf("\n\t DNI: ");
		fflush(stdout);

		fgets(dni, Longitud, stdin);
		clearIfNeeded(dni, Longitud);
		dni[strcspn(dni, "\r\n")] = 0;

		printf("\t Contraseña: ");
		fflush(stdout);
		fgets(contrasenya, Longitud, stdin);
		clearIfNeeded(contrasenya, Longitud);
		contrasenya[strcspn(contrasenya, "\r\n")] = 0;

		if (strcmp(dni,DNI)==0 && strcmp(contrasenya,Contrasenya)==0) {
			ingresa=1;
		}else {
			printf("\n\t Email y/o Contraseña son incorrectos\n");
			intento++;
			getchar();
			}
	} while (intento<3 && ingresa==0);

	if (ingresa==1) {
		printf("\n\t Bienvenido al sistema\n");
		menuTrabajador();//Ir a la ventana correspondiente
	}else{
		printf("\n\t Has sobrepasado el numero maximo de intentos\n");
	}
}
