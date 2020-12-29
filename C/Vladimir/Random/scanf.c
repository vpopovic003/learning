#include <stdio.h>

int main()
{

    char firstName[20];
    //char lastName[20];
    char crushName[20];
    //char crushLastName[20];
    int numberOfKids;

    printf("What is your name? ");
    scanf("%s", firstName);

    printf("Who are you going to marry? ");
    scanf("%s", crushName);

    printf("How many kids will you have? ");
    scanf("%d", &numberOfKids);

    printf("%s and %s are in love, and they will have %d kids.", firstName, crushName, numberOfKids);

    return 0;
}
