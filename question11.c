/* 
 The temperature in Chennai exists somewhere between 280C to 330C in a particular 
week. The temperature in Delhi is 8
0C lesser than in Chennai. Likewise, the 
temperature in Haveri is 5
0C more than that of Chennai. Write a C program to find the 
temperature of Gangtok for a particular week, which is the temperature difference 
between Delhi and Haveri. Get the temperature of Chennai (
0C) as input for the week 
of 7 days and the temperature of Gangtok (
0C) as output for the week of 7 days. 
Implement the program OF c using arrays and validate the rules.
*/

#include <stdio.h>

int main() {
    float chennai[7], delhi[7], haveri[7], gangtok[7];
    float temp_diff;
    int i;

    // Get temperature data for Chennai
    printf("Enter the temperature data for Chennai for the week:\n");
    for (i = 0; i < 7; i++) {
        scanf("%f", &chennai[i]);

        // Validate temperature range for Chennai
        if (chennai[i] < 28 || chennai[i] > 33) {
            printf("Temperature for Chennai should be between 28C to 33C.\n");
            return 1;
        }
    }

    // Calculate temperature data for Delhi and Haveri
    for (i = 0; i < 7; i++) {
        delhi[i] = chennai[i] - 8;
        haveri[i] = chennai[i] + 5;
    }

    // Calculate temperature data for Gangtok
    for (i = 0; i < 7; i++) {
        temp_diff = haveri[i] - delhi[i];
        gangtok[i] = chennai[i] - temp_diff;

        // Validate temperature range for Gangtok
        if (gangtok[i] < -5 || gangtok[i] > 5) {
            printf("Temperature for Gangtok should be between -5C to 5C.\n");
            return 1;
        }
    }

    // Print temperature data for Gangtok
    printf("Temperature data for Gangtok for the week:\n");
    for (i = 0; i < 7; i++) {
        printf("%.1f ", gangtok[i]);
    }
    printf("\n");

    return 0;
}
