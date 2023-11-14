// El ordenamiento quicksort es un algoritmo basado en la tecnica divide y venceras. La busqueda binaria funciona al dividir repetidamente a la mitad la porcion de la lista

// BENCHMARKS.

// Un benchmark es una serie de pruebas o medidas que se relaizan en un sitema como en un software, para evaluar sucapacidad en diversas tareas

// Se utilizan par acomparar el rendimiento de diferentes hardware o software para identificar areas de mejora.

// Benchmarks de software de aplicacion: Prueban el rendimiento de programas especificos, suites de oficina, etc. 

// Benchmark de juegos: Muden la velocidad de FPS,etc

// Benchmark de sistemas operativos, evaluan el rendiiento y la eficiencia de los sistemas.

// PARA REALIZAR UN BENCHMARK

#include <stdio.h>
#include <time.h>

int main(){
	
	clock_t tic = clock();
	
	// FUNCIONES...
	
	for (int i = 0; i < 100000; i++){
		
		printf("%d \n", i);
		
	}
	printf("\n");
	
	clock_t toc = clock();
	printf("ELAPSED: %f SECONDS\n", (double)(toc - tic)/CLOCKS_PER_SEC);
	
	return 0;
}
