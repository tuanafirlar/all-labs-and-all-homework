#include <stdio.h>

int main() {
    int midterm, final, studentID, visa, finalInformation;
    float passingGrade;

    printf("Enter midterm grade: ");
    scanf("%d", &midterm);

    printf("Enter final grade: ");
    scanf("%d", &final);

    printf("Enter student ID: ");
    scanf("%d", &studentID);

    printf("Enter visa: ");
    scanf("%d", &visa);

    printf("Enter final information: ");
    scanf("%d", &finalInformation);

    passingGrade = 0.4 * midterm + 0.6 * final;

    printf("Passing grade: %.2f\n", passingGrade);

    if (passingGrade >= 50) {
        printf("Congratulations! You have passed.\n");
    } else {
        printf("Sorry, you have failed.\n");
    }

    return 0;
}