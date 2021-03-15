#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenar(char *str1);

int main(){
	char *str1 = malloc(20 * sizeof(char));
	printf("Digite cinco letras: ");

	gets(str1);

	ordenar(str1);

	return 0;
}
void ordenar(char *str1){
	char *strAux = malloc(20 * sizeof(char));
	int  tam,i, j;
	char ch;

	tam = strlen( str1 );

    for( i = 0; i <= tam; i++ ){

        if( ( str1[i] >= 97 ) && ( str1[i] <= 132 ) )
            str1[i] = str1[i] - 32;

    }

	for(i=1;i<tam;i++){
    	for(j=0;j<tam-i;j++){
			if(str1[j]>str1[j+1]){				
				ch=str1[j];
				str1[j] = str1[j+1];
				str1[j+1]=ch;					
			}				
		}
	}
	
    printf(" - Ordenado: %s", str1);
}