// Write a recursive function named calculateBinary that takes an integer n as input and returns its binary representation as a string.
#include <stdio.h>

void calculateBinary(int n) {
    if (n == 0) {
        return;
    }
    calculateBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers are not supported.\n");
        return 1;
    }

    printf("Binary representation of %d is: ", num);

    if (num == 0) {
        printf("0");
    } else {
        calculateBinary(num);
    }

    printf("\n");

    return 0;
}