//exe 9 leia 3 variaveis (a,b,c) e apresente o resultado da seguinte express�o 
//ex: d=a+c-b
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"portuguese");
	int a,b,c,d;
	printf("digite um valor \n");
	scanf("%d", &a);
	printf("digite outro \n");
	scanf("%d", &b);
	printf("agora o ultimo \n");
	scanf("%d", &c);
	d=(a+c)-b;
	printf("o resultado da express�o %d+%d-%d � %d",a,c,b,d);
	
}
