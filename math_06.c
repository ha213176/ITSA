#include<stdio.h>

int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        printf("%.1f\n", (double)input*1.6);
    }
    return 0;
}
