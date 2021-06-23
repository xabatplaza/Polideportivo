/*
 * BDPersonaE.cpp
 *
 *  Created on: 20 jun. 2021
 *      Author: amold
 */



#include "sqlite3.h"
#include "BDPersonaE.h"
#include "PersonaExterna.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>

using namespace std;

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}

bool existePersonaE(sqlite3 *db, PersonaExterna p){


		sqlite3_stmt *stmt;

		string email = p.getEMail();

		string comando = "SELECT * FROM personae WHERE email='" + email + "';";
		char sql[comando.length() + 1];
		strcpy(sql, comando.c_str());

		int result = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
		if (result != SQLITE_OK) {
			cout << "Error preparing statement (INSERT)\n" << endl;
			cout << sqlite3_errmsg(db) << endl;

		}

		result = sqlite3_step(stmt);
		while (result == SQLITE_ROW) {

			return true;

		}

		return false;
}

int crearPersonaE(sqlite3 *db, PersonaExterna p){
	const char *data = "Callback function called";
		char *zErrMsg = 0;


		string nombre= p.getNombre();
		string email = p.getEMail();
		string contrasenya = p.getContrasenya();
		string puestoTrabajo= p.getPuestoTrabajo();

		if (!existePersonaE(db, p)) {

			string comando = "INSERT INTO personae (nombre, email, contrasenya, puestoTrabajo ) VALUES ('" + nombre + "', '"
					+ email + "', '" + contrasenya + "', '" + puestoTrabajo +  "')";

			char sql[comando.length() + 1];
			strcpy(sql, comando.c_str());

			int result = sqlite3_exec(db, sql, callback, (void*) data, &zErrMsg);
			if (result != SQLITE_OK) {
				cout << "Error preparing statement (INSERT)\n" << endl;
				cout << sqlite3_errmsg(db) << endl;
				return result;
				fprintf(stderr, "SQL error: %s\n", zErrMsg);
				sqlite3_free(zErrMsg);
			}

			return result;

		} else {
			cout << "El usuario introducido ya esta en la base de datos" << endl;
		}

		return 0;
}


bool confirmarPersonaE(sqlite3 *db, PersonaExterna p){
	sqlite3_stmt *stmt;

		string email = p.getEMail();
		string contrasenya = p.getContrasenya();

		string comando = "SELECT email, contrasenya FROM personae WHERE (email = '"
				+ email + "' AND contrasenya = '" + contrasenya + "')";

		char sql[comando.length() + 1];
		strcpy(sql, comando.c_str());

		int result = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
		if (result != SQLITE_OK) {
			cout << "Error preparing statement (INSERT)\n" << endl;
			cout << sqlite3_errmsg(db) << endl;

		}


		result = sqlite3_step(stmt);
		while (result == SQLITE_ROW) {
			return true;

		}
		return false;
}

int mostrartodoP(sqlite3 *db){
	sqlite3_stmt *stmt;
	setlocale(LC_ALL, "");

			char sql[] = "select id, nombre, email, contrasenya, puestoTrabajo from personae";

			int result = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) ;
			if (result != SQLITE_OK) {
				cout << "Error preparing statement (SELECT)" <<endl;
				cout << sqlite3_errmsg(db) << endl;
				return result;
			}


			int id;
			char nombre[15];
			char email[15];
			char contrasenya[15];
			char puestoTrabajo[15];


			cout << endl;
			cout << endl;
			cout << "Mostrando usuarios: " << endl;

			do {
				result = sqlite3_step(stmt) ;
				if (result == SQLITE_ROW) {
					id = sqlite3_column_int(stmt, 0);
					strcpy(nombre, (char *) sqlite3_column_text(stmt, 1));
					strcpy(email, (char *) sqlite3_column_text(stmt, 2));
					strcpy(contrasenya, (char *) sqlite3_column_text(stmt, 3));
					strcpy(puestoTrabajo, (char *) sqlite3_column_text(stmt, 4));
					cout << "ID: " << id << ", NOMBRE: " << nombre << ", EMAIL: "<< email<< ", CONTRASEÑA: " << contrasenya << ", PUESTO DE TRABAJO: " << puestoTrabajo  <<endl;

				}
			} while (result == SQLITE_ROW);

			cout << endl;
			cout << endl;

			result = sqlite3_finalize(stmt);
			if (result != SQLITE_OK) {
				cout << "Error finalizing statement (SELECT)" << endl;
				cout << sqlite3_errmsg(db) << endl;
				return result;
			}

			return SQLITE_OK;
}


