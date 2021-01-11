#include<stdio.h>

int main(){
    int a, i;
    long long int result = 0;
    while(scanf("%d", &a) != EOF){
        result = 0;
        for(i = 1; i <= a; i++){
            if(i%3==0){
                result+=i;
            }
        }
        printf("%lld\n", result);
    }
    return 0;
}
