/* exe 4 faça um programa que receba o salario de um funcionario, calcule e mostre o novo salario,
sabendo que este sofreu um aumento de 25%*/
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL,"portuguese");
	float a;
	printf("Parabéns, você recebeu um aumento salarial\n");
	printf("digite o valor do seu salário em R$ que te mostrarei quanto vai ganhar ");
	scanf("%f", &a);
	printf("seu novo salário será de: %.2f", ((a*0.25)+a));
	
}
