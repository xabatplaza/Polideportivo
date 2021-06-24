#include "Objeto.h"
#include <iostream>
#include "string.h"
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;

Objeto::Objeto(){
	this->id = 0;
	this->nombre = NULL;
	this->fabricante = NULL;
	this->precio = precio;
}
Objeto::Objeto(int id,char* nombre, char* fabricante, int precio){
	this->id = id;
	this->nombre = new char[strlen(nombre)+1];
	strcpy(this->nombre,nombre);
	this->fabricante = new char[strlen(fabricante)+1];
	strcpy(this->fabricante,fabricante);
	this->precio = precio;

}

Objeto::Objeto(Objeto& o){
	this->id = o.id;
	this->nombre = new char[strlen(o.nombre)+1];
	strcpy(this->nombre,o.nombre);
	this->fabricante = new char[strlen(o.fabricante)+1];
	strcpy(this->fabricante,o.fabricante);
	this->precio = o.precio;
}
Objeto::~Objeto(){
	delete[] this->nombre, this->fabricante;
}

int Objeto::getId(){
	return this->id;
}
char* Objeto::getNombre() const{
	return this->nombre;
}
char* Objeto::getFabricante() const{
	return this->fabricante;
}
int Objeto::getPrecio(){
	return this->precio;
}

void Objeto::setId(int id){
	this->id = id;
}
void Objeto::setNombre(char* nombre){
	this->nombre = nombre;
}
void Objeto::setFabricante(char* fabricante){
	this->fabricante = fabricante;
}
void Objeto::setPrecio(int precio){
	this->precio = precio;
}

void Objeto::imprimir(){
	cout<<""<<endl;
	cout<<"Creado el objeto con las siguientes caracteristicas:"<<endl;
	cout<<"ID: "<<this->getId()<<endl;
	cout<<"Nombre: "<<this->nombre<<endl;
	cout<<"Fabricante: "<<this->fabricante<<endl;
	cout<<"Precio: "<<this->getPrecio()<<endl;

}
void Objeto::crearObjeto(){
	system("cls");
	ifstream archivo;
	fstream guardar;
	string ido;
	string nombreo;
	string fabricanteo;
	string precioo;
	guardar.open("Objetos.txt",ios::app);
	cout << "Cual es el ID? "<<endl;
	cin >> ido;
	id = atof(ido.c_str());
	cout<<"Cual es el nombre del objeto? "<<endl;
	cin>>nombreo;
	nombre = (char*)nombreo.c_str();
	cout<<"Quien es el fabricante? "<<endl;
	cin>>fabricanteo;
	fabricante = (char*)fabricanteo.c_str();
	cout<<"Cual es el precio? "<<endl;
	cin>>precioo;
	precio = atof(precioo.c_str());
	guardar<<"ID: "<<id<<". Nombre: "<<nombre<<". Fabricante: "<<fabricante<<". Precio: "<<precio;
	guardar.close();


}

Objeto::Objeto(int precio){
	this->precio = precio;
}

int operator +(Objeto x, Objeto y){
	return x.getPrecio()+y.getPrecio();
}
