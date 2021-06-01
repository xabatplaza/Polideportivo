/*
 * torneo.h
 *
 *  Created on: 1 jun. 2021
 *      Author: Usuario
 */

#ifndef TORNEO_H_
#define TORNEO_H_

typedef struct{
	char nombre;
	char participantes;
	char direccion;
	char fecha;
	int cuantas;
}Torneo;

void crearTorneo();
void listarTorneos();

#endif /* TORNEO_H_ */
