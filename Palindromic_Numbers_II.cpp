#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

void solve(int t)
{

    for (int i = 1; i <= t; i++)
    {

        int rev(0), temp, num;

        cin >> num;

        int x = num;

        while (num > 0)
        {

            temp = num % 10;

            rev = (rev * 10) + temp;

            num /= 10;
        }

        if (x == rev)
        {
            cout << "Case " << i << ": "
                 << "Yes" << endl;
        }
        else
        {
            cout << "Case " << i << ": "
                 << "No" << endl;
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    solve(t);

    return 0;
}