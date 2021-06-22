/*
 * Balon.h
 *
 *  Created on: 18 jun. 2021
 *      Author: Usuario
 */

#ifndef PELOTA_H_
#define PELOTA_H_
#include "Objeto.h"
class Pelota: public Objeto{
	char* materialPelota;
	int radio;
	int peso;
public:
	Pelota();
	Pelota(int id,char* nombre, char* fabricante, int precio,char* materialPelota,int radio,int peso);
	Pelota(Pelota& p);
	~Pelota();

	char* getMaterialPelota();
	int getRadio();
	int getPeso();

	void setMaterialPelota(char* materialPelota);
	void setRadio(int radio);
	void setPeso(int peso);

	virtual void imprimir();
	void crearPelota();
};



#endif /* PELOTA_H_ */
