// Write a C program to concatenate two strings without using the built-in string functions.
#include <stdio.h>

int main() {
    char str1[200], str2[100];
    int i, j;
    
    printf("Enter first string: ");
    scanf("%[^\n]s", str1);
    
    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);  

    i = 0;
    while(str1[i] != '\0') {
        i++;
    }
    
    j = 0;
    while(str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';  
    
    printf("\nConcatenated string: %s\n", str1);
    
    return 0;
}