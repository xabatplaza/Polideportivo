#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Usuario "admin1"
#define Clave "1234"
#define Longitud 80

void clearIfNeeded(char *str, int max_line)
{
	// Limpia los caracteres de más introducidos
	if ((strlen(str) == max_line-1) && (str[max_line-2] != '\n'))
		while (getchar() != '\n');
}

int main(){
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
	}else{
		printf("\n\t Has sobrepasado el numero maximo de intentos\n");
	}



}
