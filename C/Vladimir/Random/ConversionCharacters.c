#include <stdio.h>

int main()
{
	int x;

	printf("Unesi broj: ");
	scanf("%d", &x);
	printf("Uneli ste %d\n", x); // znak % u %d znaci da ce biti zamenjen vrednoscu za X. d znaci integer. umesto x moze stojati i brojcana vrednost, ili formula.
	printf("Broj veci je %d\n", x + 1);
	printf("Broj veci je %d\n", ++x); // ako se stavi x++, izbacice originalnu vrednost x pa onda dodati increment
	printf("Neki broj je %d\n", 11);
	printf("%d", x);

	return 0;
}
