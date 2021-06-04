#ifndef DESPEDIR_H_
#define DESPEDIR_H_

#include "trabajador.h"
#include "socio.h"
#include "instructor.h"

class Despedir{
    private:
        Trabajador ** trabajadores;
        int numTrabajadores;
        Socio ** socio;
        int numSocios;
    public:
        /*Despedir(Trabajador** trabajadores, int numTrabajadores);
        Despedir(const Despedir& de);
        ~Despedir();*/

        void QuitarSocio();
        void QuitarTodosLosSocio();
        void BorrarTorneo();
        void BorrarTodosLosTorneos();
        void DespedirTrabajador();
        void DespedirTodosLosTrabajadores();

};

#endif /* DESPEDIR_H_ */


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
