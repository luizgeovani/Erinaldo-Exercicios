/* exe 12 Pedro comprou um saco de ra��o com peso em Kg
Ele possui dois gatos, para os quais fornece a quantidade de ra��o em gramas
A quantidade di�ria de ra��o fornecida para cada gato � sempre a mesma.
Fa�a um programa  que receba o peso do saco de ra��o e a quantidade de ra��o fornecida para cada gato
Calcule e mostre quanto restar� de ra��o no saco ap�s 5 dias. */
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main (){
	setlocale (LC_ALL, "portuguese");
	int a;
	float b,c;
	printf("Pedro, me informe quantos Kg � o pacote de ra��o que voc� comprou ");
	scanf("%d", &a);
	printf("agora me informe quanto � o consumo di�rio do gato 01 em gramas ");
	scanf("%f",&b);
	printf("agora a quantidade em gramas do gato 02 ");
	scanf("%f",&c);
	//posso receber em c o valor em gramas de consumo e converter para kg tbm
	//ex c=b/1000
	// ou transformar kg em g tbm
	printf("ap�s 5 dias, ainda ter� %.2fKg de ra��o", (a-(((b+c)*5)/1000)));
//	/*outra forma */printf("apos 5 dias ainda tera %.2fKg de ra��o", (((a*1000)-(b*5))/1000));
}
