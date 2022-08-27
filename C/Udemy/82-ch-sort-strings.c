#include <stdio.h>
#include <string.h>

int main()
{   
    int num = 0;
    printf("Input number of strings: ");
    scanf("%d", &num);
    
    char str[num][20]; // Array of strings

    for(int count = 0; count < num; count++)
    {
        printf("Enter string %d: ", count + 1);
        scanf("%s", str[count]);
    }

    for (int j = 0; j < num; j++)
    {
        for (int i = 0; i < num-i; i++)
        {
            char temp[20];
            if (strcmp(str[i], str[i+1]) > 0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i], str[i+1]);
                strcpy(str[i+1], temp);
            }
            
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}

