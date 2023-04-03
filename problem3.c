#include<stdio.h>

int main(){
    int arr[8]={1,3,6,2,4,1,9,5}; 
    int flag=0;
    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            if(arr[i]==arr[j]){
               printf("%d is the duplicate value\n", arr[j]);
               flag==1;
               break;
            }
        }
        if(flag==1){
            break;
        }
    }
}