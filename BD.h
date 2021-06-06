/*
 * BD.h
 *
 *  Created on: 4 jun. 2021
 *      Author: amold
 */

#ifndef BD_H_
#define BD_H_

#include <stdio.h>
extern "C"{
#include "sqlite3.h"
}
#include <string.h>

	int mostrarTodo(sqlite3 *db);
	int borrarTodo(sqlite3 *db);
	int hacerElDelete();
	int insertar();
	int hacerElShow();
	int hacerElClose();
	int crearSueldoTrabajador(sqlite3 *db);


#endif /* BD_H_ */
