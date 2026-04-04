// Write a C program to find the maximum and minimum elements in an array.
#include <stdio.h>

int main() {
    int n, min, max;
    printf("Enter the size of array.");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] < min) min =arr[i];
        if (arr[i] > max ) max =arr[i];
    }
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}