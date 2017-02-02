#include <stdio.h>
#include <string.h>
struct becario
{ //declaramos la estructura
	char nombre[12];
	int edad;
	float promedio;
	char procedencia[12];
	int generacion;
	unsigned int proyecto:1;
};
int main()
{
	struct becario bec;
	int i=1;
	
	//Becario 1
	printf("Becario %d:\n",i);
	strcpy(bec.nombre,"Fernando");
	printf("Nombre: %s\n",bec.nombre);
	bec.edad = 20;
        printf("Edad: %d\n",bec.edad);
	bec.promedio = 9.5;
        printf("Promedio: %.2f\n",bec.promedio);
	strcpy(bec.procedencia, "FI");
        printf("Procedencia: %s\n",bec.procedencia);
	bec.generacion = 11;
        printf("Generación: %d\n",bec.generacion);
	bec.proyecto=1;
	printf((bec.proyecto&1)?"Proyecto: SI\n\n":"Proyecto: SIN PROYECTO\n\n");
	i++;

	//Becario 2
	printf("Becario %d:\n",i);
        strcpy(bec.nombre,"Jonathan");
        printf("Nombre: %s\n",bec.nombre);
        bec.edad = 25;
        printf("Edad: %d\n",bec.edad);
        bec.promedio = 9.0;
        printf("Promedio: %.2f\n",bec.promedio);
        strcpy(bec.procedencia, "FI");
        printf("Procedencia: %s\n",bec.procedencia);
        bec.generacion = 11;
        printf("Generación: %d\n",bec.generacion);
        bec.proyecto=1;
        printf((bec.proyecto&1)?"Proyecto: SI\n\n":"Proyecto: SIN PROYECTO\n\n");
	i++;

	//Becario 3
	printf("Becario %d:\n",i);
	strcpy(bec.nombre,"Ivan");
        printf("Nombre: %s\n",bec.nombre);
        bec.edad = 24;
        printf("Edad: %d\n",bec.edad);
        bec.promedio = 9.0;
        printf("Promedio: %.2f\n",bec.promedio);
        strcpy(bec.procedencia, "FI");
        printf("Procedencia: %s\n",bec.procedencia);
        bec.generacion = 11;
        printf("Generación: %d\n",bec.generacion);
        bec.proyecto=1;
        printf((bec.proyecto&1)?"Proyecto: SI\n\n":"Proyecto: SIN PROYECTO\n\n");
	i++;

	//Becario 4
	printf("Becario %d:\n",i);
	strcpy(bec.nombre,"Alexis");
        printf("Nombre: %s\n",bec.nombre);
        bec.edad = 24;
        printf("Edad: %d\n",bec.edad);
        bec.promedio = 9.0;
        printf("Promedio: %.2f\n",bec.promedio);
        strcpy(bec.procedencia, "FI");
        printf("Procedencia: %s\n",bec.procedencia);
        bec.generacion = 11;
        printf("Generación: %d\n",bec.generacion);
        bec.proyecto=1;
        printf((bec.proyecto&1)?"Proyecto: SI\n\n":"Proyecto: SIN PROYECTO\n\n");
	i++;

	//Becario 5
	printf("Becario %d:\n",i);
	strcpy(bec.nombre,"Jorge");
        printf("Nombre: %s\n",bec.nombre);
        bec.edad = 23;
        printf("Edad: %d\n",bec.edad);
        bec.promedio = 9.5;
        printf("Promedio: %.2f\n",bec.promedio);
        strcpy(bec.procedencia, "FI");
        printf("Procedencia: %s\n",bec.procedencia);
        bec.generacion = 11;
        printf("Generación: %d\n",bec.generacion);
        bec.proyecto=1;
        printf((bec.proyecto&1)?"Proyecto: SI\n\n":"Proyecto: SIN PROYECTO\n\n");
	i++;

	//Becario 6
	printf("Becario %d:\n",i);
	strcpy(bec.nombre,"Diana");
        printf("Nombre: %s\n",bec.nombre);
        bec.edad = 23;
        printf("Edad: %d\n",bec.edad);
        bec.promedio = 9.5;
        printf("Promedio: %.2f\n",bec.promedio);
        strcpy(bec.procedencia, "FI");
        printf("Procedencia: %s\n",bec.procedencia);
        bec.generacion = 11;
        printf("Generación: %d\n",bec.generacion);
        bec.proyecto=1;
        printf((bec.proyecto&1)?"Proyecto: SI\n\n":"Proyecto: SIN PROYECTO\n\n");
	i++;

	//Becario 7
	printf("Becario %d:\n",i);
	strcpy(bec.nombre,"Jose");
        printf("Nombre: %s\n",bec.nombre);
        bec.edad = 23;
        printf("Edad: %d\n",bec.edad);
        bec.promedio = 9.0;
        printf("Promedio: %.2f\n",bec.promedio);
        strcpy(bec.procedencia, "FI");
        printf("Procedencia: %s\n",bec.procedencia);
        bec.generacion = 11;
        printf("Generación: %d\n",bec.generacion);
        bec.proyecto=1;
        printf((bec.proyecto&1)?"Proyecto: SI\n\n":"Proyecto: SIN PROYECTO\n\n");
	i++;

	//Becario 8
	printf("Becario %d:\n",i);
	strcpy(bec.nombre,"Juan");
        printf("Nombre: %s\n",bec.nombre);
        bec.edad = 26;
        printf("Edad: %d\n",bec.edad);
        bec.promedio = 9.5;
        printf("Promedio: %.2f\n",bec.promedio);
        strcpy(bec.procedencia, "FI");
        printf("Procedencia: %s\n",bec.procedencia);
        bec.generacion = 11;
        printf("Generación: %d\n",bec.generacion);
        bec.proyecto=1;
        printf((bec.proyecto&1)?"Proyecto: SI\n\n":"Proyecto: SIN PROYECTO\n\n");
	return 7;
}


