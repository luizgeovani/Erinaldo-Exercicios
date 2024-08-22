#include <stdio.h>
#include <locale.h>
//6 faça um programa que calcule e mostre a area de um triangulo.
// sabe-se que area = (base*altura)/2

int main (){
	setlocale (LC_ALL, "portuguese");
float a,b;
printf("para calcularmos a area do triangulo, precisamos de algumas informações \n");
printf("por favor forneça o valor da base (em metros) ");
scanf("%f",&b);
printf("agora me diga o valor da altura(em metros)");
scanf("%f",&a);
printf("a area deste triangulo é de %.2fm² ", b*a/2 );


}
