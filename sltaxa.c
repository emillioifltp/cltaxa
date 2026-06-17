#include <stdio.h>

float salario;//salario du usario
int taxa = 10;// taxa de 10%

int main(){
	
	printf("Digite seu salario:");
	scanf("%f", &salario);
	
	float valor_taxa = salario + (salario * taxa) / 100;
	
	printf("seu salario com a taxa e %.2f", valor_taxa);
	
	return 0;
}
