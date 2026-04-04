// Implement a C program to count the occurrence of a specific character in a string.
#include <stdio.h>

int main() {
    char str[100];
    char searchChar;
    int count = 0;
    int i;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);  
    
    printf("Enter the character to count: ");
    scanf(" %c", &searchChar);  
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == searchChar) {
            count++;
        }
    }
    
    printf("\nString: %s\n", str);
    printf("Character '%c' appears %d time(s) in the string.\n", searchChar, count);
    
    return 0;
}