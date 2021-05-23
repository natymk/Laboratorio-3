#include <stdio.h>
//Se creó una función que es capaz de calcular los primeros n números
//triangulares.

int trianum(int n){
        int i=1;
        int sum=0;
//Este bucle while hace n iteraciones, y en cada una de ellas aumenta en 
//una unidad a la variable i.
        while (i<=n)
        {
                if(i<n){
                sum+=i;  //En cada iteración, sum suma de manera acumulativa
			 //los valores de i, obteniendo así cada vez el nú_
			 //mero triangular que le sigue al anterior.
                printf("%d, ", sum);
                }
               else{	 
                sum+=i;
                printf("%d.\n", sum); //Este else, se hace para que la lista de numeros 
			              //termine con un punto y un espacio al ser impre_
			              //so en pantalla.
                }
               i++;
        }
}

//Dentro del main se llama la funciòn trianum para que imprima los primeros 100 números
//triangulares.
int main(){
        printf("Los primeros 100 números triangulares son:\n");

        trianum(100);
}
~       
