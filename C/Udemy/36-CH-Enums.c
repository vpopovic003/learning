#include <stdio.h>

int main()
{
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT};
        //values:   0         2        3      10        11      12

    enum company company1 = XEROX;
    enum company company2 = GOOGLE;
    enum company company3 = EBAY;

    printf("The value of Xerox is: %d.\n", company1);
    printf("The value of Google is: %d.\n", company2);
    printf("The value of Ebay is: %d.\n", EBAY); //direktna vrednost iz prve deklaracije

}
