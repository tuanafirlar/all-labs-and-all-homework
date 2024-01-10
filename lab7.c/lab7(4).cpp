#include <stdio.h>
#include <math.h>

int main() {
    int radius, operationType;
    float perimeter, area;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    printf("Enter the operation type (1 for perimeter, 2 for area): ");
    scanf("%d", &operationType);

    if (operationType == 1) {
        perimeter = 2 * M_PI * radius;
        printf("The perimeter of the circle is: %.2f\n", perimeter);
    } else if (operationType == 2) {
        area = M_PI * pow(radius, 2);
        printf("The area of the circle is: %.2f\n", area);
    } else {
        printf("Wrong Input\n");
    }

    return 0;
}