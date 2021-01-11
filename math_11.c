#include<stdio.h>

int main(){
    int a, t = 0, f = 0, o = 0;
    while(scanf("%d", &a) != EOF){
        t = a/10;
        a -= t*10;
        f = a/5;
        a -= f*5;
        o = a/1;
        printf("NT10=%d\n", t);
        printf("NT5=%d\n", f);
        printf("NT1=%d\n", o);
    }
    return 0;
}
