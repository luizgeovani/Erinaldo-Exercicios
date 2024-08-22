//encontre e apresente o valor para Z aplicando a seguinte expressão:
//z=(l+a*2)/c
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	float z;
	int l,a,c;
	printf("digite um numero \n");
	scanf("%d", &a),
	printf("agora outro \n");
	scanf("%d",&l),
	printf("agora mais um \n");
	scanf("%d",&c);
	z=((l+a)*2)/c;
	printf("vou mostrar a expressão z=(%d+%d*2)/%d ou seja z=%.f",l,a,c,z);
}
