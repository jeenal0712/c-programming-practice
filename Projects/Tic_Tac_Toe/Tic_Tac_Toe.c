#include <stdio.h>
void displayBoard(char board[3][3]);
void makeMove(char board[3][3], char player);
char checkWinner(char board[3][3]);
int main(){
    char playAgain;

    do
    {
        char board[3][3];

        printf("\n=====================\n");
        printf("    TIC TAC TOE\n");
        printf("=====================\n");

        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                board[i][j] = ' ';
            }
        }

        displayBoard(board);

        char player;

        for (int i = 0; i < 9; i++)
        {
            if (i % 2 == 0)
            {
                player = 'X';
            }
            else
            {
                player = 'O';
            }

            makeMove(board, player);

            displayBoard(board);

            char winner = checkWinner(board);

            if (winner == '0')
            {
                break;
            }

            if (i == 8 && winner != '0')
            {
                printf("DRAW!\n");
            }
        }

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nThanks for playing!\n");

    return 0;
}
void displayBoard(char board[3][3]) {
    printf("\n");
    
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);

        if (i < 2) {
            printf("---|---|---\n");
        }
    }
}
void makeMove(char board[3][3], char player){
    int p;
    printf("\n%c's turn\n", player);
    printf("Enter the position:");
    scanf("%d",&p);

    if (p < 1 || p > 9)
    {
        printf("Invalid position!/n");
        makeMove(board,player);
        return;
    }
    
    int row = (p - 1) / 3;
    int column = (p - 1) % 3;

    if (board[row][column]==' ')
    {
        board[row][column]=player;
    }

    else
    {
        printf("Position Used!\n");
        makeMove(board,player);
    }
}
char checkWinner(char board[3][3]){
    for (int i = 0; i <3; i++)
    {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            printf("Winner is %c\n",board[i][0]);
            return '0';
        }
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            printf("Winner is %c\n",board[0][i]);
            return '0';
        }
    } 
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        printf("Winner is %c\n",board[0][0]);
        return '0';
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        printf("Winner is %c\n",board[0][2]);
        return '0';
    }
    return ' ';
}