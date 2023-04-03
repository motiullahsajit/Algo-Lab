#include<stdio.h>

int main(){
  
    int var_1 = 10;

    int *p = &var_1;

    printf("Address %p\n", p);
    printf("Address d = %d\n", p);
    printf("value %d\n", *p);

    return 0;
}