#include <stdio.h>

void square(int *num);

int main()
{
    int num = 4;

    square(&num);

    printf("%d\n", num);

    return 0;
}


void square(int *num)
{
    *num = *num * *num;
}