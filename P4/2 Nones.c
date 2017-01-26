/*
 *Autor Jonathan Soto Jimenez
*/
//Libreria de entrada y salida
#include <stdio.h>

void main()
{
	int i= 0, x = 0;
	printf("Programa que imprime s\242lo n\243meros nones \n\n");
	printf("Introduce un numero:  ");
	scanf("%d",&x);
	for(i = 0 ; i <= x ; i++)
	{
		if(i%2 != 0)
		printf("-> %d\n",i); 
	}
}
