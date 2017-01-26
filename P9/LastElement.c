/*Practica 9. The last one. 
Crea un programa que imprima el ultimo elemento que se reciba por línea de comandos, 
se debe cumplir la condición de que debe de tenerse al menos un elemento en la lista de argumentos.
Autor Jonathan Soto JImenez
*/
#include <stdio.h>

void main(int argc,char *argv[])
{
	//Variable para determinar el ultimo elemento
	int ultimo = 0;
	//Si no ingresa un argumento, indicar el modo de uso
	if (argc < 2)
		printf("Modo de uso:\nUna vez compilado: <nombrePrograma> elemento1 elemento2 elemento3 ...");
	//Si lo hace, proseguir con la ejecucion
	else
	{
		//Restamos uno, dado que tambien se cuenta el nombre de programa como un argumento
		ultimo = argc-1;
		//Imprimimos
		printf("El \243ltimo argumento ingresado es: %s\n", argv[ultimo]);
	}
}