#include<stdio.h>

int main(){
    int i;
    int data;
    int tot = 0;
    for(i = 0; i < 6; i++){
        scanf("%d", &data);
        tot += data*data*data;
    }
    printf("%d\n", tot);
    return 0;
}
