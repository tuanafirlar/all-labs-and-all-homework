#include <stdio.h>

int main() {
    int amount, count;

    printf("Enter the amount of money: ");
    scanf("%d", &amount);

    // Initialize count as the entered amount
    count = amount;

    // Count the number of 100 banknotes
    printf("%d banknotes of 100.\n", count / 100);
    count %= 100;

    // Count the number of 50 banknotes
    printf("%d banknotes of 50.\n", count / 50);
    count %= 50;

    // Count the number of 20 banknotes
    printf("%d banknotes of 20.\n", count / 20);
    count %= 20;

    // Count the number of 10 banknotes
    printf("%d banknotes of 10.\n", count / 10);
    count %= 10;

    // Check if there are remaining amounts
    if (count > 0) {
        printf("Remaining amount: %d\n", count);
    }

    return 0;
}