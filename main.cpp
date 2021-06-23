extern "C"{
#include "actividad.h"
#include "instructor.h"
#include "socio.h"
#include "torneo.h"
#include "trabajador.h"
#include "menu.h"
#include "sqlite3.h"

}

#include "BD.h"
#include "BDPersonaE.h"
#include "PersonaExterna.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;


int main(){

	sqlite3 *db;
		int result;
		int ingresaUsuario;

		result = sqlite3_open("test.sqlite", &db);
		if (result != SQLITE_OK) {
			printf("Error opening database\n");
			return result;
		}

	PersonaExterna p;

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

				setlocale(LC_ALL, "");

				system("cls");
				cout << endl;
				cout << "     " << "INICIAR SESIÓN EN EL POLIDEPORTIVO" << endl;
				cout << "     " << "**********************************" << endl;
				cout << endl;
				cout << "  EMAIL: " ;
				char emailPersonaE[15];
				cin >> emailPersonaE;
				cout << endl;

				cout << "  CONTRASEÑA: ";
				char contrasenyaPersonaE[15];
				cin >> contrasenyaPersonaE;

				p.setEMail(emailPersonaE);
				p.setContrasenya(contrasenyaPersonaE);

				result= confirmarPersonaE(db, p);


				if (!result) {
					printf("This isn't your account\n");
					printf("%s\n", sqlite3_errmsg(db));
					return result;
					ingresaUsuario=0;

				}

				cout << "Sesion iniciada" << endl;

				ingresaUsuario=1;

		//	if(ingresaUsuario==1){
				while(ingresaUsuario==1){
				char eleccion2;

					eleccion2 = menuExternoInicio();
								switch (eleccion2) {

											case '1':

												setlocale(LC_ALL, "");
												system("cls");
												cout << endl;
												cout << "  EMAIL: " ;
												char emailPersonaE2[15];
												cin >> emailPersonaE2;
												cout << endl;

												cout << "  CONTRASEÑA: ";
												char contrasenyaPersonaE2[15];
												cin >> contrasenyaPersonaE2;

												p.setEMail(emailPersonaE2);
												p.setContrasenya(contrasenyaPersonaE2);

												result= borrarUsuarioP(db, p);
												mostrarUBorrar(db);

												break;

											case '2':

												system("cls");
												setlocale(LC_ALL, "");
												cout << endl;
												cout << "Escribe tu correo electrónico: " << endl;
												char emailU[15];
												cin >> emailU;

												cout << endl;
												cout << "Escribe tu contraseña: " << endl;
												char contrasenyaU[15];
												cin >> contrasenyaU;


												p.setEMail(emailU);
												p.setContrasenya(contrasenyaU);


												result= updatePersonaE(db, p);

												cout << "Persona externa actualizada" << endl;

												if (result != SQLITE_OK) {
													printf("Error creating personaE \n");
													printf("%s\n", sqlite3_errmsg(db));
													return result;
												}

												mostrarUnoP(db, p);

												break;

											case '3':

												main();
												break;

							}
					//}
				}

					break;

			case '5':
					crearSocio();
					break;
			case '6':

					char eleccion;
					eleccion = menuExterno();
								switch (eleccion) {

									case '1':

										setlocale(LC_ALL, "");
										cout << endl;
										cout << "Escribe tu nombre: " << endl;
										char nombre[15];
										cin >> nombre;

										cout << endl;
										cout << "Escribe tu correo electrónico: " << endl;
										char email[15];
										cin >> email;

										cout << endl;
										cout << "Escribe tu contraseña: " << endl;
										char contrasenya[15];
										cin >> contrasenya;

										cout << endl;
										cout << "Escribe el puesto de trabajo que vas a ocupar: " << endl;
										char puestoTrabajo[15];
										cin >> puestoTrabajo;

										p.setNombre(nombre);
										p.setEMail(email);
										p.setContrasenya(contrasenya);
										p.setPuestoTrabajo(puestoTrabajo);

										result= crearPersonaE(db, p);

										cout << "Persona externa guardada" << endl;

										if (result != SQLITE_OK) {
											printf("Error creating personaE \n");
											printf("%s\n", sqlite3_errmsg(db));
											return result;
										}

										break;

									case '2':

										mostrartodoP(db);
										break;

									case '3':
										main();
										break;

								}
						break;

				case '7':

						system("cls");
						printf("\n%cVUELVA PRONTO!\n", 173);
						exit(0);
						break;
	}

	return 0;
}
