#include <stdio.h>

int main()
{

int brojac;
int velicinaSkupa;

printf("Unesite velicinu skupa: ");
scanf("%d", &velicinaSkupa);

for (brojac = 1; brojac <= velicinaSkupa; brojac++) { //poslednje isto se moze napisati brojac=brojac+1

    printf("%d ", brojac);

}

return 0;

}
