#define MyFunctions _declspec(dllexport)
#include "Pelota.h"
#include "Objeto.h"
#include <iostream>
extern "C"{
#include "menu.h"
}
#include "string.h"
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;

Pelota::Pelota(){
	this->materialPelota = NULL;
	this->radio = 0;
	this->peso = 0;
}
Pelota::Pelota(int id,char* nombre, char* fabricante, int precio,char* materialPelota,int radio,int peso): Objeto(id,nombre,fabricante,precio){
	this->materialPelota = new char[strlen(materialPelota)+1];
	strcpy(this->materialPelota, materialPelota);
	this->radio = radio;
	this->peso = peso;
}
Pelota::Pelota(Pelota& p): Objeto(p){
	this->materialPelota = new char[strlen(p.materialPelota)+1];
	strcpy(this->materialPelota, p.materialPelota);
	this->radio = p.radio;
	this->peso = p.peso;
}
Pelota::~Pelota(){
	delete[] this->materialPelota;
}

char* Pelota::getMaterialPelota(){
	return this->materialPelota;
}
int Pelota::getRadio(){
	return this->radio;
}
int Pelota::getPeso(){
	return this->peso;
}

void Pelota::setMaterialPelota(char* materialPelota){
	this->materialPelota = materialPelota;
}
void Pelota::setRadio(int radio){
	this->radio = radio;
}
void Pelota::setPeso(int peso){
	this->peso = peso;
}

void Pelota::imprimir(){
	Objeto::imprimir();
	cout<<"Material de la pelota: "<<this->materialPelota<<endl;
	cout<<"Radio: "<<this->radio<<endl;
	cout<<"Peso: "<<this->peso<<endl;
}
extern "C" void Pelota::crearPelota(){
	string mpp;
	string radiop;
	string pesop;
	fstream guardar;
	guardar.open("Objetos.txt", ios::out | ios::app);
	Objeto::crearObjeto();
	cout << "Cual es el material de la pelota? "<<endl;
	cin >> mpp;
	materialPelota = (char*)mpp.c_str();
	cout<<"Cual es el radio de la pelota? "<<endl;
	cin>>radiop;
	radio = atof(radiop.c_str());
	cout<<"Cuanto pesa la pelota? "<<endl;
	cin>>pesop;
	peso = atof(radiop.c_str());
	imprimir();
	guardar<<". Material: "<<materialPelota<<". Radio: "<<radio<<". Peso: "<<peso<<"\n";
	guardar.close();

}
