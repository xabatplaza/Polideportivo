/*
 * instructor.h
 *
 *  Created on: 1 jun. 2021
 *      Author: Usuario
 */

#ifndef INSTRUCTOR_H_
#define INSTRUCTOR_H_

typedef struct{
	char nombre;
	char dni;
	char email;
	char contrasenya;
	char dir;
	char cuentaBancaria;
	int cuantas;
}Instructor;


void crearInstructor();
void listarInstructor();

#endif /* INSTRUCTOR_H_ */
