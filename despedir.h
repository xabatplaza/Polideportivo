/*
 * despedir.h
 *
 *  Created on: 2 jun. 2021
 *      Author: Usuario-W10
 */


#ifndef DESPEDIR_H_
extern "C"
#define DESPEDIR_H_

#include "trabajador.h"
#include "socio.h"
#include "instructor.h"

//#include <iostream.h>
#include <string.h>
using namespace std;

class DespedirTrabajador
{
private:
	Trabajador** trabajadores;
	int numTrabajadores;
public:
	void despedirTrabajador();
	void despedirTrabajadores(Trabajador** tr, int numTr);
	void DespedirTodosTrabajadores();
};

/*class DespedirSocio
{
private:
	Socio** socios;
	int numSocios;
public:
	void despedirSocio(Socio* s);
	void despedirSocios(Socio** tr, int numS);
};

class DespedirInstructor
{
private:
	Instructor** instructores;
	int numInstructores;
public:
	void despedirInstructor(Instructor* ins);
	void despedirInstructores(Instructor** ins, int numIns);
};
*/

#endif /* DESPEDIR_H_ */

