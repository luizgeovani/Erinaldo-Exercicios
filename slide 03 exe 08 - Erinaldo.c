/*exe 8 faça um programa que receba um numero positivo maior que zero,
calcule e mostre:
a)o numero digitado ao quadrado
b)o numero digitado ao cubo
c) a rais quadrada do numero digitado
d) a raiz cubica do numero digitado
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main (){
	setlocale (LC_ALL,"portuguese");
	float a;
	while(1){
		printf("digite um numero positivo maior que zero \n ");
		scanf("%f",&a);
		if (a>0){
			break;
	      } 
		else{
			printf("numero invalido, por favor repita\n");
		       }
	}
		printf("pronto,\n irei fazer algumas contas aqui\n");
		printf("A) ao quadrado = %.2f \n", (a*a));
printf("B) ao cubo %.2f \n", a*a*a);
printf("C) raiz quadrada %.2f \n", sqrt(a)); //ou pow(a,1.0/2)
printf("D) a raiz cubica %.2f \n", (pow(a,(1.0/3))));
}
