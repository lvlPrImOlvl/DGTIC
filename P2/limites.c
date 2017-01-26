/*
 *Autor: Jonathan Soto Jiménez
 */
//Liberrias de apoyo
#include <stdio.h>
#include <limits.h>

void main()
{
	printf("Caracter (m\240ximo %u)\n",CHAR_BIT);
	printf("Caracter signed (m\240ximo %u)\n",SCHAR_MAX); 
	printf("Caracter unsigned (m\240ximo %u)\n",UCHAR_MAX); 
	printf("Entero corto signed (m\240ximo %u)\n",SHRT_MAX);
	printf("Entero corto unsigned (m\240ximo %u)\n",USHRT_MAX);
	printf("Enteros signed (m\240ximo %u)\n",INT_MAX);
	printf("Entero unsigned (m\240ximo %u)\n",UINT_MAX);
	printf("Entero largo signed (m\240ximo %lu)\n",LONG_MAX);
	printf("Entero largo unsigned (m\240ximo %lu)\n",ULONG_MAX); 
}
