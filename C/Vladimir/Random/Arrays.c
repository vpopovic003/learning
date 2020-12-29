#include <stdio.h>
#include <string.h> //kompajler je sam rekao da treba i ovo

int main()
{
    char name[17] = "Vladimir Popovic"; //17 bajtova za array - slova 17 + razmak + string terminator na kraju \0
    printf("Moje ime je %s \n", name);

    name[2] = 's'; //menja treci item
    printf("Moje ime je %s \n", name);

    char food[] = "tuna"; //bajtovi nisu deklarisani jer su automatski dodeljeni zbog "tuna"
    printf("Najbolja hrana je %s \n", food);

    strcpy(food, "gaga"); //string copy
    printf("Najbolja hrana je %s \n", food);

    return 0;

}
