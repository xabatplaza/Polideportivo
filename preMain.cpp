#define MyFunctions _declspec(dllexport)
#include "Pelota.h"
#include "Raqueta.h"
#include "preMain.h"
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;
extern "C" void crearUnaNuevaPelota(){
	Pelota* p = new Pelota();
	p->crearPelota();
	system("pause");
	system("cls");

}
extern "C" void crearUnaNuevaRaqueta(){
	Raqueta* r = new Raqueta();
	r->crearRaqueta();
	system("pause");
	system("cls");
	//Raqueta* raqueta = new Raqueta(r->getId(), r->getNombre(), r->getFabricante(), r->getPrecio(), r->getTipo(), r->getMaterial(), r->getSocio());
}

