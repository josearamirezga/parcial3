// Ordenamiento por inserción.
// El ordenamiento por inserción. Funciona como en una baraja, ves de la izquierda a la derecha, tomando el primer elemento del arreglo como referencia
// Luego, tomas el siguiente valor. Si el siguiente valor es menor al primero, los cambias
// Luego tomas el siguiente, y lo pasas poco a poco, hasta que ya no sea menor que todos los valores

	
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
/*
int Compare(int Arreglo[5], int TamArreglo, int StartI){
	
	if (Arreglo[StartI] < Arreglo[StartI - 1]){
		
		int AUX = Arreglo[StartI];
		Arreglo[StartI] = Arreglo[StartI -1];
		Arreglo[StartI -1] = AUX
		
		return 1;
		
	} else{
		
		return 0;
		
	}
	
}

int Insertion(int Arreglo[5], int TamArreglo){
	
	
	
} */

int Insertion(int Arreglo[5], int TamArreglo){
	
	for(int i = 0; i < TamArreglo; i++){
		
		int NumActual = Arreglo[i]
		int posAnterior = i - 1;
		
		while (posAnterior >= 0 && Arreglo[posAnterior] > NumActual){
			
			Arreglo[posAnterior + 1] = Arreglo[posAnterior];
			posAnterior --
			
		}
		
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
	Insertion(Arreglo, Num);
	ImprimirArreglo(Arreglo, Num);
	
	return 0; 
}
