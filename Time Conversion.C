#include <stdio.h>

int main(){

    int d,m,a;

    scanf("%d",&d);

    a = (d / 365);
    m = (d % 365)/30;
    d = (d % 365) %30;


    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);




    return 0;
}