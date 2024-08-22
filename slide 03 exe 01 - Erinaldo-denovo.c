#include <stdio.h>
//faça um programa que receba tres notas, calcule e mostre a media aritimetica
#include <locale.h>
int main (){
	setlocale (LC_ALL,"portuguese");
	float d,a,b,c;
	printf("me informe um primeiro numero");
	scanf("%f",&a);
	printf("agora um segundo");
	scanf("%f", &b);
	printf("e por ultimo um terceiro");
	scanf("%f", &c);
	d=((a+b+c)/3);
	printf("a media aritimetica desses tres valores é %.2f", d);
}
