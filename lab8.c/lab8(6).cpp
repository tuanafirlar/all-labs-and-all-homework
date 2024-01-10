#include <stdio.h>

int main() {
   
    double lengthInFeet, lengthInCentimeters;

   
    printf("Enter the length in feet: ");
    scanf("%lf", &lengthInFeet);

   
    lengthInCentimeters = lengthInFeet * 30.48;

    printf("%.2lf feet is equal to %.2lf centimeters\n", lengthInFeet, lengthInCentimeters);

    return 0;
}
