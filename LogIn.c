#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

		char palabra[51];
		system("cls");
		int p ;
		printf("\nIndique el n%cmero total de quejas que desea realizar: ", 163);
		scanf("%d", &p);

		char palabras[p][51];

			int i = 0;
			while (i < p) {
				printf("Teclea una palabra: ");
				fflush(stdin);
				scanf("%s", palabras[i]);
				printf("\n");

				i++;
				printf("%s \n", palabras[i], palabra);
		}

}
