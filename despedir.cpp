/*
 * despedir.cpp
 *
 *  Created on: 2 jun. 2021
 *      Author: Usuario-W10
 */
#include <iostream>
#include <string.h>
#include "despedir.h"
#include <stdlib.h>
#include <fstream>

using namespace std;

void despedirTrabajador()
{
	 /*int clave, opcion, Bclave;
	 char nombre[30];
	 ofstream Guardar;
	 ifstream Leer;
	 ofstream Temp;
	 Leer.open("trabajadores.txt");
	 Temp.open("Temp.txt");
	 Leer>>nombre;
	 bool encontrado = false;
	 cout<<"Ingrese la clave a eliminar"<<endl;
	 cin>>Bclave;
	 while(!Leer.eof())
	 {
		 Leer>>clave;
		 if(clave==Bclave){
			 encontrado = true;
			 cout<<"Nombre..."<<nombre<<endl;
			 cout<<"Clave..."<<clave<<endl;
			 cout<<endl;
			 cout<<"Eliminado"<<endl;

		 }
		 else{
			 Temp<<nombre<<" "<<clave<<endl;
		 }
		 Leer>>nombre;
	 }if(encontrado == false){
		 cout<<"Clave no encontrada"<<endl;
	 }
	 Leer.close();
	 Temp.close();
	 remove("trabajadores.txt");
	 rename("Temp.txt", "trabajadores.txt");*/
}
void despedirTrabajadores(Trabajador** tr, int numTr)
{

}
void DespedirTodosTrabajadores(){
	FILE * archivo = fopen("trabajadores.txt","a");
	fclose(archivo);
	remove("trabajadores.txt");
}
