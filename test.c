#include <stdio.h>



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

  char caracter;
  printf("Por favor, introduce una letra:\n");

  caracter = getchar();
  char vocales[]= {'a','e','i','o','u'};
  char consonantes[]= {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
  
int la = sizeof(vocales);
int lc = sizeof(consonantes);
int v=comparar(caracter,la,vocales);
int c=comparar(caracter,lc,consonantes);

if(v==1){
	 printf("la letra ingresada es una vocal\n");

	printf("%d\n",lc);
}

if(c==1){
	printf("La letra ingresada es una consonante\n");
}


if(v==0 && c==0){
	printf("La letra o caracter ingresado no es válido, intente de nuevo\n");
}

return 0;
}

