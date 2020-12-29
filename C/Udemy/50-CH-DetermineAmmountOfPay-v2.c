#include <stdio.h>

//definisanje konstanti
#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40
#define OVERTIME_MULTIPLIER 1.5

int main()
{

    int workHours = 0;
    float payGross = 0.0;
    float tax = 0.0;
    float payNet = 0.0;

    printf("Input the ammount of work hours: ");
    scanf("%d", &workHours);
    //Calculate Gross Pay
    if (workHours <= OVERTIME)
        payGross = (float)workHours * PAYRATE; //standard
    else
        payGross = OVERTIME * PAYRATE + ((float)workHours - OVERTIME) * (PAYRATE * OVERTIME_MULTIPLIER); //Overtime, 40+ 1.5x pay rate
    //Calculate Taxes
    if (payGross <= 300)
        tax = payGross * TAXRATE_300;
    else if (payGross > 300 && payGross <= 450)
        tax = 300.00 * TAXRATE_300 + (payGross - 300.00) * TAXRATE_150;
    else if (payGross > 450.00)
        tax = 300.00 * TAXRATE_300 + 150 * TAXRATE_150 + (payGross - 450.00) * TAXRATE_REST;

    //Display ouput
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
