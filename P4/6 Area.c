/*
 *Autor Jonathan Soto Jimenez
*/
//Libreria de entrada y salida
#include <stdio.h>

//Prototipos de funciones
float triangulo(float,float); 
float rectangulo(float,float); 
float cuadrado(float); 

void main()
{
	int opc;
	float a,b;
	do
	{
		printf("Programa que determina areas\n\n");
		printf("1.- Triangulo\n");
		printf("2.- Rectangulo\n");
		printf("3.- Cuadrado\n");
		printf("4.- Salir\n\n");
		printf("Elige una opci\242n: ");
		scanf("%d",&opc);

		switch(opc)
		{
			case 1:
				printf("Area del triangulo: \n");
				printf("Introduce la base: ");
	            scanf("%f",&b);
				printf("Introduce la altura: ");
				scanf("%f",&a);
				printf("El area es: %.3f[u²]\n", triangulo(a,b));
				break;
			case 2:
				printf("Area del rectangulo: \n");
		        printf("Introduce la base: ");
                scanf("%f",&b);
                printf("Introduce la altura: ");
                scanf("%f",&a);
                printf("El area es: %.3f[u²]\n", rectangulo(a,b)); 
				break;
			case 3:
				printf("Area del cuadrado: \n");
	                        printf("Introduce el lado: ");
	                        scanf("%f",&a);
	                        printf("El area es: %.3f[u²]\n", cuadrado(a));
				break; 
			case 4:
			break;
			default:
				printf("Ingresa una opci\242n correcta");
				break;
		}
	}
	while(opc != 4);
}

float triangulo(float a, float b)
{
	return (a*b)/2;
}

float rectangulo(float a, float b)
{
        return a*b;
}


float cuadrado(float a)
{
        return a*a;
}



