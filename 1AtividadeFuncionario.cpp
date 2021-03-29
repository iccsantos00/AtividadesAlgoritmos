#include<stdio.h>
int main(){
	int matricula;
	float horas, valorh, salario, salariom;
	char nome[50]; 
	char sexo[1];
	
	printf("Digite o seu nome completo: ");
	scanf("%s", &nome);
	printf("Qual o seu sexo? (Use 'F' ou 'M'): ");
	scanf("%s", &sexo);
	printf("Digite a sua matricula: ");
	scanf("%d", &matricula);
	printf("Quantas horas voce trabalha por dia? ");
	scanf("%f", &horas);
	printf("Qual o valor que voce recebe por hora trabalhada? ");
	scanf("%f", &valorh);
	
	salario=horas*valorh;
	salariom=salario*30;
	
	printf("\nNome: %s", nome);
	printf("\nSexo: %s", sexo);
	printf("\nMatricula: %d", matricula);
	printf("\nVoce trabalha %.2f horas por dia", horas);
	printf("\nVoce recebe R$%.2f por cada hora trabalhada", valorh);
	printf("\nO total do seu salario por dia sera de R$%.2f", salario);
	printf("\nO total do seu salario por mes sera de R$%.2f", salariom);
	
	return 0;
}
