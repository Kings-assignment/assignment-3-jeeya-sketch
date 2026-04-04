// Write a recursive function named calculatePower that takes two integers base and exponent as input and returns the result of raising the base to the exponent.
#include <stdio.h>

long long calculatePower(int base, int exponent) {
    if (exponent == 0) {
        return 1;                    
    }
    
    if (exponent < 0) {
        printf("Error: Negative exponents are not supported.\n");
        return -1;
    }

    return base * calculatePower(base, exponent - 1);
}

int main() {
    int base, exponent;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    if (exponent < 0) {
        printf("Negative exponents are not supported in this version.\n");
        return 1;
    }

    long long result = calculatePower(base, exponent);
    
    printf("%d raised to the power %d is %lld\n", base, exponent, result);

    return 0;
}