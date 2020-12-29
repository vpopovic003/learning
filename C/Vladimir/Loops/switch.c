#include <stdio.h>

int main(){

    int x=0;
    printf("Unesi 5, 10 ili 15 kao vrednost za x: ");
    scanf("%d",&x);

    switch (x)
    {
    case 15:
        printf("%d je vece od 10\n", x);
        break;

    case 10:
        printf("%d je jednako 10\n", x);
        break;

    case 5:
        printf("%d je manje od 10\n", x);
        break;

    default:
        printf("Pogresan unos!");
    }

}
