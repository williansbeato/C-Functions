#include <stdio.h>
#include <stdlib.h>

int primo();	

int main(){

	int v1;
	int result;

	printf("Digite um valor: ");
	scanf(" %i", &v1);

	result=primo(v1);

	if(result == 2){ 
		printf(" - PRIMO", v1);
	}
	else{
		printf(" - NAO PRIMO", v1); 
	}


	return 0;
}

int primo(int valor){

	int result=0;
	int i;

	for (i=1; i <= valor;i++){

		if(valor % i == 0){

			result++;
		}	
	}

	return result;
}