/*
 ============================================================================
 Name        : FileSystem.c
 Author      : Mati
 Version     : 0.1
 Copyright   : Your copyright notice
 Description : Consola para FileSystem
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

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

/*Funciones de acciones*/
void AccionArchivos(){
	int Accion;

	scanf("%d", &Accion);

	switch(Accion){
	case 1: EliminarArchivo(); break;
	case 2: RenombrarArchivo(); break;
	case 3: MoverArchivo(); break;
	case 4: MostrarConsola(); break;
	}
}
void AccionDirectorios(){
	int Accion;

	scanf("%d", &Accion);

	switch(Accion){
	case 1: CrearDirectorio(); break;
	case 2: ELiminarDirectorio(); break;
	case 3: RenombrarDirectorio(); break;
	case 4: MoverDirectorio(); break;
	case 5: MostrarConsola(); break;
	}
}
void AccionBloques(){
	int Accion;

	scanf("%d", &Accion);

	switch(Accion){
	case 1: VerBloque(); break;
	case 2: BorrarBloque(); break;
	case 3: CopiarBloque(); break;
	case 4: MostrarConsola(); break;
	}
}
void AccionConsola(){
	int Accion;

	scanf("%d", &Accion);

	switch(Accion){
	case 1: Formatear(); break;
	case 2: MostrarOpcionesArchivos(); AccionArchivos(); break;
	case 3: MostrarOpcionesDirectorios(); AccionDirectorios(); break;
	case 4: CopiarDeLocalAMDFS(); break;
	case 5: CopiarDeMDFSAFileSystem(); break;
	case 6: SolicitarMD5(); break;
	case 7: MostrarOpcionesBloques(); AccionBloques(); break;
	case 8: AgregarNodo(); break;
	case 9: EliminarNodo(); break;
	case 10: return;
	default : puts("\nOpción errónea. Vuelva a ingresar una opción\n\n"); MostrarConsola();
	}

}


/*Funiones para mostrar en pantalla*/
void MostrarConsola (){
	puts("1- Formatear el MDFS\n"
		"2- Eliminar/Renombrar/Mover archivo\n"
		"3- Crear/Eliminar/Renombrar/Mover directorio\n"
		"4- Copiar un archivo local al MDFS\n"
		"5- Copiar un archivo del MDFS al filesystem local\n"
		"6- Solicitar el MD5 de un archivo en MDFS\n"
		"7- Ver/Borrar/Copiar los bloques que componen un archivo.\n"
		"8- Agregar un nodo de datos\n"
		"9- Eliminar un nodo de datos\n"
		"10- Salir\n");

	AccionConsola();
}
void MostrarOpcionesArchivos(){
	puts("1- Eliminar archivo\n"
		"2- Renombrar archivo\n"
		"3- Mover archivo\n"
		"4- Volver\n");
}
void MostrarOpcionesDirectorios(){
	puts("1- Crear directorio "
		"2- Eliminar directorio\n"
		"3- Renombrar directorio\n"
		"4- Mover directorio\n"
		"5- Volver\n");
}
void MostrarOpcionesBloques(){
	puts("1- Ver bloque\n"
		"2- Borrar bloque\n"
		"3- Copiar bloque\n"
		"4- Volver\n");
}



int main(void) {

	MostrarConsola();

	return 1;
}
