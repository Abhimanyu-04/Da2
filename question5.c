/* Q5: Get the three angles of a triangle as input.
find the count of the type of the triangle.
Continue the process for 5 times.
If the sum of the three angles is greater than 180 then prompt for correct values. (the sum of all internal angles of a triangle is always equal to 180°). Keep the count of the wrong entries also.
Acute Angled Triangle (all three angles less than 90°)
Right-Angled Triangle (one angle that measures exactly 90°)
Obtuse Angled Triangle (one angle that measures more than 90°)
*/

#include <stdio.h>

int main() {
    int acute_count = 0, right_count = 0, obtuse_count = 0, wrong_count = 0;
    int i, angle1, angle2, angle3, sum;
    
    for (i = 0; i < 5; i++) {
        printf("Enter the three angles of the triangle:\n");
        scanf("%d %d %d", &angle1, &angle2, &angle3);
        
        sum = angle1 + angle2 + angle3;
        if (sum > 180) {
            printf("Wrong Entry try again\n");
            wrong_count++;
            i--;
            continue;
        }
        
        if (angle1 < 90 && angle2 < 90 && angle3 < 90) {
            acute_count++;
            printf("Acute Angled Triangle\n");
        }
        else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
            right_count++;
            printf("Right Angled Triangle\n");
        }
        else {
            obtuse_count++;
            printf("Obtuse Angled Triangle\n");
        }
    }
    
    printf("Acute Angled Triangle: %d\n", acute_count);
    printf("Right Angled Triangle: %d\n", right_count);
    printf("Obtuse Angled Triangle: %d\n", obtuse_count);
    printf("Wrong Entries: %d\n", wrong_count);
    
    return 0;
}
