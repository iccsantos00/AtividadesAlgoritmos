#include<stdio.h>
int main(){
	double n1, n2, media;
	printf("Digite a primeira nota: ");
	scanf("%lf", &n1);
	printf("Digite a segunda nota: ");
	scanf("%lf", &n2);
	media=((n1*3.5)+(n2*7.5))/11;
	printf("A media das notas e %.1lf .", media);	
	
	return 0;
}
