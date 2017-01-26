/*
 *Autor: Jonathan Soto Jiménez
 */
//LIbreria de entrada salida
#include <stdio.h>
void main()
{
	//variable para apoyarnos ene l for
	int i=0;
	//Ciclo donde comprobaremos el modulo de cada incremento
	for (i = 1 ; i <= 30 ; i++)
	{
		if (i%3==0 && i%5==0)
			printf("FizzBuzz\n");
		else if (i%3==0)
			printf("Fizz\n");
		else if (i%5==0)
			printf("Buzz\n");
		else
			printf("%d\n", i);
	}
}