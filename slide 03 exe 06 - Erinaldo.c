#include <stdio.h>
#include <locale.h>
//6 fa�a um programa que calcule e mostre a area de um triangulo.
// sabe-se que area = (base*altura)/2

int main (){
	setlocale (LC_ALL, "portuguese");
float a,b;
printf("para calcularmos a area do triangulo, precisamos de algumas informa��es \n");
printf("por favor forne�a o valor da base (em metros) ");
scanf("%f",&b);
printf("agora me diga o valor da altura(em metros)");
scanf("%f",&a);
printf("a area deste triangulo � de %.2fm� ", b*a/2 );


}
