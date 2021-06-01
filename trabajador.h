/*
 * trabajador.h
 *
 *  Created on: 1 jun. 2021
 *      Author: Usuario
 */

#ifndef TRABAJADOR_H_
#define TRABAJADOR_H_

typedef struct{
	char dni;
	char email;
	char contrasenya;
	char cuentaBancaria;
	int cuantas;
}Trabajador;

void crearTrabajador();
void listarTrabajadores();

#endif /* TRABAJADOR_H_ */
