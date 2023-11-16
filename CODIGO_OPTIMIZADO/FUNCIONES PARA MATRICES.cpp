// FUNCIONES PARA MATRICES.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CrearMatriz(int Matriz[][5], int RENG, int COL){
	
	for (int i = 0; i < RENG; i++){
		
		for (int j = 0; j <COL; j++){
			
			int random = rand()% 10;
			
			Matriz[i][j] = random;
			
	 }
	}
}

void PrintMatriz(int Matriz[][5], int RENG, int COL){
	
	for (int i = 0; i < RENG; i++){
		
		for (int j = 0; j < COL; j++){
			
			printf("%d  ", Matriz[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
}

void ArchivarMatriz(int Matriz[][5], int RENG, int COL, FILE *Archivo){
	
	for (int i = 0; i < RENG; i++){
		
		for (int j = 0; j < COL; j++){
			
			fprintf(Archivo, "%d  ", Matriz[i][j]);
			
		}
		fprintf(Archivo,"\n");
	}
	fprintf(Archivo,"\n");
}

int main(){
	// EJECUCION DE SAMPLE: 
	
	// UNICAMENTE FUNCIONA CUANDO EL ARGUMENTO 2 DE LA MATRIZ ES UN VALOR NO CAMBIABLE.
	
	int RENG = 10;
	int MATRIZ[RENG][5];
	
	srand(time(NULL));
	
	CrearMatriz(MATRIZ, RENG, 5);
	PrintMatriz	(MATRIZ, RENG, 5);
	
	return 0;
	
}
