/*Program za stampanje brojeva za zadatu velicinu skupa
 	autor: Vladimir Popovic
	Kovin, 7.Okt 2020. */

#include <stdio.h>

int main()
{

int brojac;
int velicinaSkupa;

printf("Unesite velicinu skupa: ");
scanf("%d", &velicinaSkupa);

if (velicinaSkupa <= 0)
		{
		printf("%s", "Velicina skupa mora biti izrazena brojem vecim od nule.");
		}

for (brojac = 1; brojac <= velicinaSkupa; brojac++) //poslednje isto se moze napisati brojac=brojac+1
		{
    if (brojac % 10 != 0)  //proverava da li je broj desetica. ako podeljen sa 10 nema ostatak
				{
		    printf("%d ", brojac);
    		}
    else
				{
        printf("%d\n", brojac); //printa novi red i desetice koje su izostavljene iz gornjeg printa, jer preskace
    		}
		}

return 0;

}
