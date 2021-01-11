#include<stdio.h>

int main(){
    int a, b, c, tmp;
    while(scanf("%d%d%d", &a, &b, &c) != EOF){
        if(b > a){
            tmp = a;
            a = b;
            b = tmp;
        }
        if(c > a){
            tmp = a;
            a = c;
            c = tmp;
        }
        if(a < b+c){
            printf("fit\n");
        }
        else{
            printf("unfit\n");
        }
    }
    return 0;
}
