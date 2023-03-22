#include <stdio.h>

int main()
{

    int a, b, c, t, a1, b1, c1;

    scanf("%d %d %d", &a, &b, &c);
    a1 = a;
    b1 = b;
    c1 = c;
     if (a < b){
        t = a;
        a = b;
        b = t;
    }
    if (b < c)
    {
        t = b;
        b = c;
        c = t;
    }
    if (c < a)
    {
        t = c;
        c = a;
        a = t;
    }

    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d", a1, b1, c1);

    return 0;
}