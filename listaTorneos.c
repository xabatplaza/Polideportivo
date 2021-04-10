#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char aux;
	FILE * fichero;

	fichero = fopen("torneos.txt","r");
	if(fichero == NULL){
		printf("No se ha podido abrir el fichero. \n");
		exit(1);
	}
	while(aux != EOF){
		aux = fgetc(fichero);
		printf("%c",aux);
	}
	printf("\n");
	printf("\n");
	printf("\n");

	fclose(fichero);

	system("pause");
	return 0;



}
