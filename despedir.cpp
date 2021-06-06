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
	Temp.open("socios.txt",ios::app);
	Leer>>nombre;
	bool encontrado = false;
	cout<<"Ingrese el dni de la persona que se quiera eliminar:"<<endl;
	cin>>Bclave;
	while(getline(Leer,texto)){
		 //Leer>>clave;
		 if(clave=texto.find(Bclave,0)!= (string::npos)){
			 encontrado = true;
			 texto.replace(texto.find(Bclave,0),texto.length(),"");
			 Temp<<texto<<endl;
			 cout<<"Eliminado"<<endl;
			 break;
		 }else{
			Temp<<"Nombre:"<<texto<<endl;
		 }
	}if(encontrado == false){
		cout<<"Clave no encontrada"<<endl;
		quitarSocio();
	 }

	 remove("socios.txt");
	 rename("socios.txt","socios.txt");
	 Leer.close();
	 Temp.close();

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
	Temp.open("torneos.txt",ios::app);
	Leer>>nombre;
	bool encontrado = false;
	cout<<"Ingrese la clave del torneo que se quiera eliminar:"<<endl;
	cin>>Bclave;
	while(getline(Leer,texto)){
		 //Leer>>clave;
		 if(clave=texto.find(Bclave,0)!= (string::npos)){
			 encontrado = true;
			 texto.replace(texto.find(Bclave,0),texto.length(),"");
			 Temp<<texto<<endl;
			 cout<<"Eliminado"<<endl;
			 break;
		 }else{
			Temp<<"Nombre:"<<texto<<endl;
		 }
	}if(encontrado == false){
		cout<<"Clave no encontrada"<<endl;
		quitarSocio();
	 }

	 remove("torneos.txt");
	 rename("torneos.txt","torneos.txt");
	 Leer.close();
	 Temp.close();
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
void despedirInstructor(){
	int clave;
	string Bclave;
	char nombre[30];
	string texto;
	ofstream Guardar;
	ifstream Leer;
	ofstream Temp;
	Leer.open("instructores.txt");
	Temp.open("instructores.txt",ios::app);
	Leer>>nombre;
	bool encontrado = false;
	cout<<"Ingrese el dni del instructor que se quiera eliminar:"<<endl;
	cin>>Bclave;
	while(getline(Leer,texto)){
		 //Leer>>clave;
		 if(clave=texto.find(Bclave,0)!= (string::npos)){
			 encontrado = true;
			 texto.replace(texto.find(Bclave,0),texto.length(),"");
			 Temp<<texto<<endl;
			 cout<<"Eliminado"<<endl;
			 break;
		 }else{
			Temp<<"Nombre:"<<texto<<endl;
		 }
	}if(encontrado == false){
		cout<<"Clave no encontrada"<<endl;
		quitarSocio();
	 }

	 remove("instructores.txt");
	 rename("instructores.txt","instructores.txt");
	 Leer.close();
	 Temp.close();

}
void despedirTodosLosIntructores(){
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
	int clave;
	string Bclave;
	char nombre[30];
	string texto;
	ofstream Guardar;
	ifstream Leer;
	ofstream Temp;
	Leer.open("trabajadores.txt");
	Temp.open("trabajadores.txt",ios::app);
	Leer>>nombre;
	bool encontrado = false;
	cout<<"Ingrese el dni del trabajador que se quiera eliminar:"<<endl;
	cin>>Bclave;
	while(getline(Leer,texto)){
		 //Leer>>clave;
		 if(clave=texto.find(Bclave,0)!= (string::npos)){
			 encontrado = true;
			 texto.replace(texto.find(Bclave,0),texto.length(),"");
			 Temp<<texto<<endl;
			 cout<<"Eliminado"<<endl;
			 break;
		 }else{
			Temp<<"Nombre:"<<texto<<endl;
		 }
	}if(encontrado == false){
		cout<<"Clave no encontrada"<<endl;
		quitarSocio();
	 }

	 remove("trabajadores.txt");
	 rename("trabajadores.txt","trabajadores.txt");
	 Leer.close();
	 Temp.close();
}

void despedirTodosLosTrabajadores(){
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

