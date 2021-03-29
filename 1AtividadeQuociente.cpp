#include<stdio.h>
#include<iostream>
int main(){
	int a, b, q, resto;
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite outro numero: ");
	scanf("%d", &b);
	resto=a%b;
	q=a/b;
	printf("O quociente e igual a %d", a, b, q);
	printf("\nE o resto e %d", resto);
	return 0;
}
