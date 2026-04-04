// Write a function named reverseArray that takes an array of integers as input and reverses the order of the elements in the array.
#include <stdio.h>

void reverseArray(int arr[], int size) {
    int temp;
    
    for(int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int n;
    
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Original: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    reverseArray(arr, n);
    
    printf("\nReversed: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}