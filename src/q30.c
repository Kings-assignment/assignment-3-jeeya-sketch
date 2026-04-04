//  Write a recursive function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.
#include <stdio.h>
int countOccurrences(char str[], char ch, int index) {
    if (str[index] == '\0') {
        return 0;
    }

    int count = 0;
    if (str[index] == ch) {
        count = 1;
    }
    return count + countOccurrences(str, ch, index + 1);
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the character to count: ");
    scanf(" %c", &ch);   

    int result = countOccurrences(str, ch, 0);

    printf("The character '%c' appears %d times in \"%s\".\n", ch, result, str);

    return 0;
}