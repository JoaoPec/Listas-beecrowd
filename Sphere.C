#include <stdio.h>
#include <math.h>

int main()
{

    double r, pi, v;

    scanf("%lf", &r);
    pi = 3.14159;
    v = (4.0 / 3) * pi * pow(r, 3);
    printf("VOLUME = %.3lf\n", v);

        return 0;
}