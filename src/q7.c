// Implement a C program to reverse a string.
#include <stdio.h>

int main() {
    char str[100];
    char reversed[100];
    int length = 0, i, j;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }
    
    printf("Original string: %s\n", str);
    
    for(i = length - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = str[i];
    }
    reversed[length] = '\0';  
    
    printf("Reversed string: %s\n", reversed);
    
    return 0;
}