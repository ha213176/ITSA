#include<stdio.h>
#include<math.h>

int main(){
    int a, b, i, min;
    while(scanf("%d%d", &a, &b) != EOF){
        min = a;
        if(b < a){
            min = b;
        }
        for(i = min; i > 0; i--){
            if(a%i == 0 && b%i == 0){
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}
