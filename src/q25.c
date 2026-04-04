// Write a recursive function named calculateSumOfDigits that takes an integer n as input and returns the sum of its digits.
#include <stdio.h>

int calculateSumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    
    if (n < 0) {
        n = -n;
    }

    return (n % 10) + calculateSumOfDigits(n / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = calculateSumOfDigits(num);
    
    printf("Sum of digits of %d is %d\n", num, sum);

    return 0;
}