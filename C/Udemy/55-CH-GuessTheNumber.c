//URADJEN NA BRZINU IZ KREVETA, PA JE MALO ZAKRPLJEN
//NIJE KAKO MOZE LEPO DA SE URADI

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand() % 21;

    printf("This is a guessing game.\n");
    printf("You have to guess a random number between 0 and 20\n");
    printf("\n");


    int tryCount = 5;
    int guess = 0;

    while(tryCount > 0)
    {
        printf("You have %d guesses left.\n", tryCount);
        printf("Enter number: ");
        scanf("%d", &guess);
        printf("\n");

        if (guess > randomNumber && tryCount > 1)
        //stavljeno vece od jedan da ne bi pitao ponovo, pri poslednjem izvrsavanju lupa
        //tj kada broj pokusaja ostane 0.
        //MISLIM DA MOZE I BOLJE DA SE RESI!
            printf("Sorry, %d is wrong. My number is less then that.\n", guess);
        else if(guess < randomNumber && tryCount > 1)
            printf("Sorry, %d is wrong. My number is larger then that.\n", guess);
        else if (guess == randomNumber)
        {
            printf("Congratulations, %d is correct!\n", guess);
            break;
        }
        else
        {
            printf("Sorry, you ran out of tries.\n");
            break;
        }
        tryCount--;
    }
return 0;
}
