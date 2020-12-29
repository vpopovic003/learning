#include <stdio.h>

int main()
{
    int i, j;
    int x;
    int y;

    printf("\nUnesi broj prvih mnozioca: ");
    scanf("%d", &x);
    printf("Unesi broj drugih mnozioca: ");
    scanf("%d", &y);
    printf("%s\n"," ");

    for (i = 1; i <= x; i++) {   //brojac za i
        for (j = 1; j <= y; j++) { //brojac za j. na svaki ciklus za i, idu svi ciklusi za j. (j u okviru i)
            printf("%d * %d = %d  ", i, j, i*j);
        }

        printf("%s\n", " "); //printa praznu liniju posle svake desetice (pripada prvom for lupu)

    }

    printf("%s\n", " ");

    return 0;
}
