#include <stdio.h>

int main(){

    float s,a,ns;
    int  p;

    scanf("%f",&s);

    if(s <= 400 ){
        a = s * 0.15;
        ns = s + a;
        p = 15;
    }else if( s > 400 && s <= 800){
        a = s * 0.12;
        ns = s + a;
        p = 12;
    }else if (s > 800 && s <= 1200){
        a = s * 0.10;
        ns = s + a;
        p = 10;
    }else if (s > 1200 && s <= 2000){
        a = s * 0.07;
        ns = a + s ;
        p = 7;
    }else if (s > 2000){
        a = s * 0.04;
        ns = s + a;
        p = 4;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",ns,a,p);


}