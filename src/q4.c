// Implement a C program to find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    if(n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 1;
    }
    
    int arr[n];
    printf("Enter elements of array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] < arr[j + 1]) {  
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // Display sorted array
    printf("Sorted array (descending): ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    int secondLargest = -1;
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[0]) {
            secondLargest = arr[i];
            break;
        }
    }
    
    if(secondLargest == -1)
        printf("No distinct second largest element found.\n");
    else
        printf("Second largest element: %d\n", secondLargest);
    
    return 0;
}