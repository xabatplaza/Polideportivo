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

#define Usuario "admin1" //Si quieres iniciar sesion como administrador
#define Clave "1234"     //Contraseña para iniciar como administrador
#define Email "socio1@gmail.com" //Usuario para iniciar sesion como socio
#define DNI "11111111A"			 //Usuario para iniciar sesion como trabajador
#define Contrasenya "123456789"  //Contraseña para iniciar sesion como socio y trabajador
#define Longitud 80
#define MAX_LINE 50
#define MAX_LINE_INT 4

typedef struct{
	char nombre;
	char apellidos;
	char email;
	char dni;
	char contrasenya;
	char cuenta;
}EstructuraSocio;

void clearIfNeeded(char *str, int max_line){
	// Limpia los caracteres de más introducidos
	if ((strlen(str) == max_line-1) && (str[max_line-2] != '\n'))
		while (getchar() != '\n');
}

void actividad(){		//Crear actividades
	char str[MAX_LINE];
	char eleccion;
	int i = 1;
	while(i==1){
		printf("\n1. Crear Actividad\n");
		printf("2. Atras\n");
		printf("\n");
		printf("Opcion? ->  ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &eleccion);
		if (eleccion == '1'){
			char str[MAX_LINE];
			char integer[MAX_LINE_INT];
			char nombreActividad;
			char cantidadSocios;
			char descripcion;
			char opcion;
			FILE * archivo = fopen("actividades.txt","a");
			if (archivo == NULL){
				perror("Error al crear el archivo");
				exit(1);
			}else{
				printf("\n");
				printf("Nombre de la Actividad: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &nombreActividad);
				fprintf(archivo,"Nombre de la actividad: %s ",&nombreActividad);
				clearIfNeeded(str, MAX_LINE);

				printf("Numero de socios que se pueden apuntar: ");
				fflush(stdout);
				fgets(integer, MAX_LINE_INT, stdin);
				sscanf(integer, "%i", &cantidadSocios);
				fprintf(archivo,"Numero de socios: %i ",&cantidadSocios);
				clearIfNeeded(integer, MAX_LINE_INT);

				printf("Descripcion: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &descripcion);
				fprintf(archivo,"Descripcion: %s\n",&descripcion);
				clearIfNeeded(str, MAX_LINE);


				fclose(archivo);
			}
		}else {
			system("cls");
			i++;


		}
	}


}
void instructor(){		//Crear instructores
	char str[MAX_LINE];
	char eleccion;
	int i = 1;
	while(i==1){
		printf("\n1. Crear Instructor\n");
		printf("2. Atras\n");
		printf("\n");
		printf("Opcion? ->  ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &eleccion);
		if (eleccion == '1'){
			char str[MAX_LINE];
			char nombre;
			char dir;
			char email;
			char dni;
			char contrasenya;
			char cuenta;
			char opcion;
			FILE * archivo = fopen("instructores.txt","a");
			if (archivo == NULL){
				perror("Error al crear el archivo");
				exit(1);
			}else{
				printf("\n");
				printf("Nombre: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &nombre);
				fprintf(archivo,"Nombre: %s ",&nombre);
				clearIfNeeded(str, MAX_LINE);

				printf("DNI: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &dni);
				fprintf(archivo,"DNI: %s ",&dni);
				clearIfNeeded(str, MAX_LINE);

				printf("Email: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &email);
				fprintf(archivo,"Email: %s ",&email);
				clearIfNeeded(str, MAX_LINE);

				printf("Contraseña: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &contrasenya);
				fprintf(archivo,"Contraseña: %s ",&contrasenya);
				clearIfNeeded(str, MAX_LINE);

				printf("Direccion: ");
				fflush(stdout);
				fgets(str,MAX_LINE, stdin);
				sscanf(str, "%s", &dir);
				fprintf(archivo, "Direccion: %s",&dir);
				clearIfNeeded(str,MAX_LINE);


				printf("Cuenta Bancaria: ISBN ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &cuenta);
				fprintf(archivo,"Cuenta Bancaria: %s\n",&cuenta);

				fclose(archivo);
			}
		}else if (eleccion == '2'){
			system("cls");
			i++;
		}else{
			printf("Error");
		}
	}




}
void socio(){			//Crear socio
	char str[MAX_LINE];
	char eleccion;
	int i = 1;
	EstructuraSocio socioS;
	while(i==1){
		printf("\n1. Crear Socio\n");
		printf("2. Atras\n");
		printf("\n");
		printf("Opcion? ->  ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &eleccion);
		if (eleccion == '1'){
			char str[MAX_LINE];
			char nombre;
			char apellidos;
			char email;
			char dni;
			char contrasenya;
			char cuenta;
			char opcion;
			FILE * archivo = fopen("socios.txt","a");
			if (archivo == NULL){
				perror("Error al crear el archivo");
				exit(1);
			}else{
				printf("\n");
				printf("Nombre: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &(socioS.nombre));
				fprintf(archivo,"Nombre: %s ",&(socioS.nombre));
				clearIfNeeded(str, MAX_LINE);

				printf("Apellidos: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &(socioS.apellidos));
				fprintf(archivo,"Apellido: %s ",&(socioS.apellidos));
				clearIfNeeded(str, MAX_LINE);

				printf("DNI: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &(socioS.dni));
				fprintf(archivo,"DNI: %s ",&(socioS.dni));
				clearIfNeeded(str, MAX_LINE);

				printf("Email: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &(socioS.email));
				fprintf(archivo,"Email: %s ",&(socioS.email));
				clearIfNeeded(str, MAX_LINE);

				printf("Contraseña: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &(socioS.contrasenya));
				fprintf(archivo,"Contraseña: %s ",&(socioS.contrasenya));
				clearIfNeeded(str, MAX_LINE);


				printf("Cuenta Bancaria: ISBN ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &(socioS.cuenta));
				fprintf(archivo,"Cuenta Bancaria: %s\n",&(socioS.cuenta));

				fclose(archivo);
			}
		}else if(eleccion=='2'){
			system("cls");
			i++;
		}else{
			printf("Error");
		}

	}


}
void torneo(){			//Crear socio
	char str[MAX_LINE];
	char eleccion;
	int i = 1;
	while(i==1){
		printf("\n1. Crear Torneo\n");
		printf("2. Atras\n");
		printf("\n");
		printf("Opcion? ->  ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &eleccion);
		if (eleccion == '1'){
			char str[MAX_LINE];
			char nombre;
			char integer[MAX_LINE];
			int participantes;
			char direccion;
			char fecha;

			char opcion;
			FILE * archivo = fopen("torneos.txt","a");
			if (archivo == NULL){
				perror("Error al crear el archivo");
				exit(1);
			}else{
				printf("\n");
				printf("Nombre del torneo: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &nombre);
				fprintf(archivo,"Nombre_Torneo: %s ",&nombre);
				clearIfNeeded(str, MAX_LINE);

				printf("Participantes: ");
				fflush(stdout);
				fgets(integer, MAX_LINE, stdin);
				sscanf(integer, "%i", &participantes);
				fprintf(archivo,"Participantes: %i ",&participantes);
				clearIfNeeded(integer, MAX_LINE);

				printf("Direccion: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &direccion);
				fprintf(archivo,"DNI: %s ",&direccion);
				clearIfNeeded(str, MAX_LINE);

				printf("Fecha: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &fecha);
				fprintf(archivo,"Email: %s \n",&fecha);
				clearIfNeeded(str, MAX_LINE);

				fclose(archivo);
			}
		}else if(eleccion=='2'){
			system("cls");
			i++;
		}else{
			printf("Error");
		}

	}


}
void trabajador(){			//Crear trabajador
	char str[MAX_LINE];
	char eleccion;
	int i = 1;
	while(i==1){
		printf("\n1. Crear Trabajador\n");
		printf("2. Atras\n");
		printf("\n");
		printf("Opcion? ->  ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &eleccion);
		if (eleccion == '1'){
			char str[MAX_LINE];
			char email;
			char dni;
			char contrasenya;
			char cuenta;
			char opcion;
			FILE * archivo = fopen("trabajadores.txt","a");
			if (archivo == NULL){
				perror("Error al crear el archivo");
				exit(1);
			}else{
				printf("\n");
				printf("DNI: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &dni);
				fprintf(archivo,"DNI: %s ",&dni);
				clearIfNeeded(str, MAX_LINE);

				printf("Email: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &email);
				fprintf(archivo,"Email: %s ",&email);
				clearIfNeeded(str, MAX_LINE);

				printf("Contraseña: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &contrasenya);
				fprintf(archivo,"Contraseña: %s ",&contrasenya);
				clearIfNeeded(str, MAX_LINE);


				printf("¿A que cuenta se transfiere el dinero?: ISBN ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &cuenta);
				fprintf(archivo,"Cuenta Bancaria: %s\n",&cuenta);

				fclose(archivo);
			}
		}else if(eleccion=='2'){
			system("cls");
			i++;
		}else{
			printf("Error");
		}

	}


}
void trabajadorInstructor(){		//Panel de opciones para crear trabajador o instructor
	char str[MAX_LINE];
	char eleccion;
	int i = 1;
	while(i==1){
		printf("\n1. Crear Trabajador\n");
		printf("2. Crear Instructor\n");
		printf("3. Atras\n");
		printf("\n");
		printf("Opcion? ->  ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &eleccion);
		if (eleccion == '1'){
			char str[MAX_LINE];
			char email;
			char dni;
			char contrasenya;
			char cuenta;
			char opcion;
			FILE * archivo = fopen("trabajadores.txt","a");
			if (archivo == NULL){
				perror("Error al crear el archivo");
				exit(1);
			}else{
				printf("\n");
				printf("DNI: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &dni);
				fprintf(archivo,"DNI: %s ",&dni);
				clearIfNeeded(str, MAX_LINE);

				printf("Email: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &email);
				fprintf(archivo,"Email: %s ",&email);
				clearIfNeeded(str, MAX_LINE);

				printf("Contraseña: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &contrasenya);
				fprintf(archivo,"Contraseña: %s ",&contrasenya);
				clearIfNeeded(str, MAX_LINE);


				printf("¿A que cuenta se transfiere el dinero?: ISBN ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &cuenta);
				fprintf(archivo,"Cuenta Bancaria: %s\n",&cuenta);

				fclose(archivo);
			}

		}else if (eleccion == '2'){
			char str[MAX_LINE];
			char nombre;
			char dir;
			char email;
			char dni;
			char contrasenya;
			char cuenta;
			char opcion;
			FILE * archivo = fopen("instructores.txt","a");
			if (archivo == NULL){
				perror("Error al crear el archivo");
				exit(1);
			}else{
				printf("\n");
				printf("Nombre: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &nombre);
				fprintf(archivo,"Nombre: %s ",&nombre);
				clearIfNeeded(str, MAX_LINE);

				printf("DNI: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &dni);
				fprintf(archivo,"DNI: %s ",&dni);
				clearIfNeeded(str, MAX_LINE);

				printf("Email: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &email);
				fprintf(archivo,"Email: %s ",&email);
				clearIfNeeded(str, MAX_LINE);

				printf("Contraseña: ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &contrasenya);
				fprintf(archivo,"Contraseña: %s ",&contrasenya);
				clearIfNeeded(str, MAX_LINE);

				printf("Direccion: ");
				fflush(stdout);
				fgets(str,MAX_LINE, stdin);
				sscanf(str, "%s", &dir);
				fprintf(archivo, "Direccion: %s",&dir);
				clearIfNeeded(str,MAX_LINE);


				printf("Cuenta Bancaria: ISBN ");
				fflush(stdout);
				fgets(str, MAX_LINE, stdin);
				sscanf(str, "%s", &cuenta);
				fprintf(archivo,"Cuenta Bancaria: %s\n",&cuenta);

				fclose(archivo);
			}


		}else if(eleccion=='3'){
			system("cls");
			i++;
		}else{
			printf("Error");
		}

	}


}
void listarTodo(){		//Funcion para que se elija que listar y listarlo por pantalla
	char str[MAX_LINE];
	char eleccion;
	int i = 1;
	while(i==1){
		printf("\n1. Listar Instructores\n");
		printf("2. Listar Torneos\n");
		printf("3. Listar Trabajadores\n");
		printf("4. Listar Socios\n");
		printf("5. Listar Actividades\n");
		printf("6. Atras\n");
		printf("\n");
		printf("Opcion? ->  ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &eleccion);
		if (eleccion == '1'){
			char aux;
			FILE * fichero;

			fichero = fopen("instructores.txt","r");
			if(fichero == NULL){
				printf("No se ha podido abrir el fichero. \n");
				exit(1);
			}
			while(aux != EOF){
				aux = fgetc(fichero);
				printf("%c",aux);
			}
			printf("\n");

			fclose(fichero);

			system("pause");
		}else if (eleccion == '2'){
			char aux;
			FILE * fichero;

			fichero = fopen("torneos.txt","r");
			if(fichero == NULL){
				printf("No se ha podido abrir el fichero. \n");
				exit(1);
			}
			while(aux != EOF){
				aux = fgetc(fichero);
				printf("%c",aux);
			}
			printf("\n");

			fclose(fichero);

			system("pause");
		}else if(eleccion == '3'){
			char aux;
			FILE * fichero;

			fichero = fopen("trabajadores.txt","r");
			if(fichero == NULL){
				printf("No se ha podido abrir el fichero. \n");
				exit(1);
			}
			while(aux != EOF){
				aux = fgetc(fichero);
				printf("%c",aux);
			}
			printf("\n");
			printf("\n");
			printf("\n");

			fclose(fichero);

			system("pause");
		}else if (eleccion == '4'){
			char aux;
			FILE * fichero;

			fichero = fopen("socios.txt","r");
			if(fichero == NULL){
				printf("No se ha podido abrir el fichero. \n");
				exit(1);
			}
			while(aux != EOF){
				aux = fgetc(fichero);
				printf("%c",aux);
			}
			printf("\n");
			printf("\n");
			printf("\n");

			fclose(fichero);

			system("pause");
		}else if (eleccion == '5'){
			char aux;
			FILE * fichero;

			fichero = fopen("actividades.txt","r");
			if(fichero == NULL){
				printf("No se ha podido abrir el fichero. \n");
				exit(1);
			}
			while(aux != EOF){
				aux = fgetc(fichero);
				printf("%c",aux);
			}
			printf("\n");
			printf("\n");
			printf("\n");

			fclose(fichero);

			system("pause");
		}else if(eleccion=='6'){
			system("cls");
			i++;
		}else{
			printf("Error");
		}

	}


}
void listaTorneoActividad(){		//Funcion para listar torneos y actividades
	char str[MAX_LINE];
	char eleccion;
	int i = 1;
	while(i==1){
		printf("\n1. Listar torneos\n");
		printf("2. Listar actividades\n");
		printf("3. Atras\n");
		printf("\n");
		printf("Opcion? ->  ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &eleccion);
		if (eleccion == '1'){
			char aux;
			FILE * fichero;

			fichero = fopen("torneos.txt","r");
			if(fichero == NULL){
				printf("No se ha podido abrir el fichero. \n");
				exit(1);
			}
			while(aux != EOF){
				aux = fgetc(fichero);
				printf("%c",aux);
			}
			printf("\n");
			printf("\n");
			printf("\n");

			fclose(fichero);

			system("pause");
		}else if (eleccion == '2'){
			char aux;
			FILE * fichero;

			fichero = fopen("actividades.txt","r");
			if(fichero == NULL){
				printf("No se ha podido abrir el fichero. \n");
				exit(1);
			}
			while(aux != EOF){
				aux = fgetc(fichero);
				printf("%c",aux);
			}
			printf("\n");
			printf("\n");
			printf("\n");

			fclose(fichero);

			system("pause");


		}else if(eleccion=='3'){
			system("cls");
			i++;
		}else{
			printf("Error");
		}

	}


}

char menu(){ //Menu principal de eleccion
		printf("\n\t\t %cBIENVENIDO AL POLIDEPORTIVO DE TUS SUE%cOS!",173,165);
		printf("\n\t\t  -----------------------------------------\n");
		printf("\n1. Iniciar sesi%cn como administrador\n", 162);
		printf("2. Iniciar sesi%cn como socio\n",162);
		printf("3. Iniciar sesi%cn como trabajador\n",162);
		printf("4. Registrarse como nuevo socio\n");
		printf("5. Salir\n");
		printf("\n");
		printf("\t%cQu%c opci%cn desea? ->  ",168, 130, 162);
		fflush(stdout);
		char linea[MAX_LINE];
		fgets(linea, MAX_LINE, stdin);
		clearIfNeeded(linea, MAX_LINE);
		return *linea;
}


char registrarSocio(){ //Registrar socio, en C++ haremos que una vez registrado, puedas iniciar sesion con el socio creado
	char str[MAX_LINE];
	char nombre;
	char apellidos;
	char email;
	char dni;
	char contrasenya;
	char cuenta;
	char opcion;
	FILE * archivo = fopen("socios.txt","a");
	if (archivo == NULL){
		perror("Error al crear el archivo");
		exit(1);
	}else{
		printf("\n");
		printf("Nombre: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &nombre);
		fprintf(archivo,"Nombre: %s ",&nombre);
		clearIfNeeded(str, MAX_LINE);

		printf("Apellidos: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &apellidos);
		fprintf(archivo,"Apellido: %s ",&apellidos);
		clearIfNeeded(str, MAX_LINE);

		printf("DNI: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &dni);
		fprintf(archivo,"DNI: %s ",&dni);
		clearIfNeeded(str, MAX_LINE);

		printf("Email: ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &email);
		fprintf(archivo,"Email: %s ",&email);
		clearIfNeeded(str, MAX_LINE);

		printf("Contrase%ca: ",164);
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &contrasenya);
		fprintf(archivo,"Contraseña: %s ",&contrasenya);
		clearIfNeeded(str, MAX_LINE);


		printf("Cuenta Bancaria: ISBN ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &cuenta);
		fprintf(archivo,"Cuenta Bancaria: %s\n",&cuenta);

		fclose(archivo);
	}
}


char menuAdministrador(){ //cambiar por los valores que queramos introducir
		printf("\n1. Crear socios\n");
		printf("2. Crear trabajadores/instructores\n");
		printf("3. Crear torneos\n");
		printf("4. Despedir trabajador/instructores\n");
		printf("5. Desapuntar socio\n");
		printf("6. Borrar torneo\n");
		printf("7. Gestionar actividades\n");
		printf("8. Ver lista de torneos/actividad/socios/instructores\n");
		printf("9. Salir\n");
		printf("\n");
		printf("\t%cQu%c opci%cn desea? ->  ",168, 130, 162);

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
	printf("\t%cQu%c opci%cn desea? ->  ",168, 130, 162);

	fflush(stdout);
	char linea[MAX_LINE];
	fgets(linea, MAX_LINE, stdin);
	clearIfNeeded(linea, MAX_LINE);
	return *linea;


}

char menuTrabajador(){ ///cambiar por los valores que queramos introducir
	printf("\n1. Apuntar a socio\n");
	printf("2. Desapuntar socio\n");
	printf("3. Asignar/Desasignar socio a torneo\n");
	printf("4. Asignar/Desasignar socio a actividad\n");
	printf("5.Ver lista de torneos/actividades\n");
	printf("6. Salir\n");
	printf("\n");
	printf("\t%cQu%c opci%cn desea? ->  ",168, 130, 162);

	fflush(stdout);
	char linea[MAX_LINE];
	fgets(linea, MAX_LINE, stdin);
	clearIfNeeded(linea, MAX_LINE);
	return *linea;


}

void logIn(){		//Funcion para loguearse como admin,socio y trabajador
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
			printf("\n\t\t\t INICIAR SESI%cN EN EL POLIDEPORTIVO\n", 224);
			printf("\t\t\t **********************************\n");
			printf("\n\t USUARIO: ");
			fflush(stdout);

			fgets(usuario, Longitud, stdin);
			clearIfNeeded(usuario, Longitud);
			usuario[strcspn(usuario, "\r\n")] = 0;

			printf("\t CONTRASE%cA: ", 165);
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
			printf("\n");

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
			system("cls");
			printf("\n\t %cBienvenido al sistema como administrador!\n", 173);
			while(1){
				switch (menuAdministrador()){
						case '1':
								socio();
								break;
						case '2':
								trabajadorInstructor();
								break;

						case '3':
								torneo();
								break;

						case '4':
								printf("Implementar en C++");
								break;
						case '5':
								printf("Implementar en C++");
								break;
						case '6':
								printf("Implementar en C++");
								break;
						case '7':
								actividad();
								break;

						case '8':
								listarTodo();
								break;

						case '9':
								system("cls");
								main();
								break;
								exit(0);


					}

				}

	    }else if(ingresaSocio==1){
	    	system("cls");
	        printf("\n\t %cBienvenido al sistema como socio!\n", 173);
	        while(1){
	        	switch (menuSocio()){
	        		case '1':
	        				printf("Implementar en C++");
	        				break;
	        		case '2':
	        				printf("Implementar en C++");
	        				break;
	        		case '3':
	        				listaTorneoActividad();
	        				break;
	        		case '4':

	        				break;
	        		case '5':
	        				system("cls");
	        				main();
	        				break;
	        				exit(0);


	        	}
	        }


	    }else if(ingresaTrabajador==1){
	    	system("cls");
	        printf("\n\t %cBienvenido al sistema como trabajador!\n",173);
	        while(1){
		        switch (menuTrabajador()){
		        		case '1':
		        				socio();
		        				break;

		        		case '2':
		        				printf("Implementar en C++");
		        				break;
		        		case '3':
		        				printf("Implementar en C++");
		        				break;
		        		case '4':
		        				printf("Implementar en C++");
		        				break;
		        		case '5':
		        				listaTorneoActividad();
		        				break;

		        		case'6':
	        					system("cls");
		        				main();
		        				break;
		        				exit(0);

		        	}
	        }



		}else{
			printf("\n\t Has sobrepasado el n%cmero m%cximo de intentos\n", 163, 160);

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


			case '5':
					system("cls");
					printf("\n%cVUELVA PRONTO!\n", 173);
					break;
	}
}


