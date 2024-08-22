//faça um programa que receba tres notas e seus pesos
//calcular e mostrar a media ponderada.
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL,"portuguese");
	int p1,p2,p3;
	float n1,n2,n3;
	printf("me informe os suas notas e seus respectivos pesos, vou te pedir um de cada\n");
	printf("digite a sua nota da p1");
	scanf("%f", &n1);
	printf("agora o peso da prova 1 ");
	scanf("%d", &p1);
	printf("agora a nota da prova 2 ");
	scanf("%f",&n2);
	printf("e seguido de peso da prova 2");
	scanf("%d", &p2);
	printf("e nao mais importante, nota da p3 ");
	scanf("%f",&n3);
	printf("e por ultimo o peso da prova 3");
	scanf("%d", &p3);
	printf("a sua média ponderada deste ano letivo é %.1f",((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3));


}
