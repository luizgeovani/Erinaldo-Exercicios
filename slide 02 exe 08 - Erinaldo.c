//leia duas variaveis e apresente a subtra��o de uma pela outra
#include <stdio.h>
#include <locale.h>
int main (){
	int a,b;
		setlocale(LC_ALL, "portuguese");

	printf("digite um numero\n");
	scanf("%d", &a);
	printf("agora outro\n");
	scanf("%d", &b);
	printf("a subtr��o de %d e %d � %d",a,b,(a-b));
}
