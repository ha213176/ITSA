#include<stdio.h>

int main(){
    int a, i;
    while(scanf("%d", &a) != EOF){
        for(i = 1; i <= a; i++){
            printf("%d*%d=%d\n", i,i,i*i);
        }
    }
    return 0;
}
