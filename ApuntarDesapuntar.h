/*
 * ApuntarDesapuntar.h
 *
 *  Created on: 2 jun. 2021
 *      Author: Usuario
 */

#ifndef APUNTARDESAPUNTAR_H_
extern "C"
#define APUNTARDESAPUNTAR_H_

#include "socio.h"
#include "torneo.h"
#include "actividad.h"

#include <iostream>
#include <string.h>
using namespace std;

class ApuntarDesapuntar{
	private:
		Socio* socios;
		Torneo* torneos;
		Actividad* actividad;
		char* fecha;
	public:
		ApuntarDesapuntar(Socio* socio, Torneo* torneos, Actividad* actividad, const char* fecha);
		ApuntarDesapuntar(const ApuntarDesapuntar& as);
		~ApuntarDesapuntar();

		char* getFecha();
		Socio* getSocio();
		Torneo* getTorneos();
		Actividad* getActividad();

		void setFecha(char* fecha);
		void setSocio(Socio* socio);
		void setTorneo(Torneo* torneo);
		void setActividad(Actividad* actividad);

		void apuntarSocioTorneo();
		void apuntarSocioActividad();






};

#endif /* APUNTARDESAPUNTAR_H_ */
