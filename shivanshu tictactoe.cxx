#include <iostream>
using namespace std;
void drawBoard(const char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
}
bool checkWin(const char board[3][3], char player)
{
    // Check rows and columns
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}
//Problem Solving and Programming | PAGE   5
//Skill Based
int main()
{
    char board[3][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};
    char player = 'X';
    cout << "\n\n>>>>  Game Guide  <<<<\n\n"
         << endl;
    cout << "Player 1 = X & Player 2 = O" << endl;
    cout << "Enter the row and column number to place your move." << endl;
    cout << "For example, if you want to place your move in the first row and second 
        column,
        enter 0 1\n\n " << endl; 
        while (true)
    {
        drawBoard(board);
        int x, y;
        cout << "Player " << player << ", enter your move (row and column): ";
        cin >> x >> y;
        if (x < 0 || x > 2 || y < 0 || y > 2 || board[x][y] != '-')
        {
            cout << "Invalid move, try again." << endl;
            continue;
        }
        board[x][y] = player;
        if (checkWin(board, player))
        {
            cout << "Player " << player << " wins!" << endl;
            break;
        }
        player = (player == 'X') ? 'O' : 'X'; // Switch player
    }
    return 0;
}