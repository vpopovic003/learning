#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


void drawBoard(char tablaf[]);
char markBoard(char tablaf[], int playerId);
int checkForWin(char tablaf[]);

int main()
{
    char tabla[] = {'7','8','9','4','5','6','1','2','3'};
    bool gameEnd = false;
    int winner = 0;
    int playerId;


    while (gameEnd == false)
    {

        for (playerId = 1; playerId < 3; playerId++)
        {
            drawBoard(tabla);
            markBoard(tabla, playerId);
            winner = checkForWin(tabla);

            if (winner == 1)
            {
                drawBoard(tabla);
                printf("\aPLAYER %d WINS!\n\n", playerId);
                gameEnd = true;
                break;
            }
            if (winner == 2)
            {
                drawBoard(tabla);
                printf("\aTHE GAME IS DRAW!\n\n");
                gameEnd = true;
                break;
            }

        } //for loop
    } // while setEnd loop

}

void drawBoard(char tablaf[])
{
    system("cls");

    printf("TIC TAC TOE\n\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c\n", tablaf[0],tablaf[1],tablaf[2]);
    printf("___|___|___\n");

    printf("   |   |   \n");
    printf(" %c | %c | %c\n", tablaf[3],tablaf[4],tablaf[5]);
    printf("___|___|___\n");

    printf("   |   |   \n");
    printf(" %c | %c | %c\n", tablaf[6],tablaf[7],tablaf[8]);
    printf("   |   |   \n\n");
}


char markBoard (char tablaf[10], int playerId)
{
    int playerInput;
    bool loop = false;
    char playerSign;

    while (loop == false)
    {
        printf("Player %d, enter a number: ", playerId);
        scanf("%d", &playerInput);

        if (playerId == 1)
            playerSign = 'X';
        if (playerId == 2)
            playerSign = 'O';

        if (playerInput == 1 && tablaf[6] == '1')
        {
            tablaf[6] = playerSign;
            loop = true;
        }
        else if (playerInput == 2 && tablaf[7] == '2')
        {
            tablaf[7] = playerSign;
            loop = true;
        }
        else if (playerInput == 3 && tablaf[8] == '3')
        {
            tablaf[8] = playerSign;
            loop = true;
        }
        else if (playerInput == 4 && tablaf[3] == '4')
        {
            tablaf[3] = playerSign;
            loop = true;
        }
        else if (playerInput == 5 && tablaf[4] == '5')
        {
            tablaf[4] = playerSign;
            loop = true;
        }
        else if (playerInput == 6 && tablaf[5] == '6')
        {
            tablaf[5] = playerSign;
            loop = true;
        }
        else if (playerInput == 7 && tablaf[0] == '7')
        {
            tablaf[0] = playerSign;
            loop = true;
        }
        else if (playerInput == 8 && tablaf[1] == '8')
        {
            tablaf[1] = playerSign;
            loop = true;
        }
        else if (playerInput == 9 && tablaf[2] == '9')
        {
            tablaf[2] = playerSign;
            loop = true;
        }
        else
            printf("Invalid move!\n");
        }
    return tablaf[10];
}


int checkForWin(char tablaf[])
{
    int winner = 0;
//Player1
//vodoravno
    if (tablaf[0] ==  tablaf[1] && tablaf[2] == tablaf[3])
        winner = 1;
    else if (tablaf[3] ==  tablaf[4] && tablaf[4] == tablaf[5])
        winner = 1;
    else if (tablaf[6] ==  tablaf[7] && tablaf[7] == tablaf[8])
        winner = 1;
//uspravno
    else if (tablaf[0] ==  tablaf[3] && tablaf[3] == tablaf[6])
        winner = 1;
    else if (tablaf[1] ==  tablaf[4] && tablaf[4] == tablaf[7])
        winner = 1;
    else if (tablaf[2] ==  tablaf[5] && tablaf[5] == tablaf[8])
        winner = 1;
//dijagonalno
    else if (tablaf[0] ==  tablaf[4] && tablaf[4] == tablaf[8])
        winner = 1;
    else if (tablaf[2] ==  tablaf[4] && tablaf[4] == tablaf[6])
        winner = 1;

    else if (tablaf[0] != '7' && tablaf[1] != '8' && tablaf[2] != '9' &&
        tablaf[3] != '4' && tablaf[4] != '5' && tablaf[5] != '6' &&
        tablaf[6] != '1' && tablaf[7] != '2' && tablaf[8] != '3')
        winner = 2;

    return winner;

}
