/* ABC car showroom sells various types of cars such as Hatchback, Sedan, 
SUVs, and MUV. Due to the year-end sale, the showroom provides a 3%, 5%, 
10%, and 15% discount for various car models Hatchback, Sedan, SUV, and 
MUV respectively. Also applies 12% of GST for the total amount of purchase 
Write a C program to implement the above scenario which will read the 
type_of_the_car, price_of_the_car and extra-fitting_price_of_the_car as input 
from the user and estimate the Net amount to be paid to the showroom. If the 
type of car is other than Hatchback, Sedan, SUV, and MUV then display 
“Invalid Type”. (Difficulty Level: Easy)
The net amount to be paid to the showroom is estimated as follows:
(For example-if the purchased car is Hatchback)
Total = price_of_the_car + extra-fitting_price_of_the_car
Discount = Total * 0.03 // 0.03 denotes 3% 
 wastage
gst = (Total - Discount) * 0.12 // 0.12 denotes 
 12% GST
net = Total – Discount + gst*/
#include <stdio.h>
#include <string.h>

int main() {
    char type_of_the_car[20];
    float price_of_the_car, extra_fitting_price_of_the_car, total, discount, gst, net;

    printf("Enter the type of car: ");
    scanf("%s", type_of_the_car);

    printf("Enter the price of the car: ");
    scanf("%f", &price_of_the_car);

    printf("Enter the extra fitting price of the car: ");
    scanf("%f", &extra_fitting_price_of_the_car);

    total = price_of_the_car + extra_fitting_price_of_the_car;

    if (strcmp(type_of_the_car, "Hatchback") == 0) {
        discount = total * 0.03;
    } else if (strcmp(type_of_the_car, "Sedan") == 0) {
        discount = total * 0.05;
    } else if (strcmp(type_of_the_car, "SUV") == 0) {
        discount = total * 0.1;
    } else if (strcmp(type_of_the_car, "MUV") == 0) {
        discount = total * 0.15;
    } else {
        printf("Invalid Type\n");
        return 0;
    }

    gst = (total - discount) * 0.12;

    net = total - discount + gst;

    printf("Net amount to be paid to the showroom: %.2f\n", net);

    return 0;
}
