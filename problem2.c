#include <stdio.h>

int main() {
    int arr[7] = {10, 40, 42, 57, 3, 6, 7};
    int i, j, temp;
    for (i = 0; i < 7; i++) {
        for (j = i + 1; j < 7; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Second highest value: %d\n", arr[1]);
    
    return 0;
}
