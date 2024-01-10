#include <stdio.h>

int main() {
    int arr[10], number, temp;
    int i, count = 0;

    printf("Enter a 10-element array: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The entered array in reverse is: ");
    for(i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}