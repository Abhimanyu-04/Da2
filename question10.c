/*
Write a C Program that reads the input as a string from the user in main (). (1 
mark)
The input should be a sentence with two words. Pass this string to a function.(1 
mark) 
Inside the function do the following operations:  For the first word, keep only the first character of the word to be in upper 
case and the rest of the characters in lower case. (1 mark)  For the second word, convert all the characters into upper case letter. (1 
mark)  Print the revised string consisting of the two words in the function itself 
(1 mark)  Find the length of the entire string. Print its length in the function itself in 
the next line of the revised string. Use appropriate string function to print 
this result in the next line. (1 mark)  Return the length of the string, if the length is less than 20. Else return the 
size of the string. (2 marks)
Consider the input string given by the user is:  “computer programming”  Revised string to be printed in the function is “Computer 
PROGRAMMING”
*/
#include <stdio.h>
#include <string.h>

int process_string(char* str) {
    int len = strlen(str);

    // Convert the first word to title case
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            str[i + 1] = toupper(str[i + 1]);
            break;
        } else {
            str[i] = tolower(str[i]);
        }
    }

    // Convert the second word to uppercase
    for (int i = 0; i < len; i++) {
        str[i] = toupper(str[i]);
    }

    // Print the revised string
    printf("%s\n", str);

    // Print the length of the string
    printf("%d\n", len);

    // Return the length or the size of the string
    if (len < 20) {
        return len;
    } else {
        return sizeof(str);
    }
}

int main() {
    char str[100];

    // Read the input string
    printf("Enter a sentence with two words: ");
    fgets(str, sizeof(str), stdin);

    // Pass the string to the function
    int result = process_string(str);

    // Print the result
    printf("Result: %d\n", result);

    return 0;
}
