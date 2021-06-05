#ifndef DESPEDIR_H_
extern "C"
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

        void menuQuitarSocio();
        void quitarSocio();
        void quitarTodosLosSocio();

        void menuBorrarTorneo();
        void borrarTorneo();
        void borrarTodosLosTorneos();

        void menuDespedirInstructor();
        void despedirInstructor();
        void despedirTodosLosIntructores();

        void menuDespedirTrabajador();
        void despedirTrabajador();
        void despedirTodosLosTrabajadores();

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
