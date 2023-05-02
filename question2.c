/* Q2: Write a c program to find the number of  words,vowels, consonants, space and special characters in a string
INPUT:
*Nothing is impossible in this world.
OUTPUT:
Words = 6
Vowels = 10
Consonants = 20
Space = 5
Special Characters = 2
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i, vowels, consonants, words, spaces, special;

    vowels = consonants = words = spaces = special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isspace(str[i])) {
            spaces++;
        } else if (ispunct(str[i])) {
            special++;
        }
    }

    // count the number of words
    for (i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i]) || ispunct(str[i])) {
            words++;
        }
    }
    words++; // add 1 to account for the last word

    printf("Words = %d\n", words);
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Space = %d\n", spaces);
    printf("Special Characters = %d\n", special);

    return 0;
}
