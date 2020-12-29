//Verzija 2 radi sve operacije u sekvenci

#include <stdio.h>
#include <stdbool.h>

//deklarisanje funkcija
int gcd (int a, int b);
float absoluteValue (float a);
float squareRoot (float b);
bool izborPonovo (bool loop);

int main ()
{
  bool loop = false;

  while (loop == false) //loop koji ponovo pokrece izracunavanje ako je izbor "da"
  //izbor "ne" mu menja stanje u true, i blok prestaje sa izvrsenjem
  //iz razloga nepoznatih, u while mora stojati false koje se menja u true za prekidanje
  //supotrona varijanta (iz true u false) ne radi
  {
    int x, y;
    int gcdResult;

    float a;
    float absoluteResult;

    float b;
    float rootResult;

    printf("Dobrodosli u program za izracunavanje!\n\n");
    printf("NAJVECI ZAJEDNICKI DELILAC DVA BROJA\n");
    printf("\nUnesi prvi broj: ");
    scanf("%d", &x);
    printf("Unesi drugi broj: ");
    scanf("%d", &y);
    gcdResult = gcd(x, y); //pozivanje GCD funkcije
    printf("Najveci zajednicki delilac brojeva %d i %d je: %d\n\n", x, y, gcdResult);
    printf("Najveci zajednicki delilac brojeva %d i %d je: %d\n\n", x, y, gcd(x, y)); //<== moze se i poziv funkcije staviti u print

    printf("APSOLUTNA VREDNOST BROJA\n");
    printf("\nUnesi broj sa decimalom (pozitivan ili negativan): ");
    scanf("%f", &a);
    absoluteResult = absoluteValue (a); //pozivanje funkcije za apsolutnu vrednost
    printf("Apsolutna vrednost broja %.2f je %.2f\n\n", a, absoluteResult);

    printf("IZRACUNAVANJE KVADRATNOG KORENA BROJA\n");
    printf("\nUnesi broj: ");
    scanf("%f", &b);
    rootResult = squareRoot (b); //pozivanje funkcije za izracunavanje korena
    //b = absoluteValue (b); //funkcija za aps vrednost samo zbog printanja dole, ostaje negativan za printanje bez funkcije. uklonio za najnoviju verziju, printa samo -1
    if (rootResult >= 0)
      printf("Kvadratni koren broja %.2f iznosi: %.2f", b, rootResult);
    else
      printf("Netacan rezultat: %.2f", rootResult);

    loop = izborPonovo(loop); //pozivanje funkcije za upit o ponovnom izracunavanju
  } //while loop end

printf ("Prijatan dan!\n");
return 0;

} //main int end


//***DEFINISANJE FUNKCIJA***

//NAJVECI ZAJEDNICKI DELILAC
int gcd(int a, int b)
{
  if (b == 0) return a;
  return gcd(b, a % b);
}

//APSOLUTNA VREDNOST
float absoluteValue (float a)
{
  if (a >= 0) //moja pocetna - komplikovana
  {
    a = a;
  }
  else
  {
    a = -a;
  }

return a;

/* Uprosceno moze i ovako
  if (a < 0) //uprosceno. OK.
    a = -a;
  return a;
*/
}

//KVADRATNI KOREN
float squareRoot (float b)
{
  const float epsilon = .00001;
  float guess = 1.0;
  float sqrResult = 0;

  if (b < 0)
  {
    /*b = absoluteValue (b);
    printf ("Uzeta je apsolutna vrednost broja, koji sada iznosi: %f\n", b);*/
    printf ("Negativna vrednost za koren!\n");
    guess = -1;

  }
  else
  {
    while (absoluteValue (guess * guess - b) >= epsilon)
    guess  = (b / guess + guess) / 2.0; //algoritam iz kursa. ne kapiram ga jos
  }

  return guess;
}

//UPIT ZA PONOVNO IZRACUNAVANJE
bool izborPonovo (bool loop)
{
  char ponovo[5];

  bool maliLoop = false; //loop koji ponovo postavlja pitanje ako nije uneseno "da" ili "ne"

  while (maliLoop == false)
  {
    printf("\n\nZelite li da ponovite? (da/ne): ");
    scanf("%s", ponovo);
    printf (" \n");

    if (strcmp(ponovo, "da") == 0) //funkcija za uporedjivanje stringa koju jos ne znam, nasao na netu
    {
      loop = false; //nastavlja glavni loop, ostaje na false
      maliLoop = true; //iskljucuje maliLoop, menja u true
    }
    else if (strcmp(ponovo, "ne") == 0)
    {
      loop = true; //iskljucuje glavni loop
      maliLoop = true; //iskljucuje maloLoop
    }
    else if (strcmp(ponovo, "Marko") == 0)
    {
      printf("Polo!\n");
    }
    else
    {
      printf("Unesite da ili ne!\n");
      //nema menjanja vrednosti za loop, jer ostaje aktivan da bi se unelo pravilno "da" ili "ne"
    }
  } //while ponovoLoop (maliLoop)

return loop;

}
