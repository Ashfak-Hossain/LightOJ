#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int testCase;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        long long seconds, root, lackings, row, column;

        cin >> seconds;

        root = ceil(sqrt(seconds * 1.0));
        lackings = root * root - seconds;

        if (lackings < root)
        {
            row = root;
            column = lackings + 1;
        }

        else
        {
            column = root;
            row = seconds - (root - 1) * (root - 1);
        }
        if (root % 2 == 0)
        {
            long long temp = column;
            column = row;
            row = temp;
        }

        cout << "Case " << i << ": " << column << " " << row << endl;
    }

    return 0;
}