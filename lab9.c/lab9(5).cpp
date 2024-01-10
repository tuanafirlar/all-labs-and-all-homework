#include <stdio.h>
#include <math.h>

// Function to calculate the factorial of a number
double factorial(int n) {
    double fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    double x, sum = 0;
    int i = 0, n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    while(i < n) {
        sum += pow(x, i) / factorial(i);
        i++;
    }

    printf("The sum of the series is: %.6lf\n", sum);

    return 0;
}