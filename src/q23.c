// Write a recursive function named calculateGCD that takes two integers a and b as input and returns their greatest common divisor (GCD).
#include <stdio.h>

int calculateGCD(int a, int b) {
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;

    if (b == 0) {
        return a;
    }
    
    return calculateGCD(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = calculateGCD(num1, num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}