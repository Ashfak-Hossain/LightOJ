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

    int x1, y1, x2, y2, m, x, y;
    for (size_t i = 1; i <= testCase; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> m;

        cout << "Case " << i << ": " << endl;

        for (size_t j = 1; j <= m; j++)
        {
            cin >> x >> y;
            if (x > x1 && x < x2 && y > y1 && y < y2)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}