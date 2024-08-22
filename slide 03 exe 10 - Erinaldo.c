/* o custo ao consumidor de um carro novo é a soma do preço de fabrica com o percentual 
do distribuidor e dos impostos aplicados ao preço de fabrica
- Faça um programa que receba o preõ de fabrica de um veiculo
o percentual de lucro do distribuidor e o percentual de impostos
Calcule e mostre:
A) o valor correspondente ao lucro do distribuidor
B) o valor correspondente aos impostos
C)o preço final */
#include <stdio.h> //#imposto é aplicado sobre o valor de fabrica
#include <locale.h> //#luco do distribuidor é aplicado sobre o valor de (fabrica + imposto)- o que o consumidor paga 
#include <math.h> //consumidor final paga o valor de fabrica +imposto + lucro do vendedor
int main (){
	setlocale (LC_ALL,"portuguese");
	float a;
	printf("informe o custo de fábrica do veículo que te informarei\nA) o valor do lucro do vendedor\nB)o valor correspondente aos impostos\nC)o preço final\n");
printf("por favor digite o custo de fábrica em R$ ");
scanf("%f", &a);
	
	printf("A) o lucro total do distribuidor é R$%.2f\n", ((a*1.17))*0.25);
printf("B) o valor correspondente aos impostos é de R$%.2f\n",a*0.17);
printf("C) o preçõ final é de R$%.2f\n",(a*1.17)*1.25);

}
/*
1000 reias de fabrica
1120 de imposto
1400 preço final
lucro de preço final - preço com impostos
*/
