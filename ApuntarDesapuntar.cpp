#define MyFunctions _declspec(dllexport)
#include "ApuntarDesapuntar.h"
extern "C"{
#include "actividad.h"
#include "instructor.h"
#include "socio.h"
#include "torneo.h"
#include "trabajador.h"
#include "menu.h"
}
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;

ApuntarDesapuntar::ApuntarDesapuntar(Socio* socio, Torneo* torneos, Actividad* actividad, const char* fecha){
	this->socios = socio;
	this->torneos = torneos;
	this->actividad = actividad;
	this->fecha = new char[strlen(fecha)+1];
	strcpy(this->fecha, fecha);


}
ApuntarDesapuntar::ApuntarDesapuntar(const ApuntarDesapuntar& as){
	this->socios = as.socios;
	this->torneos = as.torneos;
	this->actividad = as.actividad;
	this->fecha = new char[strlen(as.fecha)+1];
	strcpy(this->fecha, as.fecha);
}

ApuntarDesapuntar::~ApuntarDesapuntar(){
	delete this->fecha;
}
char* ApuntarDesapuntar::getFecha(){
	return this->fecha;
}
Socio* ApuntarDesapuntar::getSocio(){
	return this->socios;
}
Torneo* ApuntarDesapuntar::getTorneos(){
	return this->torneos;
}
Actividad* ApuntarDesapuntar::getActividad(){
	return this->actividad;
}

void ApuntarDesapuntar::setFecha(char* fecha){
	this->fecha = fecha;
}
void ApuntarDesapuntar::setSocio(Socio* socio){
	this->socios = socio;
}
void ApuntarDesapuntar::setTorneo(Torneo* torneo){
	this->torneos = torneo;
}
void ApuntarDesapuntar::setActividad(Actividad* actividad){
	this->actividad = actividad;
}


extern "C" void apuntarSocioTorneo(){
	system("cls");
	ifstream archivo;
	string texto;
	string respuesta;
	int esta;
	string dni;
	cout << "Cual es el DNI? "<<endl;
	cin >> dni;
	archivo.open("torneos.txt");
	cout << "A que torneo se quieres apuntar? "<<endl;
	cin >> respuesta;
	if(archivo.is_open()){
		while(!archivo.eof()){
			getline(archivo,texto);
			if(esta=texto.find(respuesta,0)!= (string::npos)){
				cout<<"Añadido al torneo "<<respuesta<<"DNI: "<<dni<<endl;
		}
	}
}

	archivo.close();
	system("pause");
	system("cls");
}
extern "C" void apuntarSocioActividad(){
	system("cls");
	ifstream archivo;
	string texto;
	string respuesta;
	int esta;
	string dni;
	cout << "Cual es el DNI? "<<endl;
	cin >> dni;
	archivo.open("actividades.txt");
	cout << "A que actividad se quieres apuntar? "<<endl;
	cin >> respuesta;
	if(archivo.is_open()){
		while(!archivo.eof()){
			getline(archivo,texto);
			if(esta=texto.find(respuesta,0)!= (string::npos)){
				cout<<"Añadido a la actividad "<<respuesta<<"DNI: "<<dni<<endl;
		}
	}
}

	archivo.close();
	system("pause");
	system("cls");
}

