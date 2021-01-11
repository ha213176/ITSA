#include<stdio.h>

int main(){
    int t, d, h, m, s;
    while(scanf("%d", &t) != EOF){
        s = t%60;
        t /= 60;
        m = t%60;
        t /= 60;
        h = t%24;
        t /= 24;
        d = t;
        printf("%d days\n", d);
        printf("%d hours\n", h);
        printf("%d minutes\n", m);
        printf("%d seconds\n", s);
    }
    return 0;
}
