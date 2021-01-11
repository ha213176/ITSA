#include<stdio.h>

int main(){
    int a, tot, i;
    while(scanf("%d", &a) != EOF){
        tot = 0;
        for(i = 1; i <= a; i++){
            if(i != a){
                printf("%d + ", i);
                tot += i;
            }
            else{
                tot += i;
                printf("%d = %d\n", i, tot);
            }
        }
    }
    return 0;
}
