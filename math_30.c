#include<stdio.h>

int main(){
    int a, i, is = 1;
    while(scanf("%d", &a) != EOF){
        is = 1;
        for(i = 2; i < a; i++){
            if(a%i == 0){
                is = 0;
                break;
            }
        }
        if(is == 1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
