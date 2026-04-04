// Write a function named calculateAverage that takes an array of integers as input and returns the average of the numbers.
#include <stdio.h>

float calculateAverage(int *arr, int size) {
    int sum = 0;
    
    for(int i = 0; i < size; i++) {
        sum += *(arr + i);  
    }
    
    return (float)sum / size;
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    float average = calculateAverage(arr, n);
    printf("\nAverage: %.2f\n", average);
    
    return 0;
}