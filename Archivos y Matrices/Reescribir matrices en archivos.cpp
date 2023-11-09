// Objetivo:
	
	// Crear una matriz que escriba los valores de una matriz a un documento
	
	
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CrearMatriz(int Matriz[5][5], int MatrizLen){
	
	for (int i = 0; i < MatrizLen; i++){
		
		for (int j = 0; j <MatrizLen; j++){
			
			int random = rand()% 10;
			
			Matriz[i][j] = random;
			
	 }
	}
}

int PrintMatriz(int Matriz[5][5], int MatirzLen){
	
	for (int i = 0; i < MatirzLen; i++){
		
		for (int j = 0; j < MatirzLen; j++){
			
			printf("%d  ", Matriz[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
}

int ArchivarMatriz(int Matriz[5][5], int MatirzLen, FILE *Archivo){
	
	for (int i = 0; i < MatirzLen; i++){
		
		for (int j = 0; j < MatirzLen; j++){
			
			fprintf(Archivo, "%d  ", Matriz[i][j]);
			
		}
		fprintf(Archivo,"\n");
	}
	fprintf(Archivo,"\n");
}

int main(){
	
	srand(time(NULL));
	
	int MatrizLen = 5;
	int Matriz[5][5];
	
	CrearMatriz(Matriz, MatrizLen);
	
	printf("La matriz creada es: \n");
	PrintMatriz(Matriz, MatrizLen);
	
	
	FILE * Archivo = fopen("PruebaMatriz.txt","w");
	
	if (Archivo == NULL){
		
		perror("El archivo no fue encontrado.");
		return 1;
	}
	
	printf("El archivo fue abierto."); 
	
	ArchivarMatriz(Matriz, MatrizLen, Archivo);
	
	fclose(Archivo);
	return 0;
}
