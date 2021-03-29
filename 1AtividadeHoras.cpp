#include<stdio.h>
int main(){
	int h, m, s;
	printf("Digite a quantidade de horas que deseja transformar em minutos e segundos: ");
	scanf("%d", &h);
	m=h*60;
	s=h*3600;
	printf("%d e igual a\n%d minutos e\n%d segundos", &h, &m, &s);
	
	return 0;
}
