#include <stdio.h>

int stringLen(const char *str);


int main()
{
    printf("String length: %d\n", stringLen("example"));

    return 0;
}


int stringLen(const char *str)
{
    const char *strOrig = str;

    while(*str) // Until *str reaches \0
        ++str; // Incrementing address

    return str - strOrig; // Substract end pointer with the begining pointer
}