bool borrarUsuarioP(sqlite3 *db, PersonaExterna p){
	sqlite3_stmt *stmt;

			string email = p.getEMail();
			string contrasenya = p.getContrasenya();

			string comando = "DELETE FROM personae WHERE (email = '"
					+ email + "' AND contrasenya = '" + contrasenya + "')";

			char sql[comando.length() + 1];
			strcpy(sql, comando.c_str());

			int result = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
			if (result != SQLITE_OK) {
				cout << "Error preparing statement (INSERT)\n" << endl;
				cout << sqlite3_errmsg(db) << endl;

			}

			result = sqlite3_step(stmt);
			while (result == SQLITE_ROW) {
				return true;


			}
			return false;
}

int mostrarUBorrar(sqlite3 *db){
		sqlite3_stmt *stmt;
		setlocale(LC_ALL, "");

		char sql[] = "select id, nombre, email from personae";

		int result = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) ;
		if (result != SQLITE_OK) {
			cout << "Error preparing statement (SELECT)" <<endl;
			cout << sqlite3_errmsg(db) << endl;
			return result;
		}


		int id;
		char nombre[15];
		char email[15];


		cout << endl;
		cout << endl;
		cout << "Mostrando usuarios: " << endl;

		do {
			result = sqlite3_step(stmt) ;
			if (result == SQLITE_ROW) {
				id = sqlite3_column_int(stmt, 0);
				strcpy(nombre, (char *) sqlite3_column_text(stmt, 1));
				strcpy(email, (char *) sqlite3_column_text(stmt, 2));
				cout << "ID: " << id << ", NOMBRE: " << nombre << ", EMAIL: "<< email <<endl;

			}
		} while (result == SQLITE_ROW);

		cout << endl;
		cout << endl;

		result = sqlite3_finalize(stmt);
		if (result != SQLITE_OK) {
			cout << "Error finalizing statement (SELECT)" << endl;
			cout << sqlite3_errmsg(db) << endl;
			return result;
		}

		return SQLITE_OK;
}

int updatePersonaE(sqlite3 *db, PersonaExterna p){
	const char *data = "Callback function called";
			char *zErrMsg = 0;


			string email = p.getEMail();
			string contrasenya = p.getContrasenya();



				string comando = "UPDATE personae set contrasenya = '" + contrasenya + "' WHERE (email = '"
				+ email + "')";

				char sql[comando.length() + 1];
				strcpy(sql, comando.c_str());

				int result = sqlite3_exec(db, sql, callback, (void*) data, &zErrMsg);
				if (result != SQLITE_OK) {
					cout << "Error preparing statement (INSERT)\n" << endl;
					cout << sqlite3_errmsg(db) << endl;
					return result;
					fprintf(stderr, "SQL error: %s\n", zErrMsg);
					sqlite3_free(zErrMsg);
				}

				return result;
}

int mostrarUnoP(sqlite3 *db, PersonaExterna p){
	sqlite3_stmt *stmt;

			string email = p.getEMail();

			string comando = "SELECT * FROM personae WHERE email='" + email + "';";
			char sql[comando.length() + 1];
			strcpy(sql, comando.c_str());

			int result = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
			if (result != SQLITE_OK) {
				cout << "Error preparing statement (INSERT)\n" << endl;
				cout << sqlite3_errmsg(db) << endl;

			}

			int id;
			char nombre[15];
			char contrasenya[15];
			char puestoTrabajo[15];


			cout << endl;
			cout << endl;
			cout << "Mostrando usuarios: " << endl;

			do {
				result = sqlite3_step(stmt) ;
				if (result == SQLITE_ROW) {
					id = sqlite3_column_int(stmt, 0);
					strcpy(nombre, (char *) sqlite3_column_text(stmt, 1));
					strcpy(contrasenya, (char *) sqlite3_column_text(stmt, 3));
					strcpy(puestoTrabajo, (char *) sqlite3_column_text(stmt, 4));

					cout << "ID: " << id << ", NOMBRE: " << nombre << ", EMAIL: "<< email << ", CONTRASEÑA: " << contrasenya << ", PUESTO DE TRABAJO: " << puestoTrabajo  <<endl;

				}
			} while (result == SQLITE_ROW);

			cout << endl;
			cout << endl;

			result = sqlite3_finalize(stmt);
			if (result != SQLITE_OK) {
				cout << "Error finalizing statement (SELECT)" << endl;
				cout << sqlite3_errmsg(db) << endl;
				return result;
			}

			return SQLITE_OK;
}
