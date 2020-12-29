#include <stdio.h>

int main() {

    int x = 0;
    int y = 0;

    //Ternary operator
    x = y > 7 ? 25 : 50;

    printf(" %i \n", x);

    //is the same as

    if (x > 7)
        x = 25;
    else
        x = 50;

    printf(" %i \n", x);

    return 0;
}
