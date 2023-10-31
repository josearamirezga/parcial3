#include <stdio.h>

unsigned long long int Fibonacci(unsigned long long int Num1,unsigned long long int CACHE[5]){
	
	if (CACHE[Num1] != -1){
		return CACHE[Num1];
	} else {
		if (Num1 < 2){
			
			return 1;

		} else {
			
			CACHE[Num1] = Fibonacci(Num1 - 1, CACHE) + Fibonacci(Num1 - 2, CACHE);
			unsigned long long int Result = CACHE[Num1];
			printf("%llu  ", CACHE[Num1]);
			
			return Result;
		}
	}
}

//Fibonacci() se va al cache, y si no se tiene que volver a calcular, se reg3resa 0, los guardas los valores en otra tabla y los imprimes.

int main(){
	
	unsigned long long int Num1;
	
	printf("Escribe los elementos de Fibonacci que quieres calcular: \n");
	scanf("%llu", &Num1);
	
	unsigned long long int CACHE[Num1];
	for (int i = 0; i <Num1; i++){
		CACHE[i] = -1;
	}
	
	printf("El numero de fibonacci de %llu es:",Num1);
	Fibonacci(Num1,CACHE);
	return 0;
	
}
