#define MyFunctions _declspec(dllexport)
#include "Raqueta.h"
#include <iostream>
extern "C"{
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

Raqueta::Raqueta(){
	this->tipo = NULL;
	this->material = NULL;
	this->dni = NULL;
}
Raqueta::Raqueta(int id,char* nombre, char* fabricante, int precio,char* tipo, char* material,char* dni): Objeto(id,nombre,fabricante,precio){
	this->tipo = new char[strlen(tipo)+1];
	strcpy(this->tipo,tipo);
	this->material = new char[strlen(material)+1];
	strcpy(this->material,material);
	this->dni = new char[strlen(dni)+1];
	strcpy(this->dni,dni);
}
Raqueta::Raqueta(Raqueta& r){
	this->tipo = new char[strlen(r.tipo)+1];
	strcpy(this->tipo,r.tipo);
	this->material = new char[strlen(r.material)+1];
	strcpy(this->material,r.material);
	this->dni = new char[strlen(r.dni)+1];
	strcpy(this->dni,r.dni);
}
Raqueta::~Raqueta(){
	delete[] this->tipo, this->material, this->dni;
}

char* Raqueta::getTipo(){
	return this->tipo;
}
char* Raqueta::getMaterial(){
	return this->material;
}
char* Raqueta::getSocio(){
	return this->dni;
}

void Raqueta::setTipo(char* tipo){
	this->tipo = tipo;
}
void Raqueta::setMaterial(char* material){
	this->material = material;
}
void Raqueta::setSocio(char* dni){
	this->dni = dni;
}
void Raqueta::imprimir(){
	Objeto::imprimir();

}
extern "C" void Raqueta::crearRaqueta(){
	string tipor;
	string texto;
	int esta;
	ifstream archivo;
	fstream guardar;
	string materialr;
	string dnir;
	Objeto::crearObjeto();
	cout<<"Para que tipo de deporte es? "<<endl;
	cin>>tipor;
	tipo = (char*)tipor.c_str();
	cout<<"De que material esta hecho?"<<endl;
	cin>>materialr;
	material = (char*)materialr.c_str();
	cout<<"Cual es el dni del socio al que pertenece?"<<endl;
	cin >> dnir;
	dni = (char*)dnir.c_str();
	guardar.open("Objetos.txt", ios::out | ios::app);
	archivo.open("socios.txt");
	if(archivo.is_open()){
		while(!archivo.eof()){
			getline(archivo,texto);
			if(esta=texto.find(dni,0)!= (string::npos)){
				cout<<"Guardado!"<<endl;
				guardar<<". Material: "<<material<<". Tipo de deporte: "<<tipo<<". DNI del socio: "<<dni<<"\n";
		}
	}
}
guardar.close();

}

