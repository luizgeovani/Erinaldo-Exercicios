/*7 fa�a um programa que calcule e mostre a area de um circulo
area = p�*R�  
*/
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL,"portuguese");
	float a, b;
	b=3.1415;
	printf("para calcularmos a area de um circulo, preciso de algumas informa��es \n");
	printf("por favor, forne�a o raio deste circulo em cm ");
	scanf("%f",&a);
	printf("a area deste circulo � de %.2fcm�", b*(a*a));
	
}
