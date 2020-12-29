#include <stdio.h>

int main()
{

    int a = 80;
    int b = 34;
    printf("%d \n", a/b); //rezultat nije ceo broj, ali ga int zaokruzuje, tj prikazuje samo ceo deo broja

    float c = 80.0;
    float d = 34.0;
    printf("%f \n", c/d);

    printf("%.2f \n", c/d); // %.2f - zaokruzivanje na dve decimale

    printf("%f \n", a/b);  //ne radi - int / int = float   R: 0.000000, ali radi na Kompu..?

    printf("%d \n", c/d); // ne radi - float/float = integer   R: -536870912

    return 0;
}
