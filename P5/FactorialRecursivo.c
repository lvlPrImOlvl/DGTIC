/*
 *Autor: Jonathan Soto Jiménez
 */
//Bibliotecas de apoyo#include <stdio.h>
int factorial(int); //prototipo de la  función  factorial
//funcion main
int main()
{
  	int x=0;
  	printf("Introduce un numero para obtener su factorial: ");
 	scanf("%d",&x); 
  	printf("El factorial de %d es: %d\n",x, factorial(x));
  	return 0;
}
int factorial(int x)
{
    if(x<2)
        return 1;
    else
        return x * factorial(x-1);
}