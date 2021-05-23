#include <stdio.h>



int main(){

	int i=0;    //se declaran las variables
	int sum=0;  // i y sum
	

	//Se imprime la descripción sobre los números que 
	//vamos a calcular
	
	printf("Los primeros 100 números triangulares son:\n");	
	
	//El siguiente bucle de while imprimirá los primeros
	//100 numeros triangulares
	
		
	while (i<99)
	{
		i++;	
		sum+=i;
		printf("%d, ", sum);
	}

	if (i==99){
                printf("5050.\n");
	
	
	}
}

