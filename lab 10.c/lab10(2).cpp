#include <stdio.h>

int main() {
    float arr[10];
    int i, count = 0;
    float number;

    printf("Enter float numbers (-1 to stop): ");
    while(count < 10) {
        scanf("%f", &number);
        if(number == -1) break;
        arr[count++] = number;
    }

    printf("The square of each entered value is: ");
    for(i = 0; i < count; i++) {
        printf("%.6f ", arr[i] * arr[i]);
    }
    printf("\n");

    return 0;
}