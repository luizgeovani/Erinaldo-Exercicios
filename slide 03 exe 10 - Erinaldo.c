/* o custo ao consumidor de um carro novo � a soma do pre�o de fabrica com o percentual 
do distribuidor e dos impostos aplicados ao pre�o de fabrica
- Fa�a um programa que receba o pre� de fabrica de um veiculo
o percentual de lucro do distribuidor e o percentual de impostos
Calcule e mostre:
A) o valor correspondente ao lucro do distribuidor
B) o valor correspondente aos impostos
C)o pre�o final */
#include <stdio.h> //#imposto � aplicado sobre o valor de fabrica
#include <locale.h> //#luco do distribuidor � aplicado sobre o valor de (fabrica + imposto)- o que o consumidor paga 
#include <math.h> //consumidor final paga o valor de fabrica +imposto + lucro do vendedor
int main (){
	setlocale (LC_ALL,"portuguese");
	float a;
	printf("informe o custo de f�brica do ve�culo que te informarei\nA) o valor do lucro do vendedor\nB)o valor correspondente aos impostos\nC)o pre�o final\n");
printf("por favor digite o custo de f�brica em R$ ");
scanf("%f", &a);
	
	printf("A) o lucro total do distribuidor � R$%.2f\n", ((a*1.17))*0.25);
printf("B) o valor correspondente aos impostos � de R$%.2f\n",a*0.17);
printf("C) o pre�� final � de R$%.2f\n",(a*1.17)*1.25);

}
/*
1000 reias de fabrica
1120 de imposto
1400 pre�o final
lucro de pre�o final - pre�o com impostos
*/
