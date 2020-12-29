#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pageViews = 0;

    pageViews = pageViews + 1;
    printf("Page views: %d \n", pageViews);
    pageViews = pageViews + 1;
    printf("Page views: %d \n", pageViews);
    pageViews = pageViews + 1;
    printf("Page views: %d \n\n", pageViews);

    float balance = 1000.00;

    balance  *= 1.1;
    printf("Balance is %f\n", balance);
    balance  *= 1.1;
    printf("Balance is %f\n", balance);
    balance  *= 1.1;
    printf("Balance is %f\n", balance);

    return 0;
}
