#include <stdio.h>

int main() {
    int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int b[2][3] = { {1, 2, 3}, {6, 5, 6}};

    printf("B\n");

    for(int i = 0; i <2 ; i++){
        for(int j = 0; j <3;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("B\n");

    for(int i = 0; i <2 ; i++){
        for(int j = 0; j <3;j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }


  
    return 0;
}
