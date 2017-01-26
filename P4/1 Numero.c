/*
 *Autor Jonathan Soto Jimenez
*/
//Libreria de entrada y salida
#include <stdio.h>


void main()
{
	int i= 0, x = 0;
	printf("Ingres\240 el n\243mero de elementos a imprimir: ");
	scanf("%d",&x);
	for(i = 0 ; i <= x ; i++)
	{
		printf("-> %d\n",i); 
	}
}
