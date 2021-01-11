#include<stdio.h>

int main(){
    int a, b, i, tmp, tot = 0;
    while(scanf("%d%d", &a, &b) != EOF){
        tot = 0;
        if(a > b){
            tmp = a;
            a = b;
            b = tmp;
        }
        for(i = a; i <= b; i++){
            tot += i;
        }
        printf("%d\n", tot);
    }
    return 0;
}
