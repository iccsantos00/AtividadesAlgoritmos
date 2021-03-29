#include<stdio.h>
int main(){
	float raio, area;
	printf("Escreva qual o raio do circulo: ");
	scanf("%f", &raio);
	area=(raio*raio)*3.14;
	printf("A area do circulo e %.2f", area);
	
	return 0;
}
