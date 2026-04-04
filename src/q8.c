// Write a C program to check if a given string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, isPalindrome = 1;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str); 
    
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }
    
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    
    printf("String: %s\n", str);
    
    if(isPalindrome) {
        printf("'%s' is a palindrome!\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }
    
    return 0;
}