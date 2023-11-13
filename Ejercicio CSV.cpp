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

int RETRIEVEDATA(FILE * Arhcivo, int START, int END, int COL){
	
	int COL = -1;
	
	while (feof(Archivo) == 0){
		
		
		
	}
}

int main(){
		int ID_USER = 0, RENGLONES = 0, COLUMNAS = 0;
		printf("Escribe tu ID de usuario.\n");
		scanf("%d", &ID_USER);
		
		int RETRIEVELINE_START = ID_USER%1000;
		int RETRIEVELINE_END = RETRIEVELINE_START + 50;
		printf("El ID de computacion es: %d\n", RETRIEVELINE_START);
		
		int Columnas = 0;
		
		FILE * DATABASE = fopen("emails.csv","r");
		if (DATABASE == NULL){
			
			perror("El Archivo no fue abierto correctamente...\n");
			
			return 1;
		}
		
		printf("El archivo fue abierto correctamente. \n");
		
		int COLUMNS = GET_CSV_COLUMNS(DATABASE);
		printf("La cantidad de columnas es: %d", COLUMNS);
		
		RETRIEVEDATA(DATABASE, RETRIEVELINE_START, RETRIEVELINE_END, COLUMNS);
		
		fclose(DATABASE);
		
		return 0;
}
