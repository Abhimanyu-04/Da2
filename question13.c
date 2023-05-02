/* 
 A digital locker in the bank is protected with a security mechanism. To open the 
locker a password of 9 characters is required. The input characters should be 
accepted as 3x3 matrix and two diagonal characters of the matrix are concatenated 
(refer to the example given below) and compared with the password already stored 
in a character array for authentication. Write a C program to implement this logic 
for password verification. 
 Input to open the device
 a b c
 d e f
 g h i
Concatenation of Diagonal characters: aeiceg
*/

#include <stdio.h>
#include <string.h>

#define PASSWORD "aeiceg"  // The correct password

int main() {
    char input[3][3];
    char diagonal[5];
    int i, j, k = 0;

    // Get input characters as a 3x3 matrix
    printf("Enter 9 characters as a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf(" %c", &input[i][j]);
        }
    }

    // Concatenate the diagonal characters of the matrix
    for (i = 0; i < 3; i++) {
        diagonal[k++] = input[i][i];  // Add character from top-left to bottom-right diagonal
    }
    for (i = 2, j = 0; i >= 0; i--, j++) {
        diagonal[k++] = input[i][j];  // Add character from bottom-left to top-right diagonal
    }
    diagonal[k] = '\0';  // Terminate the string with a null character

    // Compare the concatenated diagonal characters with the password
    if (strcmp(diagonal, PASSWORD) == 0) {
        printf("Password correct. Locker opened.\n");
    } else {
        printf("Password incorrect. Locker remains locked.\n");
    }

    return 0;
}
