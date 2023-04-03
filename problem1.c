#include<stdio.h>

int main(){
    int arr[7]={10,40,42,57,3,6,7};

    int max=arr[0];
    int min=arr[0];

    for(int i=0; i<7;i++){
      
        if(max<arr[i]){
            max=arr[i];
        }

        if(min>arr[i]){
            min=arr[i];
        }
      
    }

    printf("Minimum value is %d\n",min);
    printf("Maximum value is %d\n",max);


    return 0;
}