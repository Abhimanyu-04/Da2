/* Q4: Write a cprogram to get the employee information name,age,position and Date of joining. 
Print the employee list based on Alphabaetical order. 
Display the order of the employees based on date of joining.*/

#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int age;
    char position[50];
    char date_of_joining[11];
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n], temp;

    // Get employee information
    for(int i=0; i<n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("Position: ");
        scanf("%s", emp[i].position);
        printf("Date of joining (dd/mm/yyyy): ");
        scanf("%s", emp[i].date_of_joining);
    }

    // Sort employee list by name
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(strcmp(emp[j].name, emp[j+1].name) > 0) {
                temp = emp[j];
                emp[j] = emp[j+1];
                emp[j+1] = temp;
            }
        }
    }

    // Display employee list sorted by name
    printf("\nEmployee List sorted by name:\n");
    for(int i=0; i<n; i++) {
        printf("Name: %s\n", emp[i].name);
        printf("Age: %d\n", emp[i].age);
        printf("Position: %s\n", emp[i].position);
        printf("Date of Joining: %s\n", emp[i].date_of_joining);
    }

    // Sort employee list by date of joining
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            int d1, m1, y1, d2, m2, y2;
            sscanf(emp[j].date_of_joining, "%d/%d/%d", &d1, &m1, &y1);
            sscanf(emp[j+1].date_of_joining, "%d/%d/%d", &d2, &m2, &y2);
            if(y1 > y2 || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2)) {
                temp = emp[j];
                emp[j] = emp[j+1];
                emp[j+1] = temp;
            }
        }
    }

    // Display employee list sorted by date of joining
    printf("\nEmployee List sorted by date of joining:\n");
    for(int i=0; i<n; i++) {
        printf("Name: %s\n", emp[i].name);
        printf("Age: %d\n", emp[i].age);
        printf("Position: %s\n", emp[i].position);
        printf("Date of Joining: %s\n", emp[i].date_of_joining);
    }

    return 0;
}
