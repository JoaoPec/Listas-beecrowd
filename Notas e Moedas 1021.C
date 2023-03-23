#include <stdio.h>

int main() {

int n,n100,n50,n20,n10,n5,n2; 
float m1,m05,m10,m25,m50,m01,nt;


scanf("%d",&n);

printf("%d\n",n);

n100 = n / 100;
n %= 100;

n50 = n / 50;
n %= 50; 

n20 = n/20;
n%= 20; 

n10 = n/10;
n %= 10;

n5 = n/5;
n %= 5;

n2 = n/2;
n %= 2;

m1 = n / 100;
n %= 100;

m50 = n / 50;
n %= 50;

m25 = n / 25;
n %= 25;

m10 = n / 10;
n %= 10;

m05 = n / 5;
n %= 5;

m01 = n; 

printf("%d nota(s) de R$ 100.00\n", n100);
printf("%f nota(s) de R$ 50.00\n", n50);
printf("%f nota(s) de R$ 20.00\n", n20);
printf("%f nota(s) de R$ 10.00\n", n10);
printf("%f nota(s) de R$ 5.00\n", n5);
printf("%f nota(s) de R$ 2.00\n", n2);


printf("%f moeda(s) de R$ 1.00\n", m1);
printf("%f moeda(s) de R$ 0.50\n", m50);
printf("%f moeda(s) de R$ 0.25\n", m25);
printf("%f moeda(s) de R$ 0,10\n", m10);
printf("%f moeda(s) de R$ 0,05\n", m05);
printf("%f moeda(s) de R$ 0,01\n", m01);

}
