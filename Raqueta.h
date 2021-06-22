#ifndef RAQUETA_H_
#define RAQUETA_H_
#include "Objeto.h"
class Raqueta: public Objeto{
	char* tipo;
	char* material;
	char* dni;
public:
	Raqueta();
	Raqueta(int id,char* nombre, char* fabricante, int precio,char* tipo, char* material,char* dni);
	Raqueta(Raqueta& r);
	~Raqueta();

	char* getTipo();
	char* getMaterial();
	char* getSocio();

	void setTipo(char* tipo);
	void setMaterial(char* material);
	void setSocio(char* dni);

	virtual void imprimir();
	void crearRaqueta();

};



#endif /* RAQUETA_H_ */
