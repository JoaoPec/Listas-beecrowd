    #include <stdio.h>

    int main()
    {
    char n;
    double fs,ss,ts,ps;

    printf("");
    scanf("%s", &n);

    printf("");
    scanf("%lf", &fs);

    printf("");
    scanf("%lf", &ss);

    ts = fs + (ss * 0.15);

    printf("TOTAL = R$ %.2lf\n", ts);

    return 0;


    }