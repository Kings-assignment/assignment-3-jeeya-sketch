//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.
#include <stdio.h>

void calculateFactorialSeries(int n) {
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return;
    }

    long long fact = 1; 

    printf("Factorial series up to %d:\n", n);
    
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
        printf("%d! = %lld\n", i, fact);
    }
}

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    calculateFactorialSeries(n);

    return 0;
}