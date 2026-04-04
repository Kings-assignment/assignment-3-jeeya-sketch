// Write a recursive function named printTriangle that takes an integer n as input and prints a triangle of asterisks (*) with n rows.
#include <stdio.h>

void printTriangle(int n) {
    if (n == 0) {
        return;
    }

    printTriangle(n - 1);

    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    if (rows < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Triangle with %d rows:\n", rows);
    printTriangle(rows);

    return 0;
}