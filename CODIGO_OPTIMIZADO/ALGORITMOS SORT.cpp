// Algoritmos SORT 

// FUNCIONES PARA ARRAYS.

int CREATEARRAY(int ARRAY[5], int ARRLEN){
	
	for (int i = 0; i < ARRLEN; i++){
		
		int ran = rand()%10;
		ARRAY[i] = ran;	
	}	
}

int PRINTARRAY (int ARRAY[5], int ARRLEN){
	
	for (int i = 0; i < ARRLEN; i++){
		
		printf("%d  ", ARRAY[i]);	
	
	}	
	printf("\n");
}


// SORTS



int INSERTION(int Arreglo[5], int TamArreglo){
	
	for(int i = 0; i < TamArreglo; i++){
		
		int NumActual = Arreglo[i]
		int posAnterior = i - 1;
		
		while (posAnterior >= 0 && Arreglo[posAnterior] > NumActual){
			
			Arreglo[posAnterior + 1] = Arreglo[posAnterior];
			posAnterior --
			
		}
		
	}
	
}

void SELECTSORT(int ARRAY[5], int ARRAYLENG, int FLAG){
	if (FLAG == 0){
		
		return;
		
	} else {
		
		FLAG = 0;
		
		for (int i = 0; i < ARRAYLENG; i++){
			if (ARRAY[i] < ARRAY[0]){
				
				FLAG = 1;
				
				int AUX = ARRAY[0];
				ARRAY[0] = ARRAY[i];
				ARRAY[i] = AUX;
			}	
		}
	}
	SELECTSORT(ARRAY, ARRAYLENG, FLAG);
}

