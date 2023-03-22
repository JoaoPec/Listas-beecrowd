#include <stdio.h>

int main()
{

    int hn, mn, fn, fm, tj, mj;

    scanf("%d %d %d %d", &hn, &mn, &fn, &fm);

    if (hn == fn && mn == fm) {
        tj = 24;
        mj = 0;
    } else if(hn > fn) {
            fn += 24;}
        
        if (mn > fm) {
            fm += 60;
            fn -= 1;
        }
        tj = fn - hn;
        mj = fm - mn;
    

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tj, mj);

    return 0;
}
