#include<stdio.h>

int main(){

    int arr[]={1,2,3,4,5,6,7,8},n=8,right = n-1, left = 0, mid, x, index = -1;

    scanf("%d",&x);

    while (left<=right)
    {
        mid = (left + right) / 2;
        if(arr[mid] == x) index = mid;
        if(arr[mid] < x){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }

    printf("%d\n",index);
    
    return 0;
}