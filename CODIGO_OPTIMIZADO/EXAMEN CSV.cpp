// BASES DE DATOS

// PROGRAMA QUE LEE LOS CORREOS.

#include <stdio.h>

#include <stdio.h>

int GET_CSV_COLUMNS(FILE * Archivo){
	
	int COL = -1;
	
	while (feof(Archivo) == 0){
		
		char Caracter = fgetc(Archivo);
		if (Caracter == ','){
			
			COL ++;
		}
		
		if (Caracter == '\n'){
			
			fseek(Archivo, 0, SEEK_SET);
			return COL;
			
		}
	}
}

// YA SABEMOS QUE EL OFFSET VA A SER DE 50.

void RETRIEVENAMES(FILE * Archivo, char NOMBRES[]){
	
	
	
}

void RETRIEVEDATA(FILE * Archivo, int START, int END,int MATRIX[][50], int COL){
	
	int C_COUNT = -1;
	int R_COUNT = -1;
	
	int CurrentN = 0;
	char Caracter;
	
	while (feof(Archivo) == 0){
		CurrentN = -1;
		fscanf(Archivo,"%d", &CurrentN);
		
		C_COUNT = C_COUNT % COL;
		
		if (CurrentN == -1){
			Caracter = fgetc(Archivo);
			
			if (Caracter == ','){
				
				if (C_COUNT == 0){
					
					R_COUNT++;
					
				}
				
				C_COUNT++; 	
			}

			
		} else {
			
			if (R_COUNT > START && R_COUNT < END){
				
				printf("%d, %d\n", C_COUNT, R_COUNT);
				
				MATRIX[C_COUNT][R_COUNT - START] = CurrentN;
				printf("RECOLECTANDO DATOS\n, %d", R_COUNT - START);
			}
			
			if (R_COUNT >= END){
				
				return;
				
			}
		}
	}
}

void PrintMatriz(int Matriz[][50], int RENG, int COL){
	
	for (int i = 0; i < RENG; i++){
		
		for (int j = 0; j < COL; j++){
			
			printf("%d  ", Matriz[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
}

int SUMAMATRIZ(int MATRIX[][50], int COLUMNAS, int RENGLONES, int ARREGLO[]){
	
	int SUMATEMP = 0;
	
	for (int i = 0; i < COLUMNAS; i++){
		
		SUMATEMP = 0;
		
		for (int j = 0; j < 50; j++){
			
			SUMATEMP = SUMATEMP + MATRIX[i][j];
			
		}
		ARREGLO[i] = SUMATEMP;
		
		printf("%d   I: %d\n", ARREGLO[i], i);
	}	
}

int main(){
		int ID_USER = 0, RENGLONES = 0, COLUMNAS = 0, OFFSET = 50;
		printf("Escribe tu ID de usuario.\n");
		scanf("%d", &ID_USER);
		
		int RETRIEVELINE_START = ID_USER%1000;
		int RETRIEVELINE_END = RETRIEVELINE_START + OFFSET;
		printf("El ID de computacion es: %d\n", RETRIEVELINE_START);
		
		int Columnas = 0;
		
		// VIENDO SI ABRIO EL ARCHIVO
		
		FILE * DATABASE = fopen("emails.csv","r");
		if (DATABASE == NULL){
			
			perror("El Archivo no fue abierto correctamente...\n");
			
			return 1;
		}
		
		printf("El archivo fue abierto correctamente. \n");
		
		// OBTENIENDO LAS COLUMNAS
		
		int COLUMNS = GET_CSV_COLUMNS(DATABASE);
		
		// DECLARAR MATRIZ PARA LA SUMA, YA SABEMOS QUE EL OFFSET ES UNA CONSTANTE NO CAMBIANTE DE 50.
		
		int MATRIX[COLUMNS][50];
		char NOMBRES[COLUMNS];
		
		printf("START = %d, END = %d \n", RETRIEVELINE_START, RETRIEVELINE_END);
		
		printf("La cantidad de columnas es: %d", COLUMNS);
		
		RETRIEVEDATA(DATABASE, RETRIEVELINE_START, RETRIEVELINE_END, MATRIX , COLUMNS);
		int ARREGLO_SUMA[COLUMNS];
		
		PrintMatriz(MATRIX, 10, 10);
		
		SUMAMATRIZ(MATRIX, COLUMNS, OFFSET, ARREGLO_SUMA);
		
		fclose(DATABASE);
		
		return 0;
}
