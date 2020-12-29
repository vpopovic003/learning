/*Program za stampanje brojeva za zadatu velicinu skupa
 	autor: Vladimir Popovic
	Kovin, 7.Okt 2020.
Program izmenjen 9. Okt 2020. - koriscena opcija funkcije.
	*/

#include <stdio.h>


/* definisanje funkcije
uzima vrednost od varijable velicinaSkupa i stavlja je u vSkupa. Nize brojeve, po 10 u redu i onda vraca
vrednost tamo gde je pozvana u main segmentu.
*/
void prikaziBrojeve (int vSkupa)
{

	int brojac;
	for (brojac = 1; brojac <= vSkupa; brojac++)  //poslednje isto se moze napisati brojac=brojac+1
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
}

//glavni deo programa - main
int main()
{

	int velicinaSkupa;

	printf("Unesite velicinu skupa: ");
	scanf("%d", &velicinaSkupa);

	if (velicinaSkupa <= 0)
	{
		printf("%s", "Velicina skupa mora biti izrazena brojem vecim od nule.");
  }
	else
	{
  	prikaziBrojeve (velicinaSkupa); //pozivanje funkcije koja je definisana iznad int main
  }

return 0;

}
