#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pitagoras(int co, int ca);	

int main(){

	int co, ca;
	double hip;

	printf("\nDigite o valor dos catetos: ");
	scanf(" %i %i", &co, &ca);

	hip=pitagoras(co,ca);

	printf(" - Hipotenusa: %.1lf", hip);

	return 0;
}

double pitagoras(int co,int ca){

	double hip;

	hip = sqrt(pow(co,2) + pow(ca,2));	

	return hip;

}