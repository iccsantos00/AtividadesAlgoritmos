//Entrada: a, b, c
//Sa�da: x', x"
//Processamento: c�lculo
#include<stdio.h>//biblioteca para o scanf e printf
#include<math.h>//biblioteca matem�tica
int main(){//fun��o main: in�cio do algoritmo
    double a, b, c, x1, x2;//declara��o das vari�veis: double=%lf
    printf("Digite o valor de a: ");//printf para mostrar a mensagem na tela
    scanf("%lf", &a);//% para falar o tipo de dado e & para o nome da vari�vel
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);
    if (a == 0)//se A for igual a 0, ent�o
       {
      	printf("Impossivel calcular!\n");
	   }
	   else//sen�o
	   {
	  	 x1 = (-(b) + sqrt(pow(b,2) - 4*a*c) / (a*2));//lineariza��o da f�rmula
         x2 = (-(b) - sqrt(pow(b,2) - 4*a*c) / (a*2));
	   }
    
    printf("X1 = %.2lf\nX2 = %.2lf\n", x1, x2);
    return 0;//retorno da fun��o
}//fim do algoritmo'
