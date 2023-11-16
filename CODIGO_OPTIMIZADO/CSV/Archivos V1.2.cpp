// Algoritmo QUICKSORT

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	FILE * Archivo = fopen("TEST.txt", "r");
	
	if (Archivo == NULL){
		
		perror("El archivo no fue abierto correctamente\n");
		return 1;
		
	}
	printf("El archivo fue abierto correctamente.\n");
	int NUM = -1;
	
	while (feof(Archivo) == 0){
		
		char Caracter = fgetc(Archivo);
		
		if (Caracter == '\n'){
			
			printf("Yo soy un salto de linea! \n");
		}
		
		if (Caracter == ','){
			
			fscanf(Archivo, "%d", &NUM);
			
			printf("%d\n", NUM);
			
		}
	}
}
