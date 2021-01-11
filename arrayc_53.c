#include<stdio.h>

int main(){
    int data[1000], num;
    int i, j, tmp;
    scanf("%d", &num);
    for(i = 0; i < num; i++){
        scanf("%d", &data[i]);
    }
    for(i = 0; i < num; i++){
        for(j = i+1; j < num; j++){
            if(data[i] > data[j]){
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }
    for(i = 0; i < num; i++){
        printf("%d\n", data[i]);
    }
    return 0;
}
