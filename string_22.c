#include<stdio.h>
#include<string.h>


int main(){
    int i, len;
    char str[256], tmp;
    scanf("%s", str);
    len = strlen(str);
    for(i = 0; i < len; i++){
        if( !(str[i]>='0' && str[i] <= '9')){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] -= ('a'-'A');
            }
            else{
                str[i] += ('a' - 'A');
            }
        }
    }
    for(i = 0; i < len/2; i++){
        tmp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = tmp;
    }
    printf("%s\n", str);
    return 0;
}
