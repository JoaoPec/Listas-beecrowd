#include <stdio.h>

int main()
{

    int idade, idade_nova;

    printf("Insira a sua idade: \n");
    scanf("%d", &idade);
    if (idade >= 18)
    {
         printf("Pode entrar! Voce tem:  %d",idade,"\n");   }
    else{


        printf("Nao pode entrar sua misera! Voce tem: %d",idade,"\n");
    }



return 0;

}