#include <stdio.h>
#include <string.h>

int main() {
    int n, num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;

    while(num > 0) {
        temp = num % 10;
        sum = (sum * 10) + temp;
        num = num / 10;
    }

    if(n == sum)
        printf("%d is a palindrome number.\n", n);
    else
        printf("%d is not a palindrome number.\n", n);

    return 0;
}