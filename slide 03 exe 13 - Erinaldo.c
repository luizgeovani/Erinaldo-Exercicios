/* exe 13 
cada degrau de uma escada tem x de altura
faça um programa que receba essa altura e a altura que o usuario deseja alcançar subindo a escada
calcule e mostre quantos degraus ele deverá subir para atingir seu objetivo sem se preocupar com a altura do usuario
todas as medidas fornecidas devem estar em metros */
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL,"portuguese");
	float a,b;
	printf("digite a altura do degrau em metros ");
	scanf("%f",&a);
	printf("agora digite até que altura (em metros) você deseja chegar subindo essa escada ");
	scanf("%f", &b);
	printf("você vai precisar subir %.f degraus para alcançar %.f metros", (b/=a), b);
}
