/* Consider that you are going to analyze the characters in the given string. Write 
a C program to extract the characters in the given string and print whether the 
character is an uppercase alphabet, lowercase alphabet, digits, whitespace, 
special symbols. Print the count of each category by storing their counts in an 
array. Use appropriate looping constructs to implement this.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char string[100];
    int uppercase_count = 0, lowercase_count = 0, digit_count = 0, whitespace_count = 0, special_count = 0;

    printf("Enter a string: ");
    fgets(string, 100, stdin);

    for(int i = 0; string[i] != '\0'; i++) {
        char c = string[i];
        if(isupper(c)) {
            uppercase_count++;
            printf("%c is an uppercase letter.\n", c);
        } else if(islower(c)) {
            lowercase_count++;
            printf("%c is a lowercase letter.\n", c);
        } else if(isdigit(c)) {
            digit_count++;
            printf("%c is a digit.\n", c);
        } else if(isspace(c)) {
            whitespace_count++;
            printf("%c is a whitespace character.\n", c);
        } else {
            special_count++;
            printf("%c is a special symbol.\n", c);
        }
    }

    printf("\nUppercase letters: %d\n", uppercase_count);
    printf("Lowercase letters: %d\n", lowercase_count);
    printf("Digits: %d\n", digit_count);
    printf("Whitespaces: %d\n", whitespace_count);
    printf("Special symbols: %d\n", special_count);

    return 0;
}
