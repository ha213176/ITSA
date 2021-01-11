#include<stdio.h>

int main(){
    int a, i, j, is = 1;
    while(scanf("%d", &a) != EOF){
        for(i = a-1; i > 1; i--){
            is = 1;
            for(j = i-1; j > 1; j--){
                if(i%j == 0){
                    is = 0;
                }
            }
            if(is == 1){
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}
