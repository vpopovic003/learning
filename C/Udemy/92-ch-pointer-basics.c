#include <stdio.h>

int main()
{
    int num = 10;
    int *pNum = NULL;
    pNum = &num;

    printf("value adress: %p\n", &num);
    printf("pointer adress: %p\n", &pNum);
    printf("pointer value: %p\n", pNum);
    printf("value: %d\n", *pNum);
    
    return 0;
}