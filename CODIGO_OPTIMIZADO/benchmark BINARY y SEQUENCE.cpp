// BENCHMARK PARA BINARY_FIND Y SEQUENCE_FIND

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 // CREAR ARREGLO
int CREATE_LIST(int num, int lista[5]){
	
	for (int i = 0; i < num; i++){
		
		lista[i] = (rand()%5000) + 1;
	}
}
 // IMPRIMIR ARREGLO
int ImprimirArreglo(int Arreglo[5], int TamArreglo){
	
	for (int i = 0; i < TamArreglo; i++){
		
		printf("%d   ", Arreglo[i]);
	}
}
 // INSERTION
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


int SEQUENCE_FIND(int lista[5], int num, int elemento){
	
	for (int i = 0; i < num; i++){
		
		if (lista[i] == elemento){
			
			return i;
			
		}
		
	}
	return -1;
}

int main (){
	
	
	
	srand(time(NULL));
	int ELEMENTO = 0,  SIZE = 0;
	
	printf("Escribe la cantidad de elementos en el arreglo: \n");
	scanf("%d", &SIZE);
	
	printf("El elemento a encontrar: \n");
	scanf("%d", &ELEMENTO);
	
	int ARREGLO[SIZE];
	
	CREATE_LIST(SIZE, ARREGLO);
	
	printf("ORDENANDO EL ARREGLO \n");
	Insertion(ARREGLO, SIZE);
	
	// printf("El arreglo desordenado es: \n");

	
	printf("\n");
	printf("Inicializando el SEQUENCE_FIND: \n");
	
	clock_t tic = clock();
	
	int FIND_INDEX = -1;
	FIND_INDEX = SEQUENCE_FIND(ARREGLO, SIZE, ELEMENTO);
	
	clock_t toc = clock();
	
	printf("ELAPSED: %f SECONDS\n", (double)(toc - tic) / CLOCKS_PER_SEC);
	printf("El INDEX encontrado fue: %d \n", FIND_INDEX);
	
	printf("\n");
	printf("Inicializando el BINARY_FIND: \n");
	
	tic = clock();
	
	FIND_INDEX = -1;
	FIND_INDEX = BINARY_FIND(ARREGLO, SIZE, ELEMENTO);
	
	toc = clock();
	printf("ELAPSED: %f SECONDS\n", (double)(toc - tic) / CLOCKS_PER_SEC);
	
	printf("El INDEX encontrado fue: %d \n", FIND_INDEX);
	
	return 0;
}
