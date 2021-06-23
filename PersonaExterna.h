/*
 * Persona.h
 *
 *  Created on: 20 jun. 2021
 *      Author: amold
 */

#ifndef PERSONAEXTERNA_H_
#define PERSONAEXTERNA_H_

class PersonaExterna{
private:
	char* nombre;
	char* email;
	char* contrasenya;
	char* puestoTrabajo;

public:
	PersonaExterna();
	PersonaExterna(char* nombre, char* email, char *contrasenya, char* puestoTrabajo);
	~PersonaExterna();

	char* getNombre();
	char* getEMail();
	char* getContrasenya();
	char* getPuestoTrabajo();

	void setNombre(char* nombre);
	void setEMail(char *email);
	void setContrasenya(char *contrasenya);
	void setPuestoTrabajo(char *puestoTrabajo);

};



#endif /* PERSONAEXTERNA_H_ */
