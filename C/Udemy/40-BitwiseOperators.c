#include <stdio.h>

int main()
{

    unsigned int a = 60; //0011 1100
    unsigned int b = 13; //0000 1100
    int result = 0;

    result = a & b;
        // 0000 1100 AND, uporedjuje svaki bit u a i b

    printf("Result: %d \n", result);

    result = a | b;
        // 0011 1100 OR

    printf("Result: %d \n", result);

    return 0;
}
