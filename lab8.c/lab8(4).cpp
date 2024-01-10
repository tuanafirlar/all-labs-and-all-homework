#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    if (temperature < 0) {
        printf("Temperature is below the freezing point.\n");
    } else {
        printf("Temperature is above the freezing point.\n");
    }

    return 0;
}