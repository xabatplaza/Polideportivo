/*
 * socio.h
 *
 *  Created on: 1 jun. 2021
 *      Author: Usuario
 */

#ifndef SOCIO_H_
#define SOCIO_H_

typedef struct{
	char nombre;
	char apellidos;
	char dni;
	char email;
	char contrasenya;
	char cuentaBancaria;
	int cuantas;
}Socio;

void crearSocio();
void listarSocios();


#endif /* SOCIO_H_ */
