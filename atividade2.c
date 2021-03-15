#include <stdio.h>
#include <stdlib.h>

double fatorial(int fato);	

int main(){

	int num;
	double fato;

	printf("\nDigite um valor: ");
	scanf(" %i", &num);

	fato = fatorial(num);

	printf(" - Fatorial: %.0lf", fato);

	printf("\n");

	return 0;
}

double fatorial(int fato){

	double result=1;

	for (;fato>1;fato--){
		result=result*fato;
	}

	return result;	
}