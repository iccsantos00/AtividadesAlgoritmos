//Entrada: a, b, c
//Saída: x', x"
//Processamento: cálculo
#include<stdio.h>//biblioteca para o scanf e printf
#include<math.h>//biblioteca matemática
int main(){//função main: início do algoritmo
    double a, b, c, x1, x2;//declaração das variáveis: double=%lf
    printf("Digite o valor de a: ");//printf para mostrar a mensagem na tela
    scanf("%lf", &a);//% para falar o tipo de dado e & para o nome da variável
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);
    if (a == 0)//se A for igual a 0, então
       {
      	printf("Impossivel calcular!\n");
	   }
	   else//senão
	   {
	  	 x1 = (-(b) + sqrt(pow(b,2) - 4*a*c) / (a*2));//linearização da fórmula
         x2 = (-(b) - sqrt(pow(b,2) - 4*a*c) / (a*2));
	   }
    
    printf("X1 = %.2lf\nX2 = %.2lf\n", x1, x2);
    return 0;//retorno da função
}//fim do algoritmo'
