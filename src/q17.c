// Write a function named calculatePower that takes two integers, base and exponent, as input and returns the result of raising the base to the exponent.
#include<stdio.h>

int calculatePower( int base, int expodent){
    int result =1;
    for (int i =0; i<expodent; i++){
        result *=base;
    }
    return result;
}
int main(){
    int b,e;
    printf("Enter base and experiment: ");
    scanf("%d %d", &b,&e);

    int power = calculatePower(b,e);
    printf("Result is : %d.\n", power);

    return 0;
}