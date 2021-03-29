#include<stdio.h>
int main(){
	float m1, m2, m3, media;
	printf("Digite o primeiro numero: ");
	scanf("%f", &m1);
	printf("Digite o segundo numero: ");
	scanf("%f", &m2);
	printf("Digite o terceiro numero: ");
	scanf("%f", &m3);
	media=(m1+m2+m3)/3;
	printf("A media dos tres numeros e %.2f", media);
	
	return 0;
}
