#include <stdio.h>


int main(){

float t,c,q;


    scanf("%f %f", &c,&q);

    if(c == 1){
        c = 4.00;
        t = c * q;
        printf("Total: R$ %.2f\n",t);      
    }else if (c == 2){        
        c = 4.50;
        t = c * q; 
        printf("Total: R$ %.2f\n",t);
    }else if (c == 3){  
        c = 5.00;
        t = c * q;
        printf("Total: R$ %.2f\n",t);
    }else if (c == 4){
        c = 2.00;
        t = c * q; 
        printf("Total: R$ %.2f\n",t);
    }else if (c == 5){       
        c = 1.50;
        t = c * q;
        printf("Total: R$ %.2f\n",t);
    }

    return 0;
}