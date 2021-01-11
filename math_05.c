#include<stdio.h>

int main(){
    double input, out;
    int tmp;
    while(scanf("%lf", &input) != EOF){
        out = input*input;
        tmp = (int)(out*10);
        if((out*10-tmp) >= 0.5){
            out += 0.025;
        }
        printf("%.1f\n", out);
    }
    return 0;
}
