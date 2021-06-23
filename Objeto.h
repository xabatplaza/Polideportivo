/*
 * Objeto.h
 *
 *  Created on: 18 jun. 2021
 *      Author: Usuario
 */

#ifndef OBJETO_H_
#define OBJETO_H_
#include "actividad.h"
class Objeto{
	int id;
	char* nombre;
	char* fabricante;
	int precio;
public:
	Objeto();
	Objeto(int id,char* nombre, char* fabricante, int precio);
	Objeto(Objeto& o);
	~Objeto();

	int getId();
	char* getNombre();
	char* getFabricante();
	int getPrecio();

	void setId(int id);
	void setNombre(char* nombre);
	void setFabricante(char* fabricante);
	void setPrecio(int precio);

	virtual void imprimir();
	virtual void crearObjeto();

	Objeto(int precio);
	friend int operator +(Objeto x, Objeto y);

};



#endif /* OBJETO_H_ */
