#include<stdio.h>
#include<math.h>

int main(){
    int a;
    long long int i, result;
    while(scanf("%d", &a) != EOF){
        result = 1;
        for(i = 1; i <= a; i++){
            result *= i;
        }
        printf("%lld\n", result);
    }
    return 0;
}
