/* exe 13 
cada degrau de uma escada tem x de altura
fa�a um programa que receba essa altura e a altura que o usuario deseja alcan�ar subindo a escada
calcule e mostre quantos degraus ele dever� subir para atingir seu objetivo sem se preocupar com a altura do usuario
todas as medidas fornecidas devem estar em metros */
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL,"portuguese");
	float a,b;
	printf("digite a altura do degrau em metros ");
	scanf("%f",&a);
	printf("agora digite at� que altura (em metros) voc� deseja chegar subindo essa escada ");
	scanf("%f", &b);
	printf("voc� vai precisar subir %.f degraus para alcan�ar %.f metros", (b/=a), b);
}
