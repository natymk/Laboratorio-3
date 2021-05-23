#include <stdio.h>


//La siguiente función, compara una por una las entradas de un array consovoc (de tamaño l, que contiene una serie ya sea de consosnantes o de vocales)
//con un caracter b ingresado por el usuario. Si alguna de las letras del array coincide con el caracter ingresado, la función retornará un 1(true)

int comparar(char b, int l, char consovoc[]){
        int boole=0;
        int i = 0;

        while (i<l){
                if (b==consovoc[i]){
                boole=1;
                break;
                }
	i++;	
	}

        return boole;
}



int main(void)
{

//Se le dan instrucciones al usuario y se le solicita que ingrese una letra
printf("¿Consonante o vocal? \n Intrucciones:\n 1.Solo pueden usarse letras minúsculas. \n 2.No ingrese otros caracteres que no sean letras.\n");
printf("Por favor, introduce una letra:\n");

//Con el comando getchar, la letra introducida por el usuario será almacenada en la variable caracter
  char caracter;
  caracter = getchar();
	
//Se crean dos arrays de tipo char, los cuales almacenaran las vocales y letras del abecedario(en minuscula) respectivamente.
  char vocales[]= {'a','e','i','o','u'};
  char consonantes[]= {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
 
//Las constantes la y lc, almacenan el tamaño del array de vocales, y del array de consonantes, respectivamente.
int la = sizeof(vocales);
int lc = sizeof(consonantes);
	
//Se llama a la función "comparar" creada anteriormente, para que compare la letra ingresada con el array de vocales
int v=comparar(caracter,la,vocales);
	
//Se llama a la función "comparar" nuevamente, pero esta vez para que compare la letra ingresada con el array de vocales
int c=comparar(caracter,lc,consonantes);

//Se crean algunas condiciones, en las que si la función comparar encontró la letra ingresada en alguno de los arrays 
//la clasificará como vocal o consonante según corresponda, e imprimirá el resultado en pantalla

if(v==1){
	 printf("la letra ingresada es una vocal\n");
}

if(c==1){
	printf("La letra ingresada es una consonante\n");
}

//Si el caracter ingresado no es una letra o vocal minuscula, se imprimirá en pantalla que este no es válido y que debe intentar de nuevo.

if(v==0 && c==0){
	printf("La letra o caracter ingresado no es válido, intente de nuevo\n");
}

return 0;
}

