//Verzija jedna ima izbornik za zeljenu operaciju

#include <stdio.h>
#include <stdbool.h>

int gcd (int a, int b);
float absoluteValue (float a);
float squareRoot (float b);
bool izborPonovo (bool loop);

int main ()
{
  bool loop = false;

  while (loop == false)
  {
    //meni izbor
    printf("Izaberite zeljenu operaciju.\n");
    printf("****************************\n");
    printf("\n1. Najveci zajednicki delilac\n2. Apsolutna vrednost broja\n3. Izracunavanje korena broja\n");
    printf("\nRedni broj operacije: ");
    int redniBrojOperacije;
    scanf("%d", &redniBrojOperacije);
    printf(" \n");

    int x, y;
    int gsdResult;

    float a;
    float absoluteResult;

    float b;
    float rootResult;

    switch (redniBrojOperacije)
    {
      case 1:
      printf("NAJVECI ZAJEDNICKI DELILAC DVA BROJA\n");
      printf("\nUnesi prvi broj: ");
      scanf("%d", &x);
      printf("Unesi drugi broj: ");
      scanf("%d", &y);
      //pozivanje GCD funkcije
      gsdResult = gcd(x, y);
      printf("Najveci zajednicki delilac brojeva %d i %d je: %d", x, y, gsdResult);
      break;

      case 2:
      printf("APSOLUTNA VREDNOST BROJA\n");
      printf("\nUnesi broj sa decimalom (pozitivan ili negativan): ");
      scanf("%f", &a);
      absoluteResult = absoluteValue (a);
      printf("Apsolutna vrednost broja %f iznosi %f", a, absoluteResult);
      break;

      case 3:
      printf("IZRACUNAVANJE KVADRATNOG KORENA BROJA\n");
      printf("\nUnesi broj do 500: ");
      scanf("%f", &b);
      rootResult = squareRoot (b);
      printf("%.2f", rootResult);

    }

    loop = izborPonovo(loop);

  } //while loop end

printf ("Prijatan dan!\n");
return 0;

} //main int end


int gcd(int a, int b)
{
  if (b == 0) return a;
  return gcd(b, a % b);
}


float absoluteValue (float a)
{
  if (a >= 0)
  {
    a = a;
  }
  else
  {
    a = -a;
  }
  return a;
}


float squareRoot (float b) //ovaj algoritam ne radi za brojeve preko 500
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


bool izborPonovo (bool loop)
{
  char ponovo[5];

  bool ponovoLoop = false;

  while (ponovoLoop == false)
  {
    printf("\n\nZelite li da ponovite? (da/ne): ");
    scanf("%s", ponovo);
    printf (" \n");

    if (strcmp(ponovo, "da") == 0) //funkcija koju jos ne znam, nasao na netu b
    {
      loop = false;
      ponovoLoop = true;
    }
    else if (strcmp(ponovo, "ne") == 0)
    {
      loop = true;
      ponovoLoop = true;
    }
    else
    {
      printf("Unesite da ili ne!\n");
    }
  } //while ponovoLoop (maliLoop)

return loop;

}
