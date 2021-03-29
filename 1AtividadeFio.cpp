#include<stdio.h>
int main(){
	float fio, rolo;
	printf("Qual o total, em metros, de fios que a  instalacao eletrica da obra precisa? ");
	scanf("%f", &fio);
	rolo=fio/50;
	printf("A instalaçao precisa de %.2f metros de fio ou %.2f rolos", fio, rolo);
	
	return 0;
}
