#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Programa que realiza una suma de matriz vertical.


int main(){
	int NUM_MAX = 5000;
	int RENG = 50;
	int MATRIX[RENG][NUM_MAX];
	
	srand(time(NULL));
	
	for (int i = 0; i < RENG; i++){
		
		for (int j = 0; j < NUM_MAX; j++){
			
			int rando = rand() % 50;
			
			MATRIX[i][j] = rando; 
			
			printf("%d,  ", rando);
			
		}
		printf("\n");
	}
	
	int SUMA[NUM_MAX];
	int SUMTEMP = 0;
	for (int i = 0; i < NUM_MAX; i++){
		
		SUMTEMP = 0;
		
		for (int j = 0; j < RENG; j++){
			SUMTEMP = SUMTEMP + MATRIX[j][i];
		}
		
		SUMA[i] = SUMTEMP;
		
		printf("%d   ", SUMA[i]);
		
	}

	
	return 0;
}
