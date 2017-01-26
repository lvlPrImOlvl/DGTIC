/*
 *Autor: Jonathan Soto Jiménez
 */
//Liberrias de apoyo
#include <stdio.h>
#include <limits.h>

void main()
{

	int dias = 0, i = 0;

	printf("Los anios bisiestos tienen 366 dias, y para saberlo basta con que el anio sea divisible entre 4\nPor lo tanto tendremos que saber cuando un anio es bisiesto y cuando no, para contabilizar los segundos.\n");
	printf("Antes de eso necesitamos saber el limite de una variable de tipo entero de 32 bits, en este caso es:  %lu\n",LONG_MAX);
	printf("Por lo tanto cuando pasemos de %lu segundos, ocurrir\240 un desborde\n",LONG_MAX);
	printf("Ahora verificaremos cuando suceder\240 esto:\n");

	printf("Calculamos en cuantos d\241s ser\240, dividiendo los segundos entre d\241as\n");
	dias = LONG_MAX / 86400;
	printf("Dias a partir del 1 de Enero de 1970: %i\n", dias);
	printf("Calculando....\n");
	//Ciclo que terminara cuando se acaben los diasc
	for (i = 1970 ; ; i++)
	{
		(i%4) ? (dias -=366) : (dias -=365);

		if (dias <= 0)
		{
			//Obtenemos el valor absoluto de los dias, por si se resto y quedo negativo
			dias *=-1;
			//Como hay dias de sobra, se aumenta un año
			i++;
			break;
		}
	}
	printf("\nAnio del fin del mundo %d con %d d\241as\n",i, dias);
	
}