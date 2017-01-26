/*
 * Autor Jonathan Soto Jimenez
 */
#include <fcntl.h>      
#include <stdlib.h>
#include <stdio.h>
void main ()
{
   int cadenaLeida;

   int fichero = open ("/dev/random", O_RDONLY);

   if (fichero==-1)
   {
        perror("Error al abrir fichero:");
        exit(1);
   }
    read(fichero, &cadenaLeida, sizeof(int));
   close(fichero);

   printf ( "Total leido %d\n",&cadenaLeida);
}