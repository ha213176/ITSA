#include<stdio.h>

int main(){
    int x,y;
    double dis = 0;
    while(scanf("%d%d", &x, &y) != EOF){
        dis += x*x + y*y;
        if(dis <= 10000){
            printf("inside\n");
        }
        else{
            printf("outside\n");
        }
    }
    return 0;
}
