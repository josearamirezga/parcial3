// Ordenamiento por seleccion.
// En el ordenamiento por seleccion, se realiza una división del problema.

// Las tres partes de romper un problema o dividirlo es: identificarlo y entenderlo,
// Siempre es necesario buscar 

// Consiste en encontrar el menor de todos los elementos del arreglo e intercambiarlo con el que está en la primera posición
// Luego el segundo más pequeño y asi sucesivamente hasta ordenarlo todo
// Este algoritmo mejora ligeramente el algoritmo de la burbuja 

// Su funcionamiento se puede definir de forma general como:
	//Buscar el elemento minimo de la lista entre una posicion i y el final
	
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CrearArreglo(int Arreglo[5], int TamArreglo){
	
	for (int i = 0; i < TamArreglo; i++){
		
		Arreglo[i] = rand()% 100 - 50;
	}
}

int ImprimirArreglo(int Arreglo[5], int TamArreglo){
	
	for (int i = 0; i < TamArreglo; i++){
		
		printf("%d   ", Arreglo[i]);
	}
}

int FindSmall(int Arreglo[5], int TamArreglo, int StartI){
	
	int AUX = 1000000;
	int INDEX = -1;
	
	for (int i = StartI; i < TamArreglo; i++){
		
		if (AUX > Arreglo[i]){
			AUX = Arreglo[i];
			INDEX = i;
		}
	}
	return INDEX;
}

int SelSORT(int Arreglo[5], int TamArreglo){
	for (int i = 0; i < TamArreglo; i++){
		
		int I_SMALLEST = FindSmall(Arreglo, TamArreglo, i);
		
		int AUX = Arreglo[i];
		Arreglo[i] = Arreglo[I_SMALLEST];
		Arreglo[I_SMALLEST] = AUX;
	}
}

int main(){
	srand(time(NULL));
	int Num = 0;
	printf("Escribe la cantidad de elementos N que quieres que tenga el arreglo: \n ");
	
	scanf("%d", &Num);
	int Arreglo[Num];
	
	CrearArreglo(Arreglo,Num);
	printf("El arreglo desordenado es: \n");
	ImprimirArreglo(Arreglo, Num);
	
	printf("\n");
	
	printf("El arreglo ordenado es: \n");
	SelSORT(Arreglo, Num);
	ImprimirArreglo(Arreglo, Num);
	
	return 0; 
}
