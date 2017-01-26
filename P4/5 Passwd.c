/*
 *Autor Jonathan Soto Jimenez
*/
//Libreria de entrada y salida
#include <stdio.h>
//Libreria para el manejo de cadenas
#include <string.h>

void main()
{
	char password[10];

	printf("Introduce la contrasenia: ");

	scanf("%s",&password);

    if(strcmp(password,"test") == 0)
		printf("Correcto!\n");
	else
		printf("GTFOH!\n");
}
