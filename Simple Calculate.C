#include <stdio.h>

int main(){

int c1,a1,c2,a2;
float p1,p2,fp;

scanf("%d %d %f", &c1, &a1, &p1);

scanf("%d %d %f", &c2, &a2, &p2);
p1 = p1 * a1;
p2 = p2 * a2;

fp = p1 + p2;

printf("VALOR A PAGAR: R$ %.2f\n",fp );
    
    
    return 0;
}