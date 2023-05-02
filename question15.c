/*
 Paul is provided with a number “x” whose scope will remain throughout the program. 
Using the concept of recursion, help Paul to write a “C program” for finding the value 
of (x)n
 where n should be less than or equal to 5.
 */

#include<stdio.h>

int power(int x, int n);

int main() {
    int x, n, result;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n (less than or equal to 5): ");
    scanf("%d", &n);
    result = power(x, n);
    printf("%d^%d = %d\n", x, n, result);
    return 0;
}

int power(int x, int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return x * power(x, n-1);
    }
}
