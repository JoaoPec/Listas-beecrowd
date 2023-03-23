#include <stdio.h>

int main() {
double valor;
int notas100, notas50, notas20, notas10, notas5, notas2;
int moedas1, moedas50, moedas25, moedas10, moedas5, moedas1c;

scanf("%lf", &valor);

    // cálculo das notas
notas100 = valor / 100;
valor = valor - notas100 * 100;

notas50 = valor / 50;
valor = valor - notas50 * 50;

notas20 = valor / 20;
valor = valor - notas20 * 20;

notas10 = valor / 10;
valor = valor - notas10 * 10;

notas5 = valor / 5;
valor = valor - notas5 * 5;

notas2 = valor / 2;
valor = valor - notas2 * 2;

    // cálculo das moedas
moedas1 = valor / 1;
valor = valor - moedas1 * 1;

moedas50 = valor / 0.5;
valor = valor - moedas50 * 0.5;

moedas25 = valor / 0.25;
valor = valor - moedas25 * 0.25;

moedas10 = valor / 0.1;
valor = valor - moedas10 * 0.1;

moedas5 = valor / 0.05;
valor = valor - moedas5 * 0.05;

    moedas1c = valor / 0.01;

    // impressão do resultado
printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n", notas100);
printf("%d nota(s) de R$ 50.00\n", notas50);
printf("%d nota(s) de R$ 20.00\n", notas20);
printf("%d nota(s) de R$ 10.00\n", notas10);
printf("%d nota(s) de R$ 5.00\n", notas5);
printf("%d nota(s) de R$ 2.00\n", notas2);

printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n", moedas1);
printf("%d moeda(s) de R$ 0.50\n", moedas50);
printf("%d moeda(s) de R$ 0.25\n", moedas25);
printf("%d moeda(s) de R$ 0.10\n", moedas10);
printf("%d moeda(s) de R$ 0.05\n", moedas5);
printf("%d moeda(s) de R$ 0.01\n", moedas1c);

return 0;

}
