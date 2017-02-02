#include <fcntl.h>      /* Modos de apertura */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>     /* Funciones de ficheros */

int main ( int argc, char* argv[] )
{
   char cadena[11];	/* Depósito de los caracteres */
   float leidos;

   /* Apertura del fichero */

   int fichero = open ("test.txt", O_RDONLY);

   /* Comprobación */   
   if (fichero==-1)
   {
        perror("Error al abrir fichero:");
        exit(1);
   }

   /* Coloca el puntero en la posición 400 */
   lseek(fichero,00,SEEK_SET);

   /* Lee diez bytes */
   leidos = read(fichero, cadena, 10);
   close(fichero);
   cadena[10]=0;

   /* Mensaje para ver qué se leyó */
   printf ( "Se leyeron %.4f bytes.\n",leidos);
   printf("Se leyeron %.4f bits.\n",(leidos*8));
   printf("Se leyeron %.4f kilobits.\n",(leidos/1024));

   return 0;
}