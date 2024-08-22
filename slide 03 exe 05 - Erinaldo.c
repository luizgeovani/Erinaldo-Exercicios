/*faça um programa que receba o salario de um funcionario
 e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário*/
 #include <stdio.h>
 #include <locale.h>
 int main () {
setlocale (LC_ALL,"portuguese");
 float a, b, c;
 printf("digite o salario atual do funcionario luiz  x ");
 scanf("%f",&a);
 printf("e digite o valor do aumento em %%");
 scanf("%f", &b);
 c=b/100;
 printf("o percentual de aumento salarial do luiz vai ser %.1f%% recebendo %.2f a mais, totalizando %.2f", (c*100), a*c, a+(a*c));


 }
