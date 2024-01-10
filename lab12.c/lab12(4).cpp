#include <stdio.h>
#include <string.h>

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(char *arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (strcmp(arr[j], arr[min_idx]) < 0)
                min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(char *arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%s\n", arr[i]);
}

int main() {
    char *str[10];
    int i;

    printf("Enter 10 words:\n");
    for (i = 0; i < 10; i++) {
        str[i] = (char *)(100 * sizeof(char));
        scanf("%s", str[i]);
    }

    selectionSort(str, 10);

    printf("In lexicographical order:\n");
    printArray(str, 10);

    return 0;
}