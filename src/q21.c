// Write a recursive function named calculateFactorial that takes an integer n as input and returns its factorial.
#include <stdio.h>

long long calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    
    return n * calculateFactorial(n - 1);
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    long long result = calculateFactorial(num);
    
    printf("Factorial of %d is %lld\n", num, result);

    return 0;
}