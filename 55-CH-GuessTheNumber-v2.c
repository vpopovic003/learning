//BOLJA VERZIJA
//JEDINI PROBLEM JE UNOS SIMBOLA KOJI NIJE INT

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Random number generator
    time_t t;
    srand ((unsigned)time(&t));
    int randomNumber = rand() % 21;

    printf("This is a guessing game.\n");
    printf("You have to guess a random number between 1 and 20\n");
    printf("\n");

    int guess = 0;
    int tryCount;

    //broj pokusaja 5, for loop
    for (tryCount = 5; tryCount >= 1;) //na test se mora staviti >, sa < ne radi..?
    {
        printf("You have %d tries left.\n", tryCount);
        printf("Enter your guess: ");
        scanf("%d", &guess);

        //provera da li je unet broj 1-20 ili neki drugi simbol. Na simbol upada u infinite loop
        //treba mu uslov da li je input == int.
        if (guess >= 1 && guess <= 20)
        {
            if (guess < randomNumber){
                printf("\nSorry, %d is wrong. My number is larger then that.\n", guess);
                tryCount--;
            }
            else if (guess > randomNumber){
                printf("\nSorry, %d is wrong. My number is lesser then that.\n", guess);
                tryCount--;
            }
            else if (guess == randomNumber){
                printf("\nConratulations, %d is correct! You won!.\n\n", guess);
                break;
            }
        }
        else
            printf("\nWrong input. Please enter a number between 1 and 20.\n\n");

        //poslednji uslov koji proverava. ako se ne stavi if
        // izvrsava ga svaki put za for loop. moze da se stavi i izvan for loopa
        // pre return 0. sve jedno je.

        if (tryCount == 0)
            printf("\nSorry, you ran out of tries.\n\n");
    }

return 0;
}
