#include <stdio.h>
#include <math.h>

int main(){
//*se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
//se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
//se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
//se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
//se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
    double a,b,c,t;

    scanf("%lf %lf %lf",&a,&b,&c);

 if (a < b){ t = a; a = b; b = t; } 
  if (b < c){ t = b; b = c; c = t; } 
  if (a < b){ t = a; a = b; b = t; }
   if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if (a == b && b != c || a == c && c != b || b == c && c != a) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}