/*
 *Autor Jonathan Soto Jimenez
 */

#include <stdio.h>
#include <limits.h>
void main()
{
	unsigned int var1,var2;
	printf("Ingresa dos enteros sin signo(maximo %u):",UINT_MAX);
	scanf("%d %d",&var1,&var2);
	printf("El mayor es %d\n",(var1 > var2 ? var1 : var2));
}
