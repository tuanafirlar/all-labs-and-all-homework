#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Values before swapping: A = %d, B = %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Values after swapping: A = %d, B = %d\n", num1, num2);

    return 0;
}