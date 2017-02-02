#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *cifrar(char *cadena,char *clave,int lcadena,int lclave);

int main()
{
	char *buffer; 
    buffer=(char *)malloc(10); 
    memset(buffer,0,10); 
    buffer=cifrar("hola123.,","dgtic",10,4); 
    printf("%s\n",buffer);
    printf("%s\n",cifrar(buffer,"cifrado",10,4));
    getchar();
    return 0;
}

char *cifrar(char *cadena,char *clave,int lcadena,int lclave)
{
	int tmp;
	int i=0;
    char *final;
    final=(char *)malloc(lcadena + 1);
    memset(final,0,lcadena + 1);
  	for(i=0;i<lcadena;i++)
   	{
      	tmp=(int)cadena[i] ^ ((int)clave[(i-1) % lclave+1]+1);
       	final[i]=(char)tmp;
   	}
   	return final;
}