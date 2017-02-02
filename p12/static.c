#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void main()
{
	printf("Ingresa la palabra (maximo de %i caracteres): ",MAX);
	char *ap = calloc(MAX,sizeof(char));
	scanf("%s",ap);
	printf("%s\n",ap);
}