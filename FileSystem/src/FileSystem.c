/*
 ============================================================================
 Name        : FileSystem.c
 Author      : Mati
 Version     : 0.2
 Copyright   : Your copyright notice
 Description : Consola para FileSystem
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*Funciones postas*/
void Formatear(){
	puts("Formatea\n");
}
	/*Funciones de Archivos*/
void EliminarArchivo(){
	puts("Elimina Archivo\n");
}
void RenombrarArchivo(){
	puts("Renombra Archivo\n");
}
void MoverArchivo(){
	puts("Mueve Archivo\n");
}
	/*Funciones de Directorios*/
void CrearDirectorio(){
	puts("Crea Directorio\n");
}
void ELiminarDirectorio(){
	puts("Elimina Directorio\n");
}
void RenombrarDirectorio(){
	puts("Renombra Directorio\n");
}
void MoverDirectorio(){
	puts("Mueve Directorio\n");
}
	/*Funciones de Bloques*/
void VerBloque(){
	puts("Ver Bloque\n");
}
void BorrarBloque(){
	puts("Borra Bloque\n");
}
void CopiarBloque(){
	puts("Copia Bloque\n");
}

void CopiarDeLocalAMDFS(){
	puts("Copiar\n");
}
void CopiarDeMDFSAFileSystem(){
	puts("Copiar\n");
}
void SolicitarMD5(){
	puts("Solicictar\n");
}
	/*Funciones de Nodos*/
void AgregarNodo(){
	puts("Agregar nodo\n");
}
void EliminarNodo(){
	puts("Eliminar nodo\n");
}

void MostrarConsola ();
void MostrarOpcionesArchivos();
void MostrarOpcionesDirectorios();
void MostrarOpcionesBloques();
void MostrarOpcionesNodos();

/*Funciones de acciones*/
void AccionArchivos(){
	char AccionString[15];
	int Accion;

	gets(AccionString);

	if(AccionString[1] != '\0')
		Accion=0;
	else
		Accion = AccionString[0] - 48;

	switch(Accion){
	case 1: EliminarArchivo(); break;
	case 2: RenombrarArchivo(); break;
	case 3: MoverArchivo(); break;
	case 4: MostrarConsola(); break;
	default: printf("\nLa opción es errónea. Vuelva a ingresar una opción\n\n"); MostrarOpcionesArchivos(); AccionArchivos(); break;
	}
}
void AccionDirectorios(){
	char AccionString[15];
	int Accion;

	gets(AccionString);

	if(AccionString[1] != '\0')
		Accion=0;
	else
		Accion = AccionString[0] - 48;

	switch(Accion){
	case 1: CrearDirectorio(); break;
	case 2: ELiminarDirectorio(); break;
	case 3: RenombrarDirectorio(); break;
	case 4: MoverDirectorio(); break;
	case 5: MostrarConsola(); break;
	default: printf("\nLa opción es errónea. Vuelva a ingresar una opción\n\n"); MostrarOpcionesDirectorios(); AccionDirectorios(); break;
	}
}
void AccionBloques(){
	char AccionString[15];
	int Accion;

	gets(AccionString);

	if(AccionString[1] != '\0')
		Accion=0;
	else
		Accion = AccionString[0] - 48;

	switch(Accion){
	case 1: VerBloque(); break;
	case 2: BorrarBloque(); break;
	case 3: CopiarBloque(); break;
	case 4: MostrarConsola(); break;
	default: printf("\nLa opción es errónea. Vuelva a ingresar una opción\n\n"); MostrarOpcionesBloques(); AccionBloques(); break;
	}
}
void AccionNodos(){
	char AccionString[15];
	int Accion;

	gets(AccionString);

	if(AccionString[1] != '\0')
		Accion=0;
	else
		Accion = AccionString[0] - 48;

	switch(Accion){
		case 1: AgregarNodo(); break;
		case 2: EliminarNodo(); break;
		case 3: MostrarConsola(); break;
		default: printf("\nLa opción es errónea. Vuelva a ingresar una opción\n\n"); MostrarOpcionesNodos(); AccionNodos(); break;
	}
}
void AccionConsola(){
	char AccionString[15];
	int Accion;

	gets(AccionString);

	if(AccionString[1] != '\0')
		Accion=0;
	else
		Accion = AccionString[0] - 48;

	switch(Accion){
	case 1: Formatear(); break;
	case 2: MostrarOpcionesArchivos(); AccionArchivos(); break;
	case 3: MostrarOpcionesDirectorios(); AccionDirectorios(); break;
	case 4: CopiarDeLocalAMDFS(); break;
	case 5: CopiarDeMDFSAFileSystem(); break;
	case 6: SolicitarMD5(); break;
	case 7: MostrarOpcionesBloques(); AccionBloques(); break;
	case 8: MostrarOpcionesNodos(); AccionNodos(); break;
	case 9: return;
	default : printf("\nLa opción es errónea. Vuelva a ingresar una opción\n\n"); MostrarConsola(); break;
	}

}


/*Funiones para mostrar en pantalla*/
void MostrarConsola (){
	puts("Pantalla Principal\n"
		"1- Formatear el MDFS\n"
		"2- Eliminar/Renombrar/Mover archivo\n"
		"3- Crear/Eliminar/Renombrar/Mover directorio\n"
		"4- Copiar un archivo local al MDFS\n"
		"5- Copiar un archivo del MDFS al filesystem local\n"
		"6- Solicitar el MD5 de un archivo en MDFS\n"
		"7- Ver/Borrar/Copiar los bloques que componen un archivo.\n"
		"8- Agregar/Eliminar un nodo de datos\n"
		"9- Salir\n");

	AccionConsola();
}
void MostrarOpcionesArchivos(){
	puts("Opciones Archivos\n"
		"1- Eliminar archivo\n"
		"2- Renombrar archivo\n"
		"3- Mover archivo\n"
		"4- Volver\n");
}
void MostrarOpcionesDirectorios(){
	puts("Opciones Directorios\n"
		"1- Crear directorio \n"
		"2- Eliminar directorio\n"
		"3- Renombrar directorio\n"
		"4- Mover directorio\n"
		"5- Volver\n");
}
void MostrarOpcionesNodos(){
	puts("Opciones Nodos\n"
		"1- Agregar Nodo\n"
		"2- Eliminar Nodo\n"
		"3- Volver\n");
}
void MostrarOpcionesBloques(){
	puts("Opciones Bloques\n"
		"1- Ver bloque\n"
		"2- Borrar bloque\n"
		"3- Copiar bloque\n"
		"4- Volver\n");
}


int main(void){

	MostrarConsola();
	printf("\nFin");

	return 1;
}
