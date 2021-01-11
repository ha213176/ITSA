#include<stdio.h>

int main(){
    int a, i, tmp = -1;
    while(scanf("%d", &a) != EOF){
        tmp = -1;
        for(i = 1; i < a; i++){
            if(i%35==0){
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
