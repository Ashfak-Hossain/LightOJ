#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

const int N = 9;

bool findEmptyLocation(int board[N][N], int &r, int &cl)
{
    for (r = 0; r < N; r++)
    {
        for (cl = 0; cl < N; cl++)
        {
            if (board[r][cl] == 0)
            {
                return true;
            }
        }
    }
    return false;
}

bool isRowValid(int board[N][N], int r, int num)
{
    for (int cl = 0; cl < N; cl++)
    {
        if (board[r][cl] == num)
        {
            return false;
        }
    }
    return true;
}

bool isColValid(int board[N][N], int cl, int num)
{
    for (int r = 0; r < N; r++)
    {
        if (board[r][cl] == num)
        {
            return false;
        }
    }
    return true;
}

bool isBoxValid(int board[N][N], int boxStartRow, int boxStartCol, int num)
{
    for (int r = 0; r < 3; r++)
    {
        for (int cl = 0; cl < 3; cl++)
        {
            if (board[r + boxStartRow][cl + boxStartCol] == num)
            {
                return false;
            }
        }
    }
    return true;
}

bool isNumValid(int board[N][N], int r, int cl, int num)
{
    return isRowValid(board, r, num) && isColValid(board, cl, num) && isBoxValid(board, r - r % 3, cl - cl % 3, num);
}

bool solveSudoku(int board[N][N])
{
    int r, cl;
    if (!findEmptyLocation(board, r, cl))
    {
        return true;
    }
    for (int num = 1; num <= 9; num++)
    {
        if (isNumValid(board, r, cl, num))
        {
            board[r][cl] = num;
            if (solveSudoku(board))
            {
                return true;
            }
            board[r][cl] = 0;
        }
    }
    return false;
}

void printBoard(int board[N][N])
{
    for (int r = 0; r < N; r++)
    {
        for (int cl = 0; cl < N; cl++)
        {
            cout << board[r][cl];
        }
        cout << endl;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int board[N][N];
    for (int r = 0; r < N; r++)
    {
        for (int cl = 0; cl < N; cl++)
        {
            char c;
            cin >> c;
            if (c == '.')
            {
                board[r][cl] = 0;
            }
            else
            {
                board[r][cl] = c - '0';
            }
        }
    }
    if (solveSudoku(board))
    {
        printBoard(board);
    }
    return 0;
}