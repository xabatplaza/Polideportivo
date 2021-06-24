/*
 * BDPersonaE.h
 *
 *  Created on: 20 jun. 2021
 *      Author: amold
 */

#ifndef BDPERSONAE_H_
#define BDPERSONAE_H_

#include "sqlite3.h"
#include "PersonaExterna.h"
#include <stdbool.h>
#include <string>

int crearPersonaE(sqlite3 *db, PersonaExterna p);
bool comprobarPersonaE(sqlite3 *db, PersonaExterna p);
bool ExistsPersonaE(sqlite3 *db, PersonaExterna p);
int mostrartodoP(sqlite3 *db);
bool borrarUsuarioP(sqlite3 *db, PersonaExterna p);
int mostrarUBorrar(sqlite3 *db);
int updatePersonaE(sqlite3 *db, PersonaExterna p);
int mostrarUnoP(sqlite3 *db, PersonaExterna p);

#endif /* BDPERSONAE_H_ */
