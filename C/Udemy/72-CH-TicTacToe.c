#include <stdio.h>
#include <stdbool.h>


void drawBoard(char drawing[]);
char markBoardP1 (char tablaf[]);
char markBoardP2 (char tablaf[]);
int checkForWin(char tablaf[]);
bool validMoveCheck (char tablaf[], int move);

int main()
{
  char tabla[] = "789456123";

  bool playEnd = false;
  int winner = 0;

 while (playEnd == false)
 {
    drawBoard(tabla);
    markBoardP1(tabla);
    winner = checkForWin(tabla);

    if (winner == 1)
    {
      drawBoard(tabla);
      printf("PLAYER 1 WINS!");
      playEnd = true;
      break;
    }

    drawBoard(tabla);
    markBoardP2(tabla);
    winner = checkForWin(tabla);

    if (winner == 2)
    {
      drawBoard(tabla);
      printf("PLAYER 2 WINS!");
      playEnd = true;
      break;
    }

    /*if (winner == 3)
    {
      drawBoard(tabla);
      printf("THE GAME IS DRAW!");
      playEnd = true;
      break;
    }*/
  }
}

void drawBoard(char tablaf[])
{
  for(int i=0; i < 100;  ++i)
  {
    printf ("\n");
  }                                   //cisti ekran

  printf("  IKS OKS\n\n");
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


char markBoardP1 (char tablaf[10])
{
  int player1;
  bool loop = false;
  bool validMove;

  while (loop == false)
  {
    printf("Player 1, enter a number: ");
    scanf("%d", &player1);

    validMove = validMoveCheck (tablaf, player1);

    if (player1 == 1 && validMove == true)
    {
        tablaf[6] = 'X';
        loop = true;
    }
    if (player1 == 2 && validMove == true)
    {
        tablaf[7] = 'X';
        loop = true;
    }
    if (player1 == 3 && validMove == true)
    {
        tablaf[8] = 'X';
        loop = true;
    }
    if (player1 == 4 && validMove == true)
    {
        tablaf[3] = 'X';
        loop = true;
    }
    if (player1 == 5 && validMove == true)
    {
        tablaf[4] = 'X';
        loop = true;
    }
    if (player1 == 6 && validMove == true)
    {
        tablaf[5] = 'X';
        loop = true;
    }
    if (player1 == 7 && validMove == true)
    {
        tablaf[0] = 'X';
        loop = true;
    }
    if (player1 == 8 && validMove == true)
    {
        tablaf[1] = 'X';
        loop = true;
    }
    if (player1 == 9 && validMove == true)
    {
        tablaf[2] = 'X';
        loop = true;
    }
    if (player1 < 1 || player1 > 9 || validMove == false)
      printf("Invalid move!\n");
  }
  return tablaf[10];
}

char markBoardP2 (char tablaf[10])
{
  int player2;
  bool loop = false;
  bool validMove;

  while (loop == false)
  {
    printf("Player 2, enter a number: ");
    scanf("%d", &player2);

    validMove = validMoveCheck (tablaf, player2);

    if (player2 == 1 && validMove == true)
    {
        tablaf[6] = 'O';
        loop = true;
    }
    if (player2 == 2 && validMove == true)
    {
        tablaf[7] = 'O';
        loop = true;
    }
    if (player2 == 3 && validMove == true)
    {
        tablaf[8] = 'O';
        loop = true;
    }
    if (player2 == 4 && validMove == true)
    {
        tablaf[3] = 'O';
        loop = true;
    }
    if (player2 == 5 && validMove == true)
    {
        tablaf[4] = 'O';
        loop = true;
    }
    if (player2 == 6 && validMove == true)
    {
        tablaf[5] = 'O';
        loop = true;
    }
    if (player2 == 7 && validMove == true)
    {
        tablaf[0] = 'O';
        loop = true;
    }
    if (player2 == 8 && validMove == true)
    {
        tablaf[1] = 'O';
        loop = true;
    }
    if (player2 == 9 && validMove == true)
    {
        tablaf[2] = 'O';
        loop = true;
    }
    if (player2 < 1 || player2 > 9 || validMove == false)
      printf("Invalid move!\n");
  }
  return tablaf[10];
}


int checkForWin(char tablaf[])
{
  int winner;
//Player1
//vodoravno
  if (tablaf[0] == 'X' && tablaf[1] == 'X' && tablaf[2] == 'X')
    winner = 1;
  if (tablaf[3] == 'X' && tablaf[4] == 'X' && tablaf[5] == 'X')
    winner = 1;
  if (tablaf[6] == 'X' && tablaf[7] == 'X' && tablaf[8] == 'X')
    winner = 1;
//uspravno
  if (tablaf[0] == 'X' && tablaf[3] == 'X' && tablaf[6] == 'X')
    winner = 1;
  if (tablaf[1] == 'X' && tablaf[4] == 'X' && tablaf[7] == 'X')
    winner = 1;
  if (tablaf[2] == 'X' && tablaf[5] == 'X' && tablaf[6] == 'X')
    winner = 1;
//dijagonalno
  if (tablaf[0] == 'X' && tablaf[4] == 'X' && tablaf[8] == 'X')
    winner = 1;
  if (tablaf[2] == 'X' && tablaf[4] == 'X' && tablaf[6] == 'X')
    winner = 1;
//Player2
//vodoravno
  if (tablaf[0] == 'O' && tablaf[1] == 'O' && tablaf[2] == 'O')
    winner = 2;
  if (tablaf[3] == 'O' && tablaf[4] == 'O' && tablaf[5] == 'O')
    winner = 2;
  if (tablaf[6] == 'O' && tablaf[7] == 'O' && tablaf[8] == 'O')
    winner = 2;
    //uspravno
  if (tablaf[0] == 'O' && tablaf[3] == 'O' && tablaf[6] == 'O')
    winner = 2;
  if (tablaf[1] == 'O' && tablaf[4] == 'O' && tablaf[7] == 'O')
    winner = 2;
  if (tablaf[2] == 'O' && tablaf[5] == 'O' && tablaf[6] == 'O')
    winner = 2;
    //dijagonalno
  if (tablaf[0] == 'O' && tablaf[4] == 'O' && tablaf[8] == 'O')
    winner = 2;
  if (tablaf[2] == 'O' && tablaf[4] == 'O' && tablaf[6] == 'O')
    winner = 2;

/*    if (tablaf[0] != '7' && tablaf[1] != '8' && tablaf[2] != '9' &&
       tablaf[3] != '4' && tablaf[4] != '5' && tablaf[5] != '6' &&
       tablaf[6] != '1' && tablaf[7] != '2' && tablaf[8] != '3')
    winner = 3; */

  return winner;

}


bool validMoveCheck (char tablaf[10], int move)
{
  bool validCheck = true;

  if (move == 1 && tablaf[6] == 'X')
    validCheck = false;

  if (move == 2 && tablaf[7] == 'X')
    validCheck = false;

  if (move == 3 && tablaf[8] == 'X')
    validCheck = false;

  if (move == 4 && tablaf[3] == 'X')
    validCheck = false;

  if (move == 5 && tablaf[4] == 'X')
    validCheck = false;

  if (move == 6 && tablaf[5] == 'X')
    validCheck = false;

  if (move == 7 && tablaf[0] == 'X')
    validCheck = false;

  if (move == 8 && tablaf[1] == 'X')
    validCheck = false;

  if (move == 9 && tablaf[2] == 'X')
    validCheck = false;

  if (move == 1 && tablaf[6] == 'O')
    validCheck = false;

  if (move == 2 && tablaf[7] == 'O')
    validCheck = false;

  if (move == 3 && tablaf[8] == 'O')
    validCheck = false;

  if (move == 4 && tablaf[3] == 'O')
    validCheck = false;

  if (move == 5 && tablaf[4] == 'O')
    validCheck = false;

  if (move == 6 && tablaf[5] == 'O')
    validCheck = false;

  if (move == 7 && tablaf[0] == 'O')
    validCheck = false;

  if (move == 8 && tablaf[1] == 'O')
    validCheck = false;

  if (move == 9 && tablaf[2] == 'O')
    validCheck = false;

  return validCheck;
}
