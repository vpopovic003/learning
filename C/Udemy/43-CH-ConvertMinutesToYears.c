#include <stdio.h>

int main()
{

    int minutes = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 0.0;

    //get input from user
    printf("Unesite broj minuta: ");
    scanf("%d", &minutes);

    minutesInYear = 60 * 24 * 365;

    days = minutes / (60.0 * 24.0);     //mora se staviti .0, jer zaokruzuje na int... ? ako se mnozi int i float, rezultat se zaokruzuje ma .0 ?
    years = minutes / minutesInYear;

    printf("%d minuta izrazeno u danima iznosi: %f\n", minutes, days);
    printf("%d minuta izrazeno u godinama iznosi: %f\n", minutes, years);


    return 0;
}
