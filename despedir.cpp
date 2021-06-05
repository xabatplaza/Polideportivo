#include <iostream>
#include <string.h>

#include "despedir.h"

#include <stdlib.h>
#include <fstream>

using namespace std;

void Despedir::menuQuitarSocio(){
	cout << "\n1. Quitar Socio \n" << endl;
	cout << "1. Borra un socio\n" << endl;
	cout << "2. Borrar a todos los socios\n" << endl;
	cout << "\nIngrese una opcion: " << endl;

	int opcion;
	cin >> opcion;

	if (opcion == '1'){
		void quitarSocio();
	}else if (opcion == '2'){
		void quitarTodosLosSocios();
	}else{
		cout << "Error" << endl;
		menuQuitarSocio();
	}
}

void Despedir::quitarSocio(){
	int clave, Bclave;
	char nombre[30];
	ofstream Guardar;
	ifstream Leer;
	ofstream Temp;
	Leer.open("socios.txt");
	Temp.open("Temp.txt");
	Leer>>nombre;
	bool encontrado = false;
	cout<<"Ingrese el dni de la persona que se quiera eliminar:"<<endl;
	cin>>Bclave;
	while(!Leer.eof()){
		 Leer>>clave;
			 if(clave==Bclave){
				 encontrado = true;
				 cout<<"Nombre->"<<nombre<<endl;
				 cout<<endl;
				 cout<<"Eliminado"<<endl;

			 }
			 else{
				 Temp<<nombre<<" "<<clave<<endl;
			 }
		 Leer>>nombre;
		 }if(encontrado == false){
			 cout<<"Clave no encontrada"<<endl;
			 quitarSocio();
		 }
		 Leer.close();
		 Temp.close();
		 remove("socios.txt");
		 rename("Temp.txt", "socios.txt");
}
void Despedir::quitarTodosLosSocio(){
	remove("socios.txt");
	exit(0);
}

void Despedir::menuBorrarTorneo(){
	cout << "\n1. Borrar Torneo \n" << endl;
	cout << "1. Borra un torneo\n" << endl;
	cout << "2. Borrar todos los torneos\n" << endl;
	cout << "\nIngrese una opcion: " << endl;

	int opcion;
	cin >> opcion;
	if (opcion == '1'){
		void borrarTorneo();
	}else if (opcion == '2'){
		void borrarTodosLosTorneos();
	}else{
		cout << "Error" << endl;
		menuBorrarTorneo();
	}
}
void Despedir::borrarTorneo(){
	int clave;
	char Bclave;
	char nombre[30];
	ofstream Guardar;
	ifstream Leer;
	ofstream Temp;
	Leer.open("torneos.txt");
	Temp.open("Temp.txt");
	Leer>>nombre;
	bool encontrado = false;
	cout<<"Ingrese la clave a eliminar"<<endl;
	cin>>Bclave;
	while(!Leer.eof())
		 {
		 Leer>>clave;
		 	 if(clave==Bclave){
		 		 encontrado = true;
		 		 cout<<"Nombre..."<<nombre<<endl;
		 		 cout<<endl;
		 		 cout<<"Eliminado"<<endl;
		 	 }else{
		 		 Temp<<nombre<<" "<<clave<<endl;
		 	 }
		 Leer>>nombre;
		}if(encontrado == false){
				 cout<<"Clave no encontrada"<<endl;
				 borrarTorneo();
			 }
			 Leer.close();
			 Temp.close();
			 remove("torneos.txt");
			 rename("Temp.txt", "torneos.txt");
}
void Despedir::borrarTodosLosTorneos(){
	remove("torneos.txt");
	exit(0);
}

void Despedir::menuDespedirInstructor(){
	cout << "\n1. Despedir Instructor \n" << endl;
	cout << "1. Despedir un instructor\n" << endl;
	cout << "2. Despedir a todos los instructores\n" << endl;
	cout << "\nIngrese una opcion: " << endl;

	int opcion;
	cin >> opcion;
	if (opcion == '1'){
		void despedirInstructor();
	}else if (opcion == '2'){
		void despedirTodosLosInstructores();
	}else{
		cout << "Error" << endl;
		menuBorrarTorneo();
	}
}
void Despedir::despedirInstructor(){

	int clave;
	char Bclave;
	char nombre[30];
	 ofstream Guardar;
	 ifstream Leer;
	 ofstream Temp;
	 Leer.open("instructores.txt");
	 Temp.open("Temp.txt");
	 Leer>>nombre;
	 bool encontrado = false;
	 cout<<"Ingrese el dni de la persona que se va ad despedir"<<endl;
	 cin>>Bclave;
	 while(!Leer.eof()){
		 Leer>>clave;
		 if(clave==Bclave){
			 encontrado = true;
			 cout<<"Nombre ->"<<nombre<<endl;
			 cout<<endl;
			 cout<<"Eliminado"<<endl;
		 } else{
			 Temp<<nombre<<" "<<clave<<endl;
		 }
		 Leer>>nombre;
	 }if(encontrado == false){
		 cout<<"Clave no encontrada"<<endl;
		 despedirInstructor();
	 }
	Leer.close();
	Temp.close();
	remove("instructores.txt");
	rename("Temp.txt", "instructores.txt");

}
void Despedir::despedirTodosLosIntructores(){
	remove("instructores.txt");
	exit(0);
}

void Despedir::menuDespedirTrabajador(){
	cout << "\n1. Despedir Trabajador \n" << endl;
	cout << "1. Despedir un trabajador\n" << endl;
	cout << "2. Despedir a toda la plantilla\n" << endl;
	cout << "\nIngrese una opcion: " << endl;

	int opcion;
	cin >> opcion;

	if (opcion == '1'){
		void despedirTrabajador();
	}else if (opcion == '2'){
		void DespedirTodosLosTrabajadores();
	}else{
		cout << "Error" << endl;
	}
}

void Despedir::despedirTrabajador()
{
	 int clave, Bclave;
	 char nombre[30];
	 ofstream Guardar;
	 ifstream Leer;
	 ofstream Temp;
	 Leer.open("trabajadores.txt");
	 Temp.open("Temp.txt");
	 Leer>>nombre;
	 bool encontrado = false;
	 cout<<"Ingrese la clave a eliminar"<<endl;
	 cin>>Bclave;
	 while(!Leer.eof())
	 {
		 Leer>>clave;
		 if(clave==Bclave){
			 encontrado = true;
			 cout<<"Nombre..."<<nombre<<endl;
			 cout<<"Clave..."<<clave<<endl;
			 cout<<endl;
			 cout<<"Eliminado"<<endl;

		 }
		 else{
			 Temp<<nombre<<" "<<clave<<endl;
		 }
		 Leer>>nombre;
	 }if(encontrado == false){
		 cout<<"Clave no encontrada"<<endl;
	 }
	 Leer.close();
	 Temp.close();
	 remove("trabajadores.txt");
	 rename("Temp.txt", "trabajadores.txt");
}

void Despedir::despedirTodosLosTrabajadores(){
	/*FILE * archivo = fopen("trabajadores.txt","a");
	fclose(archivo);*/
	remove("trabajadores.txt");
	exit(0);
}
