// Write a function named findPrimeNumbers that takes an integer n as input and prints all prime numbers from 1 to n.
#include <stdio.h>

int isPrime(int num) {
    if(num <= 1) return 0;
    if(num == 2) return 1;
    if(num % 2 == 0) return 0;
    
    for(int i = 3; i * i <= num; i += 2) {
        if(num % i == 0) return 0;
    }
    return 0;
}

void findPrimeNumbers(int n) {
    printf("Prime numbers from 1 to %d: ", n);
    
    for(int i = 2; i <= n; i++) {
        if(isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(n < 2) {
        printf("No prime numbers in range 1 to %d\n", n);
    } else {
        findPrimeNumbers(n);
    }
    
    return 0;
}