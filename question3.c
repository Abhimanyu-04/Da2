/* Q3: Write a C program that accepts a string as input,print the length of the string and display the word fequency, then use pointers to find the first repeated and non-repeated character in the string, and print the output:
POSSIBLE TEST CASES:
INPUT:
SUJITHRA
OUTPUT:
Length of the string is: 8
Word frequency is: 8
No repeated characters found in the string.
First non-repeated character is: S
*/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int i, j, len, count = 0;
    char *repeat_ptr = NULL;
    char *non_repeat_ptr = NULL;
    int freq[MAX_SIZE] = {0};

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    len = strlen(str);

    // remove the newline character from the string
    if (len > 0 && str[len-1] == '\n') {
        str[--len] = '\0';
    }

    // calculate the length of the string
    printf("Length of the string is: %d\n", len);

    // calculate the word frequency
    for (i = 0; i < len; i++) {
        if (str[i] != ' ') {
            freq[str[i]]++;
            count++;
        }
    }
    printf("Word frequency is: %d\n", count);

    // find the first repeated character
    for (i = 0; i < len; i++) {
        if (freq[str[i]] > 1) {
            repeat_ptr = &str[i];
            printf("First repeated character is: %c\n", *repeat_ptr);
            break;
        }
    }
    if (repeat_ptr == NULL) {
        printf("No repeated characters found in the string.\n");
    }

    // find the first non-repeated character
    for (i = 0; i < len; i++) {
        if (freq[str[i]] == 1) {
            non_repeat_ptr = &str[i];
            printf("First non-repeated character is: %c\n", *non_repeat_ptr);
            break;
        }
    }
    if (non_repeat_ptr == NULL) {
        printf("No non-repeated characters found in the string.\n");
    }

    return 0;
}
