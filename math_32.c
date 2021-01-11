#include<stdio.h>
#include<stdlib.h>


int main(){
    int tot, tmp;
    char str[5];
    while(scanf("%s", str) != EOF){
        tot = 0;
        tmp = str[0] - 48;
        tot += tmp*tmp*tmp;
        tmp = str[1] - 48;
        tot += tmp*tmp*tmp;
        tmp = str[2] - 48;
        tot += tmp*tmp*tmp;
        if(atoi(str) == tot){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }

    }
    return 0;
}
