/*Program za stampanje brojeva za zadatu velicinu skupa
 	autor: Vladimir Popovic
	Kovin, 7.Okt 2020.
Program izmenjen 9. Okt 2020. - koriscena opcija funkcije.
	*/
#include <stdio.h>

int printajBrojeve (int broj); //deklaracija funkcije koja se dole koristi

/* definisanje funkcije
uzima vrednost od varijable velicinaSkupa i stavlja je u vSkupa. Nize brojeve, po 10 u redu i onda vraca
vrednost tamo gde je pozvana u main segmentu.
*/
int niziBrojeve (int vSkupa)
{
	int brojac;
	for (brojac = 1; brojac <= vSkupa; brojac++)  //poslednje isto se moze napisati brojac=brojac+1
	{
			printajBrojeve (brojac); //poziva drugu funkciju
	}
}
/* nema smisla pozivati obe funkcije iz main, jer prva ima loop. A main je poziva samo jednom
pa ne zavrsava loop.
Generalno, upotreba funkcija u ovom programu je nepotrebna. Radim ovo samo
zbog vezbanja "gramatike" */
int printajBrojeve (int broj)
{
	if (broj % 10 != 0)  //proverava da li je broj desetica. ako podeljen sa 10 nema ostatak
	{
			printf("%d ", broj);
	}
	else
	{
			printf("%d\n", broj);
  }     //printa novi red i desetice koje su izostavljene iz gornjeg printa, jer preskace
}
//glavni deo programa - main
int main()
{
	int velicinaSkupa;
	int brojac;

	printf("Unesite velicinu skupa: ");
	scanf("%d", &velicinaSkupa);

	if (velicinaSkupa <= 0)
	{
		printf("%s", "Velicina skupa mora biti izrazena brojem vecim od nule.");
  }
	else
	{
  	niziBrojeve (velicinaSkupa);
  }

return 0;
}
