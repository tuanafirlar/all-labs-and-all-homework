#include <stdio.h>

unsigned long long factorial(int n);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %llu", n, factorial(n));
    return 0;
}

unsigned long long factorial(int n) {
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}