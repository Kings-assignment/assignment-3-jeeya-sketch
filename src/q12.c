//  Write a function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise.
#include <stdio.h>
int isPalindromeRecursive(char str[], int left, int right) {
    if(left >= right) {
        return 1;
    }
    
    if(str[left] != str[right]) {
        return 0;
    }
    
    return isPalindromeRecursive(str, left + 1, right - 1);
}

int isPalindrome(char str[]) {
    int length = 0;
    
    // Find length
    while(str[length] != '\0') {
        length++;
    }
    
    return isPalindromeRecursive(str, 0, length - 1);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    if(isPalindrome(str)) {
        printf("\n'%s' IS a palindrome!\n", str);
    } else {
        printf("\n'%s' is NOT a palindrome.\n", str);
    }
    
    return 0;
}