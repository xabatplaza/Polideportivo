#include "actividad.h"
#include "instructor.h"
#include "socio.h"
#include "torneo.h"
#include "trabajador.h"
#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Usuario "admin1" //Si quieres iniciar sesion como administrador
#define Clave "1234"     //Contraseña para iniciar como administrador
#define Email "socio1@gmail.com" //Usuario para iniciar sesion como socio
#define DNI "11111111A"			 //Usuario para iniciar sesion como trabajador
#define Contrasenya "123456789"  //Contraseña para iniciar sesion como socio y trabajador
#define Longitud 80
#define MAX_LINE 500
#define MAX_LINE_INT 4

void menuCrearTodo(){
	char str[MAX_LINE];
	char eleccion;
	int i = 1;
	while(i==1){
		printf("\n1. Crear socios\n"); //Crear socios, trabajador, torneo, instructor o actividad
		printf("2. Crear trabajador\n");
		printf("3. Crear instructor\n");
		printf("4. Crear torneo\n");
		printf("5. Crear actividad\n");
		printf("6. Atras\n");
		printf("\n");
		printf("Opcion? ->  ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &eleccion);
		if (eleccion == '1'){
			crearSocio();
		}else if (eleccion == '2'){
			crearTrabajador();
		}else if(eleccion=='3'){
			crearInstructor();
		}else if(eleccion == '4'){
			crearTorneo();
		}else if (eleccion == '5'){
			crearActividad();
		}else if(eleccion =='6'){
			system("cls");
			i++;
		}else{
			printf("Error");
		}

	}


}

void menuDespedir(){		//Panel de opciones para crear trabajador o instructor
	char str[MAX_LINE];
	char eleccion;
	int i = 1;
	while(i==1){
		printf("\n1. Borrar a los socios\n");
		printf("2. Despedir a los instructor\n");
		printf("3. Despedir a los trabajador\n");
		printf("4. Eliminar torneos\n");
		printf("5. Atras\n");
		printf("\n");
		printf("Opcion? ->  ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &eleccion);
		if (eleccion == '1'){
			menuQuitarSocio();
			system("cls");
		}else if (eleccion == '2'){
			menuDespedirInstructor();
		}else if(eleccion=='3'){
			menuDespedirTrabajador();
			system("cls");
		}
		else if(eleccion=='4'){
			menuBorrarTorneo();
			system("cls");
		}else if(eleccion =='5'){
			system("cls");
			i++;
		}else{
			printf("Error");
		}

	}


}

char menuBaseDatos(){
	char str[MAX_LINE];
	char eleccion;
	int i = 1;
	while(i==1){
		eleccion = '0';
		printf("\n1. Insertar Datos\n");
		printf("2. Mostrar Datos\n");
		printf("3. Borrar datos\n");//Desasignar
		printf("4. Cerrar Base de datos\n");//Desasignar
		printf("5. Salir\n");
		printf("\n");
		printf("\t%cQu%c opci%cn desea? ->  ",168, 130, 162);

		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &eleccion);
		if(eleccion =='1'){
			insertar();
		}else if(eleccion == '2'){
			hacerElShow();
		}else if(eleccion == '3'){
			hacerElDelete();
		}else if(eleccion == '4'){
			hacerElClose();
		}else if(eleccion == '5'){
			system("cls");
			i++;
		}else if (eleccion == '0'){
			system("cls");
		}else{
			printf("Eleccion incorrecta");
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
			crearTrabajador();
		}else if (eleccion == '2'){
			crearInstructor();
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
			listarInstructor();
		}else if (eleccion == '2'){
			listarTorneos();
		}else if(eleccion == '3'){
			listarTrabajadores();
		}else if (eleccion == '4'){
			listarSocios();
		}else if (eleccion == '5'){
			listarActividad();
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
			listarTorneos();
		}else if (eleccion == '2'){
			listarActividad();
		}else if(eleccion=='3'){
			system("cls");
			i++;
		}else{
			printf("Error");
		}

	}


}
void menuObjetos(){
	char str[MAX_LINE];
	char eleccion;
	int i = 1;
	while(i==1){
		printf("\n1. Crear raquetas\n");
		printf("2. Crear Pelotas\n");
		printf("3. Atras\n");
		printf("\n");
		printf("Opcion? ->  ");
		fflush(stdout);
		fgets(str, MAX_LINE, stdin);
		sscanf(str, "%s", &eleccion);
		if (eleccion == '1'){
			system("cls");
			crearUnaNuevaRaqueta();
			i++;
			system("cls");
		}else if (eleccion == '2'){
			system("cls");
			crearUnaNuevaPelota();
			i++;
			system("cls");
		}else if(eleccion=='3'){
			system("cls");
			i++;
		}else{
			printf("Error");
		}

	}

}

char menuExterno(){
	system("cls");

		printf("1. Registrar Agente Externo \n");
		printf("2. Mostrar informaci%cn de todos los usuarios \n", 162);
		printf("3. Salir\n");
		printf("\n");
		printf("\t%cQu%c opci%cn desea? ->  ",168, 130, 162);
		fflush(stdout);
		char linea[MAX_LINE];
		fgets(linea, MAX_LINE, stdin);
		return *linea;
}

char menuExternoInicio(){


		printf("1. Borrar usuario \n");
		printf("2. Actualizar datos del usuario \n");
		printf("3. Salir\n");
		printf("\n");
		printf("\t%cQu%c opci%cn desea? ->  ",168, 130, 162);
		fflush(stdout);
		char linea[MAX_LINE];
		fgets(linea, MAX_LINE, stdin);
		return *linea;
}

char menu(){ //Menu principal de eleccion
		system("cls");
		printf("\n\t\t %cBIENVENIDO AL POLIDEPORTIVO DE TUS SUE%cOS!",173,165);
		printf("\n\t\t  -----------------------------------------\n");
		printf("\n1. Iniciar sesi%cn como administrador\n", 162);
		printf("2. Iniciar sesi%cn como socio\n",162);
		printf("3. Iniciar sesi%cn como trabajador\n",162);
		printf("4. Iniciar sesi%cn como Agente externo del gimnasio\n",162);
		printf("5. Registrarse como nuevo socio\n");
		printf("6. Registrarse como Agente externo del gimnasio\n");
		printf("7. Salir\n");
		printf("\n");
		printf("\t%cQu%c opci%cn desea? ->  ",168, 130, 162);
		fflush(stdout);
		char linea[MAX_LINE];
		fgets(linea, MAX_LINE, stdin);
		return *linea;
}


char menuAdministrador(){ //cambiar por los valores que queramos introducir
	printf("\n1. Crear socios, trabajador, torneo, instructor o actividad\n");
	printf("2. Desapuntar socio/Despedir instructor/Despedir trabajador/Borrar torneo\n");//FICHEROS
	printf("3. Ver lista de torneos/actividad/socios/instructores\n");
	printf("4. Crear Objetos\n");
	printf("5. Salir\n");
	printf("\n");
	printf("\t%cQu%c opci%cn desea? ->  ",168, 130, 162);

	fflush(stdout);
	char linea[MAX_LINE];
	fgets(linea, MAX_LINE, stdin);
	return *linea;
	}

char menuSocio(){
	system("cls");///cambiar por los valores que queramos introducir
	printf("\n1. Apuntarse a actividad\n");
	printf("2. Apuntarse a torneo\n");
	printf("3. Ver lista de torneos/actividades\n");
	printf("4. Enviar queja\n");
	printf("5. Salir\n");
	printf("\n");
	printf("\t%cQu%c opci%cn desea? ->  ",168, 130, 162);

	fflush(stdout);
	char linea[MAX_LINE];
	fgets(linea, MAX_LINE, stdin);
	return *linea;


}

char menuTrabajador(){ ///cambiar por los valores que queramos introducir
	printf("\n1. Apuntar a socio\n");
	printf("2. Acceder a la base de datos\n");
	printf("3. Asignar socio a actividad\n");//Desasignar
	printf("4. Asignar socio a torneo\n");//Desasignar
	printf("5.Ver lista de torneos/actividades\n");
	printf("6. Salir\n");
	printf("\n");
	printf("\t%cQu%c opci%cn desea? ->  ",168, 130, 162);

	fflush(stdout);
	char linea[MAX_LINE];
	fgets(linea, MAX_LINE, stdin);
	return *linea;


}

void mostrarQuejas(){
	  int p ;
	  printf("\nIndique el n%cmero total de quejas que desea realizar: ", 163);
	  scanf("%d", &p);

	  char (*palabras)[100];
	  palabras = (char(*)[100]) malloc(p * sizeof(char[100]));
	  int y = 0;
	  while (y < p) {
			printf("Teclea una palabra: ");
			fflush(stdin);
			scanf("%[^\n]", palabras[y]);
			printf("\n");
			y++;
		}
	   int i;
	   for (i = 0;i < p;i++)  {
			printf("%s \n", palabras[i]);
		}
	   printf("\n%cEsperamos solucionar sus problemas lo antes posible, muchas gracias!", 173);
	   free(palabras);
	   palabras= NULL;

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
								system("cls");
								menuCrearTodo();
								break;
						case '2':
								system("cls");
								menuDespedir();
								break;
						case '3':
								listarTodo();
								break;
						case '4':
								system("cls");
								menuObjetos();
								break;
						case '5':
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
	        				system("cls");
	        				listarActividad();
	        				apuntarSocioActividad();
	        				break;
	        		case '2':
	        				system("cls");
	        				listarTorneos();
	        				apuntarSocioTorneo();
	        				break;
	        		case '3':
	        				listaTorneoActividad();
	        				break;
	        		case '4':
	        				mostrarQuejas(); //socio1@gmail.com

	        				exit(0);
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
		        				crearSocio();
		        				break;

		        		case '2':
		        				system("cls");
		        				menuBaseDatos();
		        				break;
		        		case '3':
		        				system("cls");
		        				listarActividad();
		        				apuntarSocioActividad();
		        				break;
		        		case '4':
		        				system("cls");
		        				listarTorneos();
		        				apuntarSocioTorneo();
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


