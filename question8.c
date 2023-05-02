/* e a c program to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 ... n!/n by utilizing user defined recursive function? 
Get the value of n from the user. 
Do not use any storage classes. Without returning the calculated result 
from the function, display the result in main/*/

#include <stdio.h>

void calculate_factorial_sum(int n, double *sum) {
    if (n == 1) {
        *sum += 1;
    } else {
        double factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        *sum += factorial / n;
        calculate_factorial_sum(n-1, sum);
    }
}

int main() {
    int n;
    double sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    calculate_factorial_sum(n, &sum);

    printf("The sum of the series is: %lf\n", sum);

    return 0;
}
