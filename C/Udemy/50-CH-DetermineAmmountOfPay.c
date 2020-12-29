#include <stdio.h>

int main()
{

    int workHours = 0;
    float payRate = 12.00;
    float payGross = 0.0;
    float tax = 0.0;
    float payNet = 0.0;

    printf("Input the ammount of work hours: ");
    scanf("%d", &workHours);

    if (workHours <= 40)
        payGross = (float)workHours * payRate; //standard
    else
        payGross = 40 * payRate + ((float)workHours - 40) * (payRate * 1.5); //Overtime, 40+ 1.5 rate

    if (payGross <= 300.00)
        tax = payGross * 0.15;
    if (payGross > 300.00 && payGross < 450.00)
        tax = 300.00 * 0.15 + (payGross - 300.00) * 0.20;
    if (payGross > 450.00)
        tax = 300.00 * 0.15 + 150 * 0.20 + (payGross - 450.00) * 0.25;

    payNet = payGross - tax;
    printf("\n");
    printf("Your weekly pay is:\n");
    printf("-------------------\n");
    printf("Work Hours: %dh\n", workHours);
    printf("Gross Pay: $%.2f\n", payGross);
    printf("Tax: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", payNet);
    return 0;
}
