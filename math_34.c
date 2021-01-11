#include<stdio.h>

int main(){
    int a, tmp = -1, i;
    while(scanf("%d", &a) != EOF){
        tmp = -1;
        for(i = 1; i <= a; i++){
            if(a%i == 0){
                if(tmp != -1){
                    printf("%d ", tmp);
                }
                tmp = i;
            }
        }
        if(tmp != -1)
            printf("%d\n", tmp);
    }
    return 0;
}
