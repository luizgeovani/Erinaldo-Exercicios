/*11 faça um programa que receba o numero de horas trabalhadas e o valor do salario minimo
>>>>calcule e mostre o salario a receber seguindo estas regras:
A)a hora trabalhada vale metade do salario salario minimo
B)o salario bruto equivale ao numero de horas trabalhadas multiplicado pelo valor da hora trabalhada
C)o imposto equivale a 3% do salario bruto
D)o salario a receber equivale ao salario bruto menos o impost*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main (){
	setlocale (LC_ALL, "portuguese");
	int a;
	float b,c;
	printf("por favor, me informe o valor do salário mínimo em R$ \n");
	scanf("%f",&b);
	printf("agora por favor digite o numero de horas inteiras trabalhadas \n");
	scanf("%d", &a);
	c=a*(b/2);
	printf("de acordo com essas informações\n o seu salário deste mês será de: %.2f)",c-(c*0.03));
}

/*informar 100
com 35 horas
1750 - 0,03 = 1750-52,5 = 1.697,5*/
