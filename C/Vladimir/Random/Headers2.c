#include <stdio.h>
#include <string.h>
#include <C:\Users\Vladimir\Documents\Programiranje\Code\Visual Studio Code\C\Headers\VladimirInfo.h>
//sve jedno je da li je path u < > ili u " "

int main()
{

    char zahtev[20]; //C nema strings, nego se koristi Array
    printf("Zelite li ime ili godine? ");
    scanf("%s", &zahtev);

    if (strcmp(zahtev, "ime") == 0) //strcmp sluzi za uporedjivanje stringa
    {
        printf("Zove se %s. \n", MYNAME); //ucitava MYNAME i MYAGE iz VladimirInfo.h header fajla
    }
    if (strcmp(zahtev, "godine") == 0)
    {
        printf("Ima %d godine. \n", MYAGE);
    }
    //printf("%s ima %d godine. \n", MYNAME, MYAGE);

    return 0;
}
