#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("Enter string: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str)/2; i++)
    {
        char temp;
        temp = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = temp;
    }

    printf("%s\n", str);

    return 0;
}