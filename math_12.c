#include<stdio.h>

int main(){
    double a, diff=0.238, t;
    while(scanf("%lf", &a) != EOF){
        t = a/diff;
        t++;
        printf("%d\n", (int)t);
    }
    return 0;
}
