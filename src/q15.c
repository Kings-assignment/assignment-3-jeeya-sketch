// Write a function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.
#include <stdio.h>

int countOccurrences(char str[], char ch) {
    int count = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[100];
    char ch;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    printf("Enter the character to count: ");
    scanf(" %c", &ch);  
    
    int result = countOccurrences(str, ch);
    
    printf("\nString: \"%s\"\n", str);
    printf("Character '%c' appears %d time(s)\n", ch, result);
    
    return 0;
}