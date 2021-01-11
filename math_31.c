#include<stdio.h>

int main(){
    int a, i, tot;
    while(scanf("%d", &a) != EOF){
        tot = 0;
        for(i = 2; i < a; i++){
            if(i%6 == 0 && i%12 != 0){
                tot += i;
            }
        }
        printf("%d\n", tot);
    }
    return 0;
}
