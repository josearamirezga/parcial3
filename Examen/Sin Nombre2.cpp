#include <stdio.h>


int main(){
	
	printf ("El archivo seleccionado es emails.csv\n");
	FILE * DATABASE = fopen("PruebaEmails.csv", "r");
	
	char Caracter;
	int COLUMN_I = 0;
	int ROW_I = 0;
	
	int i = 0, j = 0;
	
	int FLAG = -1;
	
	bool CONDITION = false;
	
	if (DATABASE == NULL){
		perror("Error al crear el archivo\n");
		return 1;
	}
	
	printf("El archivo fue abierto.\n");
	
	printf("El valor al inicio: %d \n", ftell(DATABASE));
	
	
	
	while(feof(DATABASE) == 0){
		Caracter = fgetc(DATABASE);
		if (Caracter == '\n'){
			
			ROW_I++;
			CONDITION = true;
			
		} else if(!CONDITION && Caracter == ','){
			
			COLUMN_I++;
			
		}
	}
	
	printf("El valor al final: %d \n", ftell(DATABASE));
	printf("La cantidad de columnas es: %d\n", COLUMN_I); // COLUMN_I es la cantidad de columnas que hay
	printf("La cantidad de renglones es: %d\n", ROW_I); // ROW_I es la cantidad de renglones que hay
	
	int MATRIX[ROW_I][COLUMN_I];
	
	fseek(DATABASE,0, SEEK_SET);
	
	while (feof(DATABASE) == 0){
		int NUM = 0;
		FLAG = fscanf(DATABASE, "%d", &NUM);
		Caracter = fgetc(DATABASE);
		
		printf("%d", Caracter);
		
	} 
	/*
	for (i = 0; i < ROW_I; i++){
		
		for (j = 0; j < COLUMN_I; j++){
			
			printf("%d  ", MATRIX[i][j]);
			
		}
		printf("\n");
	}
	*/
	fclose(DATABASE);
	return 0;
}
