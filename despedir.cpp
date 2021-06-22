#include <iostream>
#include <string.h>

#include "despedir.h"

#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>

using namespace std;

extern "C" void quitarSocio(){
	char nombre[20], apellidos[20], dni[20], email[20], contrasenya[20], cuentaBancaria[20];

	char no[8] = "Nombre:";

	ifstream salida;
	salida.open("socios.txt", ios::in);

	ofstream entrada;
	entrada.open("temp.txt", ios::out);

	if (salida.fail()) {
		cout<< "Hubo un error al abrir el archivo socios.txt";
		getch();
	}else
	{
		char aux[20];
		cout<< "Introduzca el nombre: ";
		cin>>aux;
		strcat(no,aux);
		strcpy(aux,no);

		salida>>nombre;

		while(!salida.eof()){
			salida>>apellidos>>dni>>email>>contrasenya>>cuentaBancaria;

			if (strcmp(aux,nombre)==0) {
				cout<< "Se ha eliminado";
				getch();
			}else{
				entrada<<" "<<nombre<<" "<<apellidos<<" "<<dni<<" "<<email<<" "<<contrasenya<<" "<<cuentaBancaria<<endl;
			}
			salida>>nombre;
		}

		entrada.close();
		salida.close();
		remove("socios.txt");
		rename("temp.txt", "socios.txt");
		exit(0);
	}
}

extern "C" void quitarTodosLosSocios(){
	remove("socios.txt");
	exit(0);
}
extern "C" void menuQuitarSocio(){


	cout << "\nQuitar Socio \n" << endl;
	cout << "1. Borra un socio\n" << endl;
	cout << "2. Borrar a todos los socios\n" << endl;
	string opcion;
	cout << "\nIngrese una opcion: " << endl;
	cin >> opcion;
	int i = 1;
	while (i=1){
		if (opcion == "1"){
			quitarSocio();
			i++;
		}else if (opcion == "2"){
			quitarTodosLosSocios();
			i++;
		}else{
			cout << "Error" << endl;
			i++;

		}
	}
}

extern "C" void borrarTorneo(){
	char nombre[20], participantes[20], direccion[20], fecha[20];

		char no[15] = "Nombre_Torneo:";

		ifstream salida;
		salida.open("torneos.txt", ios::in);

		ofstream entrada;
		entrada.open("tempTr.txt", ios::out);

		if (salida.fail()) {
			cout<< "Hubo un error al abrir el archivo torneos.txt";
			getch();
		}else
		{
			char aux[20];
			cout<< "Introduzca el nombre del torneo: ";
			cin>>aux;
			strcat(no,aux);
			strcpy(aux,no);

			salida>>nombre;

			while(!salida.eof()){
				salida>>participantes>>direccion>>fecha;

				if (strcmp(aux,nombre)==0) {
					cout<< "Se ha eliminado";
					getch();
				}else{
					entrada<<" "<<nombre<<" "<<participantes<<" "<<direccion<<" "<<fecha<<endl;
				}
				salida>>nombre;
			}

			entrada.close();
			salida.close();
			remove("torneos.txt");
			rename("tempTr.txt", "torneos.txt");
			exit(0);
		}
}
extern "C" void borrarTodosLosTorneos(){
	remove("torneos.txt");
	exit(0);
}

extern "C" void menuBorrarTorneo(){
	string opcion;
	cout << "\n Borrar Torneo \n" << endl;
	cout << "1. Borra un torneo\n" << endl;
	cout << "2. Borrar todos los torneos\n" << endl;
	cout << "\nIngrese una opcion: " << endl;
	cin >> opcion;
	int i = 1;
	while(i=1){
		if (opcion == "1"){
			borrarTorneo();
			i++;
		}else if (opcion == "2"){
			borrarTodosLosTorneos();
			i++;
		}else{
			cout << "Error" << endl;
			i++;
		}
	}
}
extern "C" void despedirInstructor(){
	char nombre[20], dni[20], email[20], contrasenya[20], dir[20], cuentaBancaria[20];

	char no[8] = "Nombre:";

		ifstream salida;
		salida.open("instructores.txt", ios::in);

		ofstream entrada;
		entrada.open("tempI.txt", ios::out);

		if (salida.fail()) {
			cout<< "Hubo un error al abrir el archivo instructores.txt";
			getch();
		}else
		{
			char aux[20];
			cout<< "Introduzca el nombre: ";
			cin>>aux;
			strcat(no,aux);
			strcpy(aux,no);


			salida>>nombre;

			while(!salida.eof()){
				salida>>dni>>email>>contrasenya>>dir>>cuentaBancaria;

				if (strcmp(aux,nombre)==0) {
					cout<< "Se ha eliminado";
					getch();
				}else{
					entrada<<nombre<<" "<<dni<<" "<<email<<" "<<contrasenya<<" "<<dir<<" "<<cuentaBancaria<<endl;
				}
				salida>>nombre;
			}

			entrada.close();
			salida.close();
			remove("instructores.txt");
			rename("tempI.txt", "instructores.txt");
			exit(0);
		}
}
extern "C" void despedirTodosLosIntructores(){
	remove("instructores.txt");
	exit(0);
}

extern "C" void menuDespedirInstructor(){
	string opcion;
	cout << "\nDespedir Instructor \n" << endl;
	cout << "1. Despedir un instructor\n" << endl;
	cout << "2. Despedir a todos los instructores\n" << endl;
	cout << "\nIngrese una opcion: " << endl;

	cin >> opcion;
	int i = 1;
	while(i==1){
		if (opcion == "1"){
			despedirInstructor();
		}else if (opcion == "2"){
			despedirTodosLosIntructores();
		}else{
			cout << "Error" << endl;
		}
	}
}
void despedirTrabajador()
{
	char dni[20], email[20], contrasenya[20], cuentaBancaria[20];
		int sueldo[20];

		char no[8] = "DNI:";

		ifstream salida;
		salida.open("trabajadores.txt", ios::in);

		ofstream entrada;
		entrada.open("tempT.txt", ios::out);

		if (salida.fail()) {
			cout<< "Hubo un error al abrir el archivo trabajadores.txt";
			getch();
		}else
		{
			char aux[20];
			cout<< "Introduzca el DNI: ";
			cin>>aux;
			strcat(no,aux);
			strcpy(aux,no);

			salida>>dni;

			while(!salida.eof()){
				salida>>email>>contrasenya>>cuentaBancaria;

				if (strcmp(aux,dni)==0) {
					cout<< "Se ha eliminado";
					getch();
				}else{
					entrada<<dni<<" "<<email<<" "<<contrasenya<<" "<<cuentaBancaria<<endl;
				}
				salida>>dni;
			}

			entrada.close();
			salida.close();
			remove("trabajadores.txt");
			rename("tempT.txt", "trabajadores.txt");
			exit(0);
		}
}

extern "C" void despedirTodosLosTrabajadores(){
	/*FILE * archivo = fopen("trabajadores.txt","a");
	fclose(archivo);*/
	remove("trabajadores.txt");
	exit(0);
}


extern "C" void menuDespedirTrabajador(){
	string opcion;
	cout << "\nDespedir Trabajador \n" << endl;
	cout << "1. Despedir un trabajador\n" << endl;
	cout << "2. Despedir a toda la plantilla\n" << endl;
	cout << "\nIngrese una opcion: " << endl;


	cin >> opcion;
	int i = 1;
	while(i=1){
		if (opcion == "1"){
			despedirTrabajador();
		}else if (opcion == "2"){
			despedirTodosLosTrabajadores();
		}else{
			cout << "Error" << endl;
		}
	}
}

