/*Write the program with the C language, which computes the sum of the two
numbers entered on the keyboard.*/
#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum of given numbers is: %d\n", sum);

    return 0;
}
