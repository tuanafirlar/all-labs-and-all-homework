#include <stdio.h>

int main() {
    float arr[8];
    float sum = 0;
    int i;

    printf("Enter 8 float numbers: ");
    for(i = 0; i < 8; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    printf("The average of the entered values is: %.6f\n", sum / 8);

    return 0;
}