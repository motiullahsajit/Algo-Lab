#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    gets(str);
    int len = strlen(str)-1;
    int flag = 1;
    for(int i=0; i<len/2; i++){
        if(str[i] != str[len-i]){
            flag = 0;
            break;
        }
    }

    if(flag){
        printf("Yes\n");
    }else{
        printf("No\n");

    }

    return 0;
}