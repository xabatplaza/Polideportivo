#include <iostream>
#include <string.h>

#include "despedir.h"

#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>

using namespace std;
void quitarSocio(){
	int clave;
	string Bclave;
	char nombre[30];
	string texto;
	ofstream Guardar;
	ifstream Leer;
	ofstream Temp;
	Leer.open("socios.txt");
	Temp.open("socio.txt");
	Leer>>nombre;
	bool encontrado = false;
	cout<<"Ingrese el dni de la persona que se quiera eliminar:"<<endl;
	cin>>Bclave;
	while(!Leer.eof()){
		 //Leer>>clave;
		getline(Leer,texto);
			 if(clave=texto.find(Bclave,0)!= (string::npos)){
				 encontrado = true;
				 cout<<endl;
				 cout<<"Eliminado"<<endl;

			 }
			 else{
				 Temp<<nombre<<" "<<clave<<endl;
			 }
		 }if(encontrado == false){
			 cout<<"Clave no encontrada"<<endl;
			 quitarSocio();
		 }
		 Leer.close();
		 Temp.close();
		 rename("socios.txt", "socios.txt");

}
void quitarTodosLosSocios(){
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

void borrarTorneo(){
	int clave;
	string Bclave;
	char nombre[30];
	string texto;
	ofstream Guardar;
	ifstream Leer;
	ofstream Temp;
	Leer.open("torneos.txt");
	Temp.open("torneos.txt");
	Leer>>nombre;
	bool encontrado = false;
	cout<<"Ingrese la clave del torneo a eliminar:"<<endl;
	cin>>Bclave;
	while(!Leer.eof()){
		 //Leer>>clave;
		getline(Leer,texto);
			 if(clave=texto.find(Bclave,0)!= (string::npos)){
				 encontrado = true;
				 cout<<endl;
				 cout<<"Eliminado"<<endl;

			 }
			 else{
				 Temp<<nombre<<" "<<clave<<endl;
			 }
		 }if(encontrado == false){
			 cout<<"Clave no encontrada"<<endl;
			 borrarTorneo();
		 }
		 Leer.close();
		 Temp.close();
		 rename("torneos.txt", "torneos.txt");
}
void borrarTodosLosTorneos(){
	remove("torneos.txt");
	exit(0);
}

extern "C" void menuBorrarTorneo(){
	string opcion;
	cout << "\n1. Borrar Torneo \n" << endl;
	cout << "1. Borra un torneo\n" << endl;
	cout << "2. Borrar todos los torneos\n" << endl;
	cout << "\nIngrese una opcion: " << endl;
	cin >> opcion;
	int i = 1;
	while(i=1){
		if (opcion == "1"){
			borrarTorneo();
		}else if (opcion == "2"){
			borrarTodosLosTorneos();
		}else{
			cout << "Error" << endl;
			menuBorrarTorneo();
		}
	}
}
void despedirInstructor(){
	int clave;
	string Bclave;
	char nombre[30];
	string texto;
	ofstream Guardar;
	ifstream Leer;
	ofstream Temp;
	Leer.open("instructores.txt");
	Temp.open("instructores.txt");
	Leer>>nombre;
	bool encontrado = false;
	cout<<"Ingrese el DNI de la persona que se va a despedir:"<<endl;
	cin>>Bclave;
	while(!Leer.eof()){
		 //Leer>>clave;
		getline(Leer,texto);
			 if(clave=texto.find(Bclave,0)!= (string::npos)){
				 encontrado = true;
				 cout<<endl;
				 cout<<"Eliminado"<<endl;

			 }
			 else{
				 Temp<<nombre<<" "<<clave<<endl;
			 }
		 }if(encontrado == false){
			 cout<<"Clave no encontrada"<<endl;
			 despedirInstructor();
		 }
		 Leer.close();
		 Temp.close();
		 rename("instructores.txt", "instructores.txt");

}
void despedirTodosLosIntructores(){
	remove("instructores.txt");
	exit(0);
}

extern "C" void menuDespedirInstructor(){
	string opcion;
	cout << "\n1. Despedir Instructor \n" << endl;
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
			menuBorrarTorneo();
		}
	}
}
void despedirTrabajador()
{
	int clave;
	string Bclave;
	char nombre[30];
	string texto;
	ofstream Guardar;
	ifstream Leer;
	ofstream Temp;
	Leer.open("instructores.txt");
	Temp.open("instructores.txt");
	Leer>>nombre;
	bool encontrado = false;
	cout<<"Ingrese el DNI del trabajador que se va a despedir:"<<endl;
	cin>>Bclave;
	while(!Leer.eof()){
		 //Leer>>clave;
		getline(Leer,texto);
			 if(clave=texto.find(Bclave,0)!= (string::npos)){
				 encontrado = true;
				 cout<<endl;
				 cout<<"Eliminado"<<endl;

			 }
			 else{
				 Temp<<nombre<<" "<<clave<<endl;
			 }
		 }if(encontrado == false){
			 cout<<"Clave no encontrada"<<endl;
			 despedirTrabajador();
		 }
		 Leer.close();
		 Temp.close();
		 rename("trabajadores.txt", "trabajadores.txt");
}

void despedirTodosLosTrabajadores(){
	/*FILE * archivo = fopen("trabajadores.txt","a");
	fclose(archivo);*/
	remove("trabajadores.txt");
	exit(0);
}


extern "C" void menuDespedirTrabajador(){
	string opcion;
	cout << "\n1. Despedir Trabajador \n" << endl;
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

