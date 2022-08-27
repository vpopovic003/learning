#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Input size: ");
    scanf("%d", &size);

    char *pstr = (char *)malloc(size * sizeof(char));

    if(pstr != NULL)
    {
        printf("Input string: ");
        scanf(" ");
        gets(pstr);
        printf("%s\n", pstr);    
    }

    free(pstr);
    pstr = NULL;

    return 0;
}