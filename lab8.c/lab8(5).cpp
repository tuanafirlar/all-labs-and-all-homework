#include <stdio.h>

int main() {
    float temperatureFahrenheit, temperatureCelsius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &temperatureFahrenheit);

    temperatureCelsius = (temperatureFahrenheit - 32) * 5 / 9;

    printf("Temperature in Celsius is: %.2f\n", temperatureCelsius);

    return 0;
}