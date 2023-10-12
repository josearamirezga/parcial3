// Funciones.

// Una funcion es un bloque de código que realiza alguna operación específica

// Una funcion puede definir opcionalmente unos parámetros de entrada que permiten a los llamadores pasar ciertos valores o argumentos a la funcion

// Una funcion tambien puede devolver un valor como salida.

// Las funciones suelen encapsular una operacion mas o menos compleja que deriva un resultado.

// La funcion main es una funcion. El diagrama es: Entrada con parametros - Proceso con subrutinas o funcion - Salida con valor de retorno.

// Las funciones en un programa son entidades que dado un conjunto de datos (los parametros), se les encarga realizar una tarea muy concreta y se espera hasta obtener el resultado

// Lo idoneo es dividir tareas complejas en porciones mas simples que se implementan como funciones

// La division y agrupacion de tareas en funciones es uno de los aspectos mas importantes.

// Las funciones en C tienen el siguiente formato:
	
	// Tipo del resultado NOMBRE (Tipo_Parametro, ...) { funcion o cuerpo de la funcion} regresa el valor.
	
// La funcion se utiliza para substituir acciones repetitivas.
/*
#include <stdio.h>

int suma (int a, int b){
	
	return (a + b);
	
}

int main(){
	
	printf("La suma es: %d \n", suma(5,8));
	printf("La suma es: %d \n", suma(646,32));
	return 0;
} */

// Ejemplo 2:
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ALEATORIO(int max, int min){
	
	return (rand()%(max + 1 - min) + min);
	
}

int main(){
	
	srand(time(NULL));
	printf("Aleatorio: %d", ALEATORIO(10,1));
	int x, lista[10];
	
	for (x = 0; x < 10; x++){
		lista[x] = ALEATORIO(70,50);
	}
	
	printf("\n");
	
	for (x = 0; x < 10; x++){
		
		printf("%d \n", lista[x]);
		
	}
	
	return 0;
}

*/
/*
#include <stdio.h>

void imprimir(){
	
	int x;
	for (x = 0; x < 10; x++){
		
		printf("%d\n",x);
		
	}
	
}

int main(){
	
	imprimir();
	imprimir();
	
	return 0;
	
}

*/
/*
#include <stdio.h>

int sum(int a, int b){	
	return a + b;
}

float prom(int a, int b){
	return (sum(a, b)/2.0);	
}

int main(){
	
	printf("Res: %f \n", prom(sum (1, 2), sum(2,3)));
	printf("Res: %f \n", prom(sum (5, 6), sum(7,8)));
	printf("Res: %f \n", prom(sum (9, 10), sum(11,12)));
	
	
}*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void imprimir(int a, char texto[4]){
	
	int x, y;
	
	for ( x = 0; x < a; x++){
		
		for ( y = 0; y <= strlen(texto); y++){
			usleep(1000);
			printf("  %c  ", texto[y]);
			
		}
		printf("\n");
		
	}
	printf("\n");
	
}

int main(){
	
	char cadena[]= "hola";
	
	char cadena2[] = "mundo";
	
	imprimir(5, cadena);
	imprimir(4, cadena2);
	
	return 0;
}
