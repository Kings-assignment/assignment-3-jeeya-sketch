// Write a function named findFactorial that takes an integer as input and returns its factorial.

#include<stdio.h>

int findFactorial(int num) {

    
    int i=1, fact=1;
    while (i<=num){
        fact*=i;
        i++;
    }
    return fact;
}

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int factorial = findFactorial(num);
    printf("The factorial is %d.\n", factorial);

    return 0;
}