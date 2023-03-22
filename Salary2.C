#include <stdio.h>

int main(){
float i,ns,s;
printf("Digit your salary to receave a 15 percent increase.");
scanf("%f",&s);

i = s * 0.15;
ns = i + s;

printf("Your salary of %.2fU$ has receaves an increase of %.2fU$. Your new salary is: %.2fU$",s,i,ns);

}