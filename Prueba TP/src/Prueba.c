/*
 ============================================================================
 Name        : Prueba.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void CambiarE_S(char *, char *);

int main(void) {
	char entrada[] = "/tmp/Entrada.txt", salida[] ="/tmp/Salida.txt"; //Crear los archivos .txt en la ruta
	char palabra;													  //Entrada.txt tiene que tener valores

	CambiarE_S(entrada, salida);
	printf("Texto de Prueba\n");

	while ((palabra = getchar()) != EOF) printf("%c\n", palabra);

	return EXIT_SUCCESS;
}


void CambiarE_S(char * DirEntrada, char * DirSalida){
	freopen(DirSalida, "w", stdout);
	freopen(DirEntrada, "r", stdin);
}
