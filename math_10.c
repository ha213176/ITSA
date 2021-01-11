#include<stdio.h>

int main(){
    double a, b;
    b = (float)9/(float)5;
    while(scanf("%lf", &a) != EOF){
        a *= b;
        printf("%.1f\n", (a+32));
    }
    return 0;
}
