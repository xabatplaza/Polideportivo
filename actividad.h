/*
 * actividad.h
 *
 *  Created on: 23 may. 2021
 *      Author: Usuario
 */

#ifndef ACTIVIDAD_H_
#define ACTIVIDAD_H_

typedef struct{
	char nombre;
	int numSocios;
	char descripcion;
	int cuantas;
}Actividad;


void crearActividad();
void listarActividad();


#endif /* ACTIVIDAD_H_ */
