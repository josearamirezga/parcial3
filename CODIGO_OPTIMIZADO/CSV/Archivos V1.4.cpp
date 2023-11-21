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

void RETRIEVENAMES(FILE * Archivo, char NOMBRES[][20]){
	
	bool Condition = true;
	int C_Count = -1;
	int i = -1;
	int j = 0;
	char Caracter;
	
	printf("\n");
	
	while (feof(Archivo) == 0 && Condition == true){
		Caracter = fgetc(Archivo);
		if (Caracter == ','){
			i++;
			j = 0;
			
			printf("%d\n",i);
			
		} else if (Caracter == '\n'){
			return;
			
		} else if (i >= 0){
			NOMBRES[i][j] = Caracter;
			j++;
		}
		
	}
	return;
}

void RETRIEVEDATA(FILE * Archivo, int START, int END,int MATRIX[][50], int COL){
	
	int C_COUNT = -1;
	int R_COUNT = 0;
	
	int CurrentN = 0;
	char Caracter;

	
	while (feof(Archivo) == 0){
		CurrentN = 0;
		Caracter = fgetc(Archivo);
	
		if (R_COUNT >= 964){
			
			return;
			
		}
		
		if (Caracter == '\n'){
			R_COUNT ++;
			C_COUNT = -1;
			// printf("%d, ", R_COUNT);
			
		}
		
		if (Caracter == ','){
			C_COUNT ++;
			fscanf(Archivo,"%d", &CurrentN);
			if (R_COUNT >= START){
				// ESTE PROGRAMA YA RECUPERA LOS DATOS Y LOS COLOCA EN LA MATRIZ.
				// printf("Recuperando DATO: %d \n", CurrentN);
				
				int INDEX_R = R_COUNT - START;
				MATRIX[C_COUNT][INDEX_R] = CurrentN;
				// printf("Recuperando DATO: %d   ", MATRIX[C_COUNT][INDEX_R]);
				// printf("INDEX = %d, COLUMNA = %d\n", INDEX_R, C_COUNT);
			}
		}
		
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
		// LA matriz esta actualmente invertida, debido a que los renglones son declarados en la segunda variable.
		
		
		int MATRIX[COLUMNS][50];
		char NOMBRES[COLUMNS][20];
		
		printf("START = %d, END = %d \n", RETRIEVELINE_START, RETRIEVELINE_END);
		
		printf("La cantidad de columnas es: %d", COLUMNS);
		
		
		RETRIEVENAMES(DATABASE, NOMBRES);
		
		// ESTE PARRAFO PRUEBA QUE ES POSIBLE REALIZAR UN ARCHIVO PARA LEER A PARTIR DE UN NOMBRE EN UNA LISTA.
		/*
		FILE * NAME_FILE = fopen(NOMBRES[0],"w");
		fputs("HOLA", NAME_FILE);
		fclose(NAME_FILE);
		
		FILE * REOPEN = fopen(NOMBRES[0],"r");
		
		while (feof(REOPEN) == 0){
			
			char Caracter = fgetc(REOPEN);
			printf("%c", Caracter);
			
		}
		fclose(REOPEN); */
		
		RETRIEVEDATA(DATABASE, RETRIEVELINE_START, RETRIEVELINE_END, MATRIX , COLUMNS);
		
		fclose(DATABASE);
		
		return 0;
}
