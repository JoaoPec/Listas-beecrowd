#include <stdio.h>
#include <string.h>

int main(){

    char a[10], b[10], c[10], e[10];

    scanf("%s %s %s", a, b, c);

    if(strcmp(a, "vertebrado") == 0 && strcmp(b, "ave") == 0 &&  strcmp(c, "onivoro") == 0){
        strcpy(e, "pomba");
    } else if(strcmp(a, "vertebrado") == 0 && strcmp(b, "ave") == 0 &&  strcmp(c, "carnivoro") == 0){
        strcpy(e, "aguia");
    } else if(strcmp(a, "vertebrado") == 0 && strcmp(b, "mamifero") == 0 && strcmp(c, "onivoro") == 0){
        strcpy(e, "homem");
    } else if(strcmp(a, "vertebrado") == 0 && strcmp(b, "mamifero") == 0 && strcmp(c, "herbivoro") == 0){
        strcpy(e, "vaca");
    } else if(strcmp(a, "invertebrado") == 0 && strcmp(b, "inseto") == 0 && strcmp(c, "hematofago") == 0){
        strcpy(e, "pulga");
    } else if(strcmp(a, "invertebrado") == 0 && strcmp(b, "inseto") == 0 && strcmp(c, "herbivoro") == 0){
        strcpy(e, "lagarta");
    } else if(strcmp(a, "invertebrado") == 0 && strcmp(b, "anelideo") == 0 && strcmp(c, "hematofago") == 0){
        strcpy(e, "sanguessuga");
    } else if(strcmp(a, "invertebrado") == 0 && strcmp(b, "anelideo") == 0 && strcmp(c, "onivoro") == 0){
        strcpy(e, "minhoca");
    }

    printf("%s\n", e);

    return 0;
}
