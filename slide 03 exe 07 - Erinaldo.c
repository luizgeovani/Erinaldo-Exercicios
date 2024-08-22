/*7 faça um programa que calcule e mostre a area de um circulo
area = pí*R²  
*/
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL,"portuguese");
	float a, b;
	b=3.1415;
	printf("para calcularmos a area de um circulo, preciso de algumas informações \n");
	printf("por favor, forneça o raio deste circulo em cm ");
	scanf("%f",&a);
	printf("a area deste circulo é de %.2fcm²", b*(a*a));
	
}
