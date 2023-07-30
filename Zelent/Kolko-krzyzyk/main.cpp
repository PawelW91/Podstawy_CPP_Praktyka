#include <iostream>

using namespace std;

int main()
{
char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
void displayBoard() {
    cout << "  0 1 2" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
void getMove(char player) {
    int row, col;
    cout << "Player " << player `oaicite:{"index":0,"invalid_reason":"Malformed citation << \", enter the row and column of your move (e.g. 2 1): \";\n    cin >> row >>"}` col;
    board[row][col] = player;
}

}
