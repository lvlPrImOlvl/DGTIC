/*
 *Autor: Jonathan Soto JImenez
 */
//Bibliotecas usadas, sqlite3 para bases de datos
#include <stdio.h>
#include "sqlite3.h"
#include <stdlib.h>

//Variables globales para poder utilizarlas en todo el programa
//resultado para saber si los querys se ejecutaron bien
int resultado=0;
//variable que manejara la base de datos
sqlite3 *basedatos;
//Variable que manejara los querys
char *sql;
//Variable que manejara los errores
char *error = 0;

//Prototipos de funciones:
//Ok, para saber si todo salio bien
void ok();
//seelctCb para poder recuperar los registros
int selectCb(void *nada, int argc, char **argv, char **colNames);

//PROGRAMA PRINCIPAL
void main()
{
    int op;
    // Abrimos la  base de datos
    resultado = sqlite3_open("agenda.db",&basedatos);
    // Comprobamos que la base de datos se abre correctamente
    if( SQLITE_OK != resultado )
    {
        printf("\nERROR EN LA APERTURA DE LA BASE DE DATOS.");
    }
    // Si se ha abierto la base de datos continuar con el programa
    if ( SQLITE_OK == resultado)
    {
        printf("\nBASE DE DATOS ABIERTA\n\n");

        do
        {
	        printf("Que deseas hacer?\n1.- Crear la tabla becarios\n2.-Insertar registros\n3.-Ver registros\n4.-Salir\nOpcion: ");
	        scanf("%d",&op);
	        system("clear");
	        switch(op)
	        {
	        	case 1:
	        	    /* Create SQL statement */
			   		sql = "CREATE TABLE becarios ("
			     	"`id` NUMBER, "
			     	"`nombre` TEXT, "
			     	"`edad` NUMBER, "
			     	"`procedencia` TEXT)";
			     	ok();

	        	break;

	        	case 2:
	        		sql = "INSERT INTO becarios VALUES (1, 'Jonathan', 25, 'FI');";
	        		ok();
	        		sql = "INSERT INTO becarios VALUES (2, 'Jose', 22, 'FI');";
	        		ok();
	        		sql = "INSERT INTO becarios VALUES (3, 'Luis', 23, 'FI');";
	        		ok();
	        		sql = "INSERT INTO becarios VALUES (4, 'Ivan', 25, 'FI');";
	        		ok();
	        	break;

	        	case 3:
	        		sql = "SELECT * FROM becarios;";
	        		resultado = sqlite3_exec(basedatos, sql, selectCb, 0, &error);
					if (resultado != SQLITE_OK)
					    {
					       fprintf(stderr, "Error: %s\n", error);
					       sqlite3_free(error);
					    }
					else
					    {
						    fprintf(stdout, "Ejecucion correcta!\n");
					    }
	        	break;

	        	case 4:
	        	exit(0);
	        	break;
	        }
        }while(op != 4);

    }
    // Cerrar la base de datos
    sqlite3_close(basedatos);
}

void ok()
{
	/* Execute SQL statement */
	resultado = sqlite3_exec(basedatos, sql, NULL, 0, &error);
	if (resultado != SQLITE_OK)
	{
		fprintf(stderr, "Error: %s\n", error);
		sqlite3_free(error);
	}
	else
	{
		fprintf(stdout, "Ejecucion correcta!\n");
	}

}

int selectCb(void *nada, int argc, char **argv, char **colNames){
   int i;

   for(i=0; i<argc; i++){
      printf("%s => %s\n", colNames[i], argv[i]);
   }
   printf("\n");
   return 0;
}