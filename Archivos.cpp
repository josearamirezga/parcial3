// Archivos, Flujo, Lectura, Escritura y Ejercicios.

// Estos son temas para entender el procesado del archivo. El puntero del archivo, etc.

// en C, el flujo de da

// Ya hemos interactuado con consola y teclado, ahora el flujo lo enviaremos al disco duro.

// Esto permite utilizar una mayor expansión de los datos, pues ahora se van al dsco duro.

// Se siguen los siguientes pasos: Programa, flujo de datos, escrbir archivos.

// Flujos de entrada: Input streams, fuente de datos que un programa lee

// Incluyen: stdin, flujo de entrada estandar, generalmente asociados con la entrada del teclado.

// Para leer datos de un flujo de entrada, se utilizan como scanf o fscanf cuando se trabaja con archivos

// stdin y stdout. Los flujos estandard de entrada y de salida. Con stdout puedes abrir archivos para escribir datos en ellos. Para escribir datos en un

//flujo de salida: Se usan funciones como, printf y scanf, o fprintf y fscanf.

// Siempre abrir y cerrar flujos con funciones fopen y fclose.

// Archivos: Cuando se trabaja con archivos en C, se utilizan punteros a objetos de tipo file, qe representan flujos de entrada o salida de datos.

// FILE es el tipo de puntero utilizado para representar un flujo de entrada o salida. Por ejemplo: puedes declarar un tipo file como el siguiente:

// FILE*archivo

// 1. fopen, fclose

// 2. fread, fwrite

// 3. fscanf, fprintf: 

// perror: Puntero de error, como no encontrar el archivo, no puede escribir, pues tiene contraseña, etc.

// Tipos de archivo: Texto y binario.
// Es importante mencionar que en Cno hay tipos de archivo como archivo de texto o archivo binario en si. La distincion entre archivos de texto y binarios se basa en como se leen y escriben los datos en esos archivos y esto se controla mediante las funciones E/S entrada y salida, y el modo en el que se abre el archivo utilizando fopen

// Si un archivo se abre en modo texto, C tratará de manera diferente los caracteres de nueva linea, y retorno de carro (lineskip), mientras que en modo binario es diferente

// Lectura Al abrir los flujos, queremos decir que tipos queremos (read: r), (write: w), (anex: a). Tener mucho cuidado porque al realizar write, se bora todo

// File * flujo = fopen("datos.txt", "r");

// Modos de apertura de un archivo: rb, wb, ab. Modos similares a los anteriores pero con archivos binarios, la "b" indica BINARIO

// r+ (lectura y escritura), no trunca el archivo pero permite leer y escribir, debe existir previamente

// w+ (lectura y escritura), Abre el archivo en modo lectura y escritura, trunca el archivo.

// Es importante la estructura de datos que se utilizan. CSV, archivos, comma separated values obtiene una forma 1, 1, 1... donde la coma separa columnas, etc.

// Este formato es sencillo de leer para la maquina e incluso para las personas. CSV.

// Este es un ejemplo de como leer un ARCHIVO:

/*

#include <stdio.h>

int main(){
	
	char caracter; // char type
	
	FILE *file = fopen("Ordenamiento de datos.exe", "r");
	
	if (file == NULL){
		
		perror("Error en la apertura del archivo");
		
		return 1;
		
	}
	
	while (feof(file) == 0){
		
		caracter = fgetc(file);
		
		printf("%c",caracter);
		
	}
	
	fclose(file);
	
	printf("\n\n Todo esta viento en popa... \n \n");
	
} */

// El siguiente es un programa

/*

// Leer

#include <stdio.h>

int main( ){
	
	char caracter; //char type
	
	int countR;
	int countC;
	
	bool condition;
	
	FILE *file = fopen("line.txt", "r");
	
	if (file == NULL){
		
		perror("Error en la apertura del archivo");
		
		return 1;
		
	}
	
	countR = 0;
	countC = 1;
	condition = false;
	
	while (feof(file) == 0){
		
		caracter = fgetc(file);
		
		if (caracter == '\n'){
			
			countC++;
			
			condition = true;
		}
		
		if (!condition){
			if (caracter == ','){
				countR ++;
			}
		}
		
	}
	
	printf("Las columnas: %d", countR);
	
	printf("Los renglones son: %d", countC);
	
	fclose (file);
	
	printf("\n\n Todo esta viento en popa... \n \n");
	
	return 0;
	
}

// Parte de escritura
*/

// Lo más basico es: COMO CREAR UN ARCHIVO.

// PARA CREAR UN ARCHIVO, unicamente se trata de verificar el fluo y crear el archivo desde cero en si.

/*
#include <stdio.h>

// Crear y escribir

int main(){
	
	FILE *archivo;
	
	archivo = fopen("archivo.txt", "w");
	
	if (archivo == NULL){
		
		perror("Error al crear el archivo");
		
		return 1;
	}
	
	// Ahora puedes escribir en el archivo
	
	fprintf(archivo, "Este es un nuevo archivo.\n");
	
	fclose(archivo);
	
	return 0;
} */

// Anexar

/*
#include <stdio.h>

int main(){
	
	FILE *archivo;
	
	archivo = fopen("archivo.txt", "a");
	
	if (archivo == NULL){
		
		perror("Error al crear el archivo");
		
		return 1;
	}
	
	// Ahora puedes escribir en el archivo
	
	fprintf(archivo, "Esto se agrega al final.\n");
	
	fclose(archivo);
	
	return 0;
} 
*/
// Ejercicio: Crear una matriz que sea impresa dentro de un archivo.

/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int CrearRenglon(int TamMatriz, int Renglon[5]){
	
	for (int j = 0; j < TamMatriz; j++){
			
		int ran = rand()%2;
		
		Renglon[j] = ran;
		
		printf("%d  ", Renglon[j]);
	}
	printf("\n")
	
}

int main(){
	
	FILE *archivo;
	archivo = fopen("Matriz.txt", "w");
	
	int TamMatriz = 0;
	printf("De que tamaño quieres que sea la matriz: \n");
	scanf("%d", &TamMatriz);
	
	int Matriz[TamMatriz];
	int Renglon[TamMatriz]
	
	for (int i = 0; i < TamMatriz; i++){
		
		Matriz[i] = CrearRenglon(TamMatriz, Renglon);
		
	}
	CrearRenglon(TamMatriz, Renglon);
	
} */

// Cambio de flujo

/*
#include <stdio.h>

int main(){
	
	FILE *file = freopen("line.txt", "w", stdout);
	
	if (file == NULL){
		
		perror("Error en la apertura del archivo");
		return 1;
	}
	
	// Ahora, la salida estandar (stdout) está redirigida al archivo "line.txt"
	
	printf("Este texto se escribirá en el archivo. \n");
	
	fclose(file);
	
	return 0;
	
} */

// Lectura de valores particular.

#include <stdio.h>

int main(){
	
	char character;
	
	int num;
	
	FILE*archivo;
	
	archivo = fopen("valores.txt", "r");
	
	if (archivo == NULL){
		
		perror("Error al crear el archivo");
		return 1;
		
	}
	
	
	while(feof(archivo) == 0){
		
		fscanf(archivo, "%d", &num);
		printf("%d\n", num);
		
	}
	
	//Cierra el archivo despues de usarlo
	
	fclose(archivo);
	
	return 0;
}

// Escribir un programa capaz de leer un archivo de texto los valores del 0 al 100 y hacer operaciones de multiplocacion
//
