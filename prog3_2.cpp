/* 
Autor: Franciscomilan
Realizado: 28/04/2022
Escuela: Universidad UVM
Materia: Programacion Estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 2 en C del parcial 3 que pide el nombre de un archivo e imprime su contenido en 
pantalla, realizando la lectura en bloques de caracter (buffer), estableciendo el limite de buffer con 
MAX para la materia programacion estructurada
*/

//Librerias
#include<stdio.h>
#include"miLibreria.h" 
#define MAX_BUFFER 200

//Principal
int main () {
	//Declaracion de variables
	char nombre[50], buffer[MAX_BUFFER];
	//Variable apuntador del archivo
	FILE *f;
	int n=0;
	//Entrada de datos
	leers(" Nombre del archivo: ",nombre,50);
	//Inciar proceso archivo
	f=fopen(nombre,"r");
	//Validar apertura del archivo
	if (f==NULL) {
		printf("Error al tratar de abrir el archivo\n");
	} else {
		//While
		while (fgets(buffer, MAX_BUFFER, f)!=NULL) {
			printf("%s",buffer);
			n++;
		}
		//Cerrar el proceso del archivo
		fclose(f);
		printf("\n---> Para mostrar el archivo se hicieron %d accesos \n", n);
	}
	//Retorno
	return 0;
}
