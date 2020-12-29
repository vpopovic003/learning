#include <stdio.h>
#include <stdbool.h>

int main ()
{
	printf("Pogodi broj izmedju 1 i 100. \n");
	int randomNumber = 35;
	bool found = false;
	
	while (found == false)
	{
		printf("Pogodi broj: ");
		int userGuess = 0;
		scanf("%d", &userGuess);
		
		if (userGuess == randomNumber)
		{
			printf("Pogodio si!\n");
			found = true;
			//ili staviti break
		}
		else if (userGuess > randomNumber)
		{
			printf("Gadjaj nize.\n");
		}
		else
		{
			printf("Gadjaj vise.\n");
		}
		printf(" \n");
	}
	
return 0;
}
