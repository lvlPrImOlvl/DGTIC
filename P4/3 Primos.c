/*
 *Autor Jonathan Soto Jimenez
*/
//Libreria de entrada y salida
#include <stdio.h>

#define true 1
#define false 0

typedef char bool;

//prototipo función primo(int n)
bool primo(int n);

void main()
{
	int x = 0, i =0;
	printf("Programa que imprime n\243meros primos \n\n");
	printf("Introduce un n\243mero: ");
	scanf("%d",&x);

	while(i <= x)
	{
        if(primo(i))
		printf("-> %d\n",i);
		i++;
	}
}

bool primo(int n)
{
	int i;
	if(n == 2)
		return true;
	
	if(n%2 == 0 || n == 1)
		return false;

	for(i = 2 ; i <= n/2 ; i++)
	{
		if(n%i == 0)
		return false;
	}
	
	return true;
}
