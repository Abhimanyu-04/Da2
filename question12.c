/* 
 Samantha is an avid collector of lucky numbers. She believes that each number has 
its own unique energy and can bring good luck if used correctly. One day, she came 
across a new number that had a mysterious aura and she could not resist finding out 
more about it. She heard that the number may fall within the digit combinations, so 
she decided to sum up all the four-digit even numbers and then keep adding the 
digits of the summation until a single digit is found to unlock its secrets. Later, she 
must check again whether the single digit is odd or even. If odd, then you must say 
“Odd Found” otherwise you must return “Even found”. Write a C program to help 
her in finding the mysterious number
*/

#include <stdio.h>

// Function to calculate the sum of digits of a number
int sum_of_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int i, sum = 0, single_digit_sum;

    // Calculate the sum of all four-digit even numbers
    for (i = 1000; i <= 9998; i += 2) {
        sum += i;
    }

    // Calculate the sum of digits until a single digit is found
    while (sum > 9) {
        sum = sum_of_digits(sum);
    }

    // Check if the single digit is odd or even and print the result
    if (sum % 2 == 0) {
        printf("Even found\n");
    } else {
        printf("Odd found\n");
    }

    return 0;
}
