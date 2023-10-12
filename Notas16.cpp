// Más implementaciones de funciones con pequeños cambios.

// Una funcion es un conjunto de lineas de codigo que realizan una tarea especifica y puede retornar un valor.

// Las funciones puedn tomar parametros que modifiquen su funcionamiento.

// las funciones son utilizadas para descomponer grandes problemas en tareas simples y para implementar operaciones que son comunmente utilizadas durate un programa y de esta manera reducir la cantidad de codigo.

// El main o funcion principal en donde comienz el punto de ejecucion del programa, es el que se encarga de llamar a las otras funciones como: Proceso A o B

// Funciones en c: El manejo de los parametros es lo que cambia.

// Los cambios:
/*
#include <stdio.h>

void IMPRESION(int n){
	
	int i;
	
	for (i = 1; i <= n; i++){
		
		printf("*");
		
	}
	
	printf("\n");	
}

int main(){
	
	int a = 10;
	
	IMPRESION(20);
	IMPRESION(a);
	IMPRESION(a + 2);
	
	return 0;
} */

#include <stdio.h>

int checharNumerosPrimos(int n);

int main(){
	
	int n1, n2, bandera;
	
	printf("Ingresa dos numeros: ");
	
	scanf("%d",&n1);
	scanf("%d",&n2);
	
	printf("\nPrimos entre %d y %d son: ", n1,n2);
	
	for(int i = n1 +1; i <n2; i++){
		bandera = checharNumerosPrimos(i);
		
		if (bandera == 1){
			
			printf("%d\n", i);
			
		}
		
	}
	return 0;
}

int checharNumerosPrimos(int n){
	
	int j;
	
	for(j = 2; j <= n/2; j++){
		
		if (n%j == 0){
			
			return 0;
			
		}
		
	}
	return 1;
}
