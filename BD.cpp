/*
 * BD.cpp
 *
 *  Created on: 4 jun. 2021
 *      Author: amold
 */

#include <stdio.h>
#include <string.h>
#include <iostream>
#include "string.h"
extern "C"{
#include "sqlite3.h"
#include "BD.h"
#include "trabajador.h"
}
using namespace std;


static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}
int mostrarTodo(sqlite3 *db){
	sqlite3_stmt *stmt;

		char sql[] = "select id, dni, sueldo from trabajador";

		int result = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) ;
		if (result != SQLITE_OK) {
			cout << "Error preparing statement (SELECT)" <<endl;
			cout << sqlite3_errmsg(db) << endl;
			return result;
		}

		cout << "SQL query prepared (SELECT)" << endl;

		int id;
		char dni[10];
		int sueldo;


		cout << endl;
		cout << endl;
		cout << "Mostrando trabajadores: " << endl;

		do {
			result = sqlite3_step(stmt) ;
			if (result == SQLITE_ROW) {
				id = sqlite3_column_int(stmt, 0);
				strcpy(dni, (char *) sqlite3_column_text(stmt, 1));
				sueldo = sqlite3_column_int(stmt, 2);
				cout << "ID: " << id << " DNI: " << dni << " Sueldo: "<< sueldo<<endl;
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

		cout << "Prepared statement finalized (SELECT)" << endl;

		return SQLITE_OK;
}

int borrarTodo(sqlite3 *db){
	sqlite3_stmt *stmt;

		char sql[] = "delete from trabajador";

		int result = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) ;
		if (result != SQLITE_OK) {
			cout << "Error preparing statement (DELETE)" << endl;
			cout << sqlite3_errmsg(db) << endl;
			return result;
		}

		cout << "SQL query prepared (DELETE)" << endl;

		result = sqlite3_step(stmt);
		if (result != SQLITE_DONE) {
			cout << "Error deleting data" << endl;
			cout << sqlite3_errmsg(db) << endl;
			return result;
		}

		result = sqlite3_finalize(stmt);
		if (result != SQLITE_OK) {
			cout << "Error finalizing statement (DELETE)" << endl;
			cout <<  sqlite3_errmsg(db) << endl;
			return result;
		}

		cout << "Prepared statement finalized (DELETE)" << endl;

		return SQLITE_OK;
}
int crearSueldoTrabajador(sqlite3 *db){
	cout << "\nEscribe el DNI del trabajador:\n" << endl;
	char dni[10];
	cin >> dni;

	cout << "\nEscribe el sueldo del trabajador:\n" << endl;
	int sueldo;
	cin >> sueldo;
    const char *data= "Callback function called";
    char *zErrMsg = 0;
//    sqlite3_stmt *stmt;

    string dniString = dni;
    string sueldoString(std::to_string(sueldo));

    string comando= "INSERT INTO trabajador (id,dni,sueldo) VALUES (NULL,'"+ dniString+ "', '" + sueldoString + "')";

    char sql[comando.length()+1];
    strcpy(sql, comando.c_str());
    cout << sql << endl;

    int result = sqlite3_exec(db,sql, callback, (void*)data, &zErrMsg);

    if (result != SQLITE_OK) {
		cout << "Error preparing statement (INSERT)" << endl;
		cout << sqlite3_errmsg(db) << endl;
		return result;
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);

            }
    cout << "Prepared statement finalized (INSERT)" << endl;
    return result;
}


int insertar(){
	sqlite3 *db;
	int result = sqlite3_open("test.sqlite", &db);
	if (result != SQLITE_OK) {
		printf("Error opening database\n");
		return result;
	}
	result = crearSueldoTrabajador(db);
	if (result != SQLITE_OK) {
		printf("Error creating all workers\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}
}
int hacerElDelete(){
	sqlite3 *db;
	int result = sqlite3_open("test.sqlite", &db);
	if (result != SQLITE_OK) {
		printf("Error opening database\n");
		return result;
	}

	result = borrarTodo(db);
	if (result != SQLITE_OK) {
		printf("Error deleting all workers\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}


}
int hacerElShow(){
	sqlite3 *db;
	int result = sqlite3_open("test.sqlite", &db);
	if (result != SQLITE_OK) {
		printf("Error opening database\n");
		return result;
	}

	result = mostrarTodo(db);
	if (result != SQLITE_OK) {
		printf("Error getting all workers\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

}
int hacerElClose(){
	sqlite3 *db;
	int result = sqlite3_open("test.sqlite", &db);
	if (result != SQLITE_OK) {
		printf("Error opening database\n");
		return result;
	}
	result = sqlite3_close(db);
	if (result != SQLITE_OK) {
		printf("Error opening database\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	printf("Database closed\n") ;


}
