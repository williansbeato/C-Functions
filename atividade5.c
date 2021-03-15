#include <stdio.h>
#include <stdlib.h>

int agregar(int valor1, int valor2);	

int main(){

	int valor1, valor2;
	int result, a;

	printf("Digite dois numeros com 3 digitos: ");
	scanf(" %i %i", &valor1,&valor2);
    
    result = agregar(valor1, valor2);

    printf(" - Resultado: %i", result);

	return 0;
}

int agregar(int valor1, int valor2){

    int centena1, dezena1, unidade1;
    int centena2, dezena2, unidade2;
    int resCen, resDez, resUni;

    centena1 = valor1/100;
    dezena1 = (valor1-(100*centena1))/10;
    unidade1 = ((valor1-(100*centena1))-(10*dezena1))/1;

    centena2 = valor2/100;
    dezena2 = (valor2-(100*centena2))/10;
    unidade2 = ((valor2-(100*centena2))-(10*dezena2))/1;

    resCen = centena1 + centena2;
    resDez = dezena1 + dezena2;
    resUni = unidade1 + unidade2;

    if(resCen >= 10) resCen = 0;
    if(resDez >= 10) resDez = 0;
    if(resUni >= 10) resUni = 0;


    return resCen*100+resDez*10+resUni;

}