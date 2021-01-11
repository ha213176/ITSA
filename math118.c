#include<stdio.h>
#include<string.h>

int main(){
    char str[100], tmp;
    int i, len;
    while(scanf("%s", str) != EOF){
        len = strlen(str);
        for(i = 0; i < len/2; i++){
            tmp = str[i];
            str[i] = str[len-i-1];
            str[len-i-1] = tmp;
        }
        printf("%s\n", str);
    }
    return 0;
}
