/*
 * PersonaExterna.cpp
 *
 *  Created on: 20 jun. 2021
 *      Author: amold
 */



#include "PersonaExterna.h"

PersonaExterna::PersonaExterna(){
	this->nombre= "";
	this->email= "";
	this->contrasenya= "";
	this->puestoTrabajo= "";
}
PersonaExterna::PersonaExterna(char* nombre, char* email, char *contrasenya, char* puestoTrabajo){
	this->nombre= nombre;
	this->email= email;
	this->contrasenya= contrasenya;
	this->puestoTrabajo= puestoTrabajo;
}
PersonaExterna::~PersonaExterna(){
}

char* PersonaExterna::getNombre(){
	return this->nombre;
}
char* PersonaExterna::getEMail(){
	return this->email;
}
char* PersonaExterna::getContrasenya(){
	return this->contrasenya;
}
char* PersonaExterna::getPuestoTrabajo(){
	return this->puestoTrabajo;
}

void PersonaExterna::setNombre(char* nombre){
	this->nombre= nombre;
}
void PersonaExterna::setEMail(char *email){
	this->email= email;
}
void PersonaExterna::setContrasenya(char *contrasenya){
	this->contrasenya= contrasenya;
}
void PersonaExterna::setPuestoTrabajo(char *puestoTrabajo){
	this->puestoTrabajo= puestoTrabajo;
}
