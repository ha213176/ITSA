#include<stdio.h>

int main(){
    int a,b, tot;
    while(scanf("%d%d", &a, &b) != EOF){
        tot = a+b;
        tot *= tot;
        printf("%d\n", tot);
    }
    return 0;
}
