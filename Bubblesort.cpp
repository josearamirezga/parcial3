// Ordenar es simplemente colocar informacion de una manera especial basandonos en un criterio de selección.
//Los tipos de ordenamiento más importantes son: Burbuja, selección e inserción.

// Bubble sort: Este es el algoritmo mas sencillo de la lista previa, funciona
//Revisando cada elemento de la lista que va a ser ordenada vcon el siguiente, intercambiando posicion en el orden equivocado
//Es necesario revisar varias veces toda la lista hasta que no se necesiten mas intercambios
// Este algoritmo obtiene su numbre de la forma en la que los elementos suben como burbujas:
	
	// Inicial: Unsorted Array
	// Paso uno: compra el primero y el segundo, los cambia, y asi sucesivamente
	
	// Se repite el paso hasta que no se necesite más cambios.
/*
#include <stdio.h>
#include <stdlib.h >
#include <time.h>	

void BubbleSort(unsigned long long int Array[5], unsigned long long int ArrLeng , int Flag){
	
	if (Flag == 0){
		
		Flag = 1;
		
		for (int i = 0; i < ArrLeng; i++){
			
			if (Array[i] > Array[i + 1]){
				
				int AUX = Array[i];
				Array[i] = Array[i + 1];
				Array[i + 1] = AUX;
				
				Flag = 0;
			}
			
		}
		
		BubbleSort(Array, ArrLeng, Flag);
		
	} else if (Flag == 1){
		printf("El arreglo despues de ordenar: \n");
		
		for(int i = 0; i < ArrLeng; i++){
			
			printf("%d  ", Array[i]);
			
		}
		
	}
}

int main(){
	srand(time(NULL));
	
	unsigned long long int Num1 = 0;
	printf("Escribe que tan grande quieres que sea el arreglo: \n");
	
	scanf("%d",&Num1);
	unsigned long long int Arreglo[Num1];
	printf("El arreglo antes de ordenar: \n");
	
	for (int i = 0; i < Num1; i++){
		
		unsigned long long int Rand = rand()%10 + 1;
		Arreglo[i] = Rand;
		printf("%d  ", Arreglo[i]);
	}
	
	printf("\n");
	int Flag = 0;
	
	BubbleSort(Arreglo,Num1,Flag);
	return 0;
} */

// Ejemplo de ordenamiento burbuja ver.2
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	
	int i, j, n, temp = 0, bandera = 0;
	srand(time(NULL));
	printf("Numero de elementos a ordenar\n");
	scanf("%d", &n);
}

*/

// Ordenamiento por seleccion: consiste en encontrar el menor de todos los elementos del arreglo e intercambiarlo con el que está en la primera posición, luego el segundo más pequeño y asi sucesivamente.

//Este algoritmo mejora ligeramente le algoritmo de la burbuja.
// Su funcionamiento se puede definir de forma general como:
	
	// Buscar el mínimo elemento entre una posición i y el final de la lista
	
	
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Realizar una lista en main, realizar una funcio que indentifique el index del numero más pequeño de una lista. realizar el Selection Sort

int ListCompare(int arreglo[5], int i){
	int VAL = arreglo[0];
	int END_I = 0;
	
	for (i = 0)
	
}

int SelSort(){
	
	
	
}

int main(){
	srand(time(NULL));
	int MAX = 100;
	int arreglo[MAX]
	for(int i = 0; i < MAX; i++){
		
		arreglo[i] = rand() %100 - 50;
		
	}
	
	SelSort();
	
	return 0;
	
}
