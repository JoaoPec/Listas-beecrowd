#include <stdio.h>
int main()
{
    int a,b,tj;
    scanf ("%d %d", &a, &b);
    if(a==b){
        tj = 24 - a + b;
        printf("O JOGO DUROU %d HORA(S)\n",tj);
    }else if(a<=b){
        tj = b - a; 
        printf ("O JOGO DUROU %d HORA(S)\n",tj);
    }else{
     tj = 24 - a + b;
       printf("O JOGO DUROU %d HORA(S)\n",24-a+b);
    }    
    return 0;
}