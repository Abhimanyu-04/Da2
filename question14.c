/* 
 An international school of class 7 with a class strength of 25, decided to assign 
additional marks for their students in Maths subject, to increase their class average. 
The additional marks were given to each student based on their month of birth. That is 
she was to give that number (month of birth) as the booster marks. The teacher wants 
to find the class average for the original marks as well as for the revised marks. She wants to decide whether to implement this revision in marks or not based on the 
significant improvement in the class average. 
Write a C program to help the teacher get the class average for the original marks as 
well as the revised marks. 
She wants to know whether to implement this revision or not. This is decided based 
on the condition that the revision should bring a significant increase in the class 
average of 5 marks. Else, she is not planning to implement this revision in the marks 
strategy. Write the program to display this decision of “Can implement – Significant 
increase in class average” or “Need not implement – No significant increase in class 
average”. Keep every operation in this program separate. Get the students’ original 
marks and the month of their birth as input.
*/

#include <stdio.h>

int main() {
    int marks[25], birth_month[25], revised_marks[25];
    float original_total = 0, revised_total = 0, original_average, revised_average;
    int i, significant_increase = 0;

    // Get original marks and birth months as input
    printf("Enter the original marks and birth months of the students:\n");
    for(i = 0; i < 25; i++) {
        scanf("%d %d", &marks[i], &birth_month[i]);
    }

    // Calculate revised marks and class totals
    for(i = 0; i < 25; i++) {
        revised_marks[i] = marks[i] + birth_month[i];
        original_total += marks[i];
        revised_total += revised_marks[i];
    }

    // Calculate original and revised averages
    original_average = original_total / 25;
    revised_average = revised_total / 25;

    // Check if there is a significant increase in class average
    if(revised_average - original_average >= 5) {
        significant_increase = 1;
    }

    // Display original and revised class averages
    printf("Original class average: %.2f\n", original_average);
    printf("Revised class average: %.2f\n", revised_average);

    // Display decision whether to implement revision or not
    if(significant_increase) {
        printf("Can implement - Significant increase in class average\n");
    } else {
        printf("Need not implement - No significant increase in class average\n");
    }

    return 0;
}
