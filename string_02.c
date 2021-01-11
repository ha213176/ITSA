#include<stdio.h>
#include<string.h>


int main(){
    int n, i, j, len;
    scanf("%d", &n);
    char str[256], tmp;
    for(i = 0;i < n; i++){
        scanf("%s", str);
        len = strlen(str);
        for(j = 0; j < len/2; j++){
            tmp = str[j];
            str[j] = str[len-1-j];
            str[len-j-1] = tmp;
        }
        printf("%s\n", str);
    }
    return 0;
}
