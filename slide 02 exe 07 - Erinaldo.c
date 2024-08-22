//leia duas variaveis e apresente 45% da soma delas
#include <stdio.h>
int main (){
	int a,b;
	float c;
		printf("me mostre um numero\n");
		scanf("%d", &a);
		printf("me mostre outro\n");
		scanf("%d", &b);
		c = (a+b)*0.45;
		printf(" 45por cento da soma de %d e %d é %.1f", a,b,c);
}
