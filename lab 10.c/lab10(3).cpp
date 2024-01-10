#include <stdio.h>

int main() {
    int arr[5], number, temp;
    int i, count = 0;

    printf("Enter a maximum 5-digit number: ");
    scanf("%d", &number);

    if(number >= 10000 && number <= 99999) {
        temp = number;
        while(temp > 0) {
            arr[count++] = temp % 10;
            temp /= 10;
        }
    }
    else {
        printf("Number out of range.\n");
        return 0;
    }

    printf("The digits of the entered number are: ");
    for(i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}