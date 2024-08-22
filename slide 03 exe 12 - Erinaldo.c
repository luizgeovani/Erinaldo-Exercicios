/* exe 12 Pedro comprou um saco de ração com peso em Kg
Ele possui dois gatos, para os quais fornece a quantidade de ração em gramas
A quantidade diária de ração fornecida para cada gato é sempre a mesma.
Faça um programa  que receba o peso do saco de ração e a quantidade de ração fornecida para cada gato
Calcule e mostre quanto restará de ração no saco após 5 dias. */
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main (){
	setlocale (LC_ALL, "portuguese");
	int a;
	float b,c;
	printf("Pedro, me informe quantos Kg é o pacote de ração que você comprou ");
	scanf("%d", &a);
	printf("agora me informe quanto é o consumo diário do gato 01 em gramas ");
	scanf("%f",&b);
	printf("agora a quantidade em gramas do gato 02 ");
	scanf("%f",&c);
	//posso receber em c o valor em gramas de consumo e converter para kg tbm
	//ex c=b/1000
	// ou transformar kg em g tbm
	printf("após 5 dias, ainda terá %.2fKg de ração", (a-(((b+c)*5)/1000)));
//	/*outra forma */printf("apos 5 dias ainda tera %.2fKg de ração", (((a*1000)-(b*5))/1000));
}
