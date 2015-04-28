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

// Ejemplo threads

pthread_t thread1;
	pthread_t thread2;

	const char *message1 = "Thread 1";

	const char *message2 = "Thread 2";

	int iret1, iret2;

	/* Create independent threads each of which will execute function */

	iret1 = pthread_create(&thread1, NULL, print_message_function,
			NULL);

	if (iret1)

	{

		fprintf(stderr, "Error - pthread_create() return code: %d\n", iret1);

		exit(EXIT_FAILURE);

	}

	iret2 = pthread_create(&thread2, NULL, print_message_function,NULL);

	if (iret2)

	{

		fprintf(stderr, "Error - pthread_create() return code: %d\n", iret2);

		exit(EXIT_FAILURE);

	}
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);




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


