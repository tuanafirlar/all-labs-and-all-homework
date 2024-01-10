#include <stdio.h>

int main() {
  
    double A, B, C;

  
    printf("Enter the value for A: ");
    scanf("%lf", &A);

    printf("Enter the value for B: ");
    scanf("%lf", &B);

    printf("Enter the value for C: ");
    scanf("%lf", &C);

   
    double largest = A;

    if (B > largest) {
        largest = B;
    }

    if (C > largest) {
        largest = C;
    }

 
    printf("The largest among %.2lf, %.2lf, and %.2lf is %.2lf\n", A, B, C, largest);

    return 0;
}
