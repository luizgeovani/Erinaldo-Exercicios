/*exe 9 sabese que 
1 p� = 12 polegadas
1 jarda= 3p�s
1 milha = 1,760jardas
fa�a um programa que receba uma medida em p�s e fa�a conversoes a seguir
A) converta em polegadas
B)converta em jardas
C)converta em milhas
*/
#include <stdio.h>
#include <locale.h>
int main () {
setlocale (LC_ALL,"portuguese");
float a;
printf("me informe um valor em p�s que te mostrarei: \n");
scanf("%f",&a);
printf("A) este valor em polegadas %.2f \n",a*12);
printf("B) este valor em jardas %.2f \n", a/3.0);
printf("C) este valor em milhas %.5f \n", (a/3.0)/1760.0);

}
