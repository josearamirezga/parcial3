// Ordenamiento binario.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int BINARY_FIND(int Arreglo[5], int TamArreglo, int ELEMENTO){
	
	int primero = 0;
	int ultimo = TamArreglo - 1;
	int mitad = (primero + ultimo)/2;
	
	while (primero <= ultimo){
		
		if (Arreglo[mitad] < ELEMENTO){
			
			primero = mitad + 1;
			
		} else if (Arreglo[mitad] == ELEMENTO){
		return mitad - 1;
		
		} else {
			ultimo = mitad - 1;

		}
		mitad = (primero + ultimo)/2;
	}
		
}

int CREATE_LIST(int num, int lista[5]){
	
	for (int i = 0; i < num; i++){
		
		lista[i] = (rand()%500) + 1;
		
	}
}

int ImprimirArreglo(int Arreglo[5], int TamArreglo){
	
	for (int i = 0; i < TamArreglo; i++){
		
		printf("%d   ", Arreglo[i]);
	}
}

int Insertion(int Arreglo[5], int TamArreglo){
	
	for(int i = 0; i < TamArreglo; i++){
		
		int NumActual = Arreglo[i];
		int posAnterior = i - 1;
		
		while (posAnterior >= 0 && Arreglo[posAnterior] > NumActual){
			
			Arreglo[posAnterior + 1] = Arreglo[posAnterior];
			posAnterior --;
			
		}
		Arreglo[posAnterior + 1] = NumActual;
	}
}

int main(){
	
	srand(time(NULL));
	int SIZE = 0, Elemento = 0;
	
	printf("Escribe el tamaño de elementos en el arreglo: \n");
	scanf("%d", &SIZE);
	
	printf("Escribe el elemento que quieres buscar: \n");
	scanf("%d", &Elemento);
	
	int ARREGLO[SIZE];
	
	printf("El arreglo desordenado es: \n");
	
	CREATE_LIST(SIZE, ARREGLO);
	ImprimirArreglo(ARREGLO, SIZE);
	printf("\n");
	printf("El arreglo ordenado es: \n");
	
	Insertion(ARREGLO, SIZE);
	ImprimirArreglo(ARREGLO, SIZE);
	printf("\n");
	
	int POS = BINARY_FIND(ARREGLO, SIZE, Elemento);
	printf("La posición del INDEX en el arreglo es %d\n", POS);
	
	return 0;
	
}


