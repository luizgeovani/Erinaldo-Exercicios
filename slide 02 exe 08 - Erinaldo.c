//leia duas variaveis e apresente a subtração de uma pela outra
#include <stdio.h>
#include <locale.h>
int main (){
	int a,b;
		setlocale(LC_ALL, "portuguese");

	printf("digite um numero\n");
	scanf("%d", &a);
	printf("agora outro\n");
	scanf("%d", &b);
	printf("a subtrção de %d e %d é %d",a,b,(a-b));
}
