#include <stdio.h>

int main()
{

int num = 0;

scanf("%i", &num);


//MODUL Dok se ne unese -1, vrti lup.
//Tako moze i da ocekuje input iz drugog dela programa, ili password npr.
while (num != 1)
    {
    printf("loop1\n");
    scanf("%i", &num);
}

int num2 = 0;

do
    {
    scanf("%i\n", &num2);
    printf("loop2 %i\n", num2);   //CUDNO SE PONASA. UNESEM 3 on tek u sledecem krugu izbaci 3.
    num2++;                     // uvek kasni jedan krug sa izbacivanjem unetog broja. Istraziti.
    }
while (num2 != 20); //Nakon unosenja br. 20, ocekuje jos jedan unos. Zasto?

printf("Kraj.\n");

return 0;
}
