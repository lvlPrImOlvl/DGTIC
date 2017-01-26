#include<stdio.h> //header(preprocesador)

int main() //funcion main()
{
	char letra;
	printf("Introduce una letra:  ");
	scanf("%c",&letra);
	printf("El hexadecimal de la letra  %c es --> %i\n",letra,letra);
		
	return 0;
}

