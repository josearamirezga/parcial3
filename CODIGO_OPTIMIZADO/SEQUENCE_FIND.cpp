// Algoritmos de ordenamiento, quicksort, comparacion oredenacion, algoritmos de busqueda, busqueda secuencial. Ordenar es simplemente secuenciar los datos por medio de un criterio de seleccion.

// PARA EL EXAMEN FINAL, todos los algoritmos EN FUNCIONES.

// Lo nuevo: algoritmos de busqueda: estructura de datos, describir una estructura de datos implica explicar como se organiza y almacena la informacion dentro de esa estructura. Esto generalmente incluye informacion sobre los tipos de datos que contiene, com oestan organizados y como se acceden a ellos.

// CSV, por ejemplo se compone: \n y ,

// La busqueda de un elemento dentro de una matriz, es lo mas importante. Busqueda de algoritmos principales es: Busqueda secuencial, y busqueda binaria.

// Busquyeda secuencial: Estructura desordenada
// Busqueda binaria: Estructura ordenada

// La busqueda secuencial compara cada elemento de un arreglo o matriz con un valor a buscar. 
// El recorrid solo necesita un ciclo normalmente.
//La busqueda termina hasta que los elementos comparados sean iguales

// Busqueda secuencial:
	
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CREATE_LIST(int num, int lista[5]){
	
	for (int i = 0; i < num; i++){
		
		lista[i] = (rand()%10) + 1;
		printf("%d,  ", lista[i]);
	}
}

int SEQUENCE_FIND(int num, int lista[5], int elemento){
	
	for (int i = 0; i < num; i++){
		
		if (lista[i] == elemento){
			
			return i;
			
		}
		
	}
	return -1;
}

int main(){
	
	int num, elemento, bandera = 0;
	srand(time(NULL));
	
	printf("Numero de elementos a crear: \n");
	scanf("%d",&num);
	
	int lista[num];
	
	printf("Elemento a buscar: \n");
	scanf("%d", &elemento);
	
	printf("Elementos de la lista: \n");
	
	int FIND_INDEX = 0;
	
	CREATE_LIST(num ,lista);
	FIND_INDEX = SEQUENCE_FIND(num, lista, elemento);
	
	printf("El Index donde se encuentra el elemento es: %d, con el valor %d \n", FIND_INDEX, elemento);
	
}

// La búsqueda binaria es un algoritmo eficiente para encontrar un elemento en una lista ordenada de elementos
// Pasos: La busqueda comienza examinando elitem central, dividimos el arreglo, y si el elemento es mayor o menor, se elimina la parte izquierda o derecha, y asi sucesivamente.
// al programar hay patrones, existe un minimo que necesitamos


