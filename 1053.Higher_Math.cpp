#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int tc, a, b, c, cn;
    cin >> tc;

    for (cn = 1; cn <= tc; cn++)
    {
        cin >> a >> b >> c;
        if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a))
        {
            cout << "Case " << cn << ": yes" << endl;
        }

        else
            cout << "Case " << cn << ": no" << endl;
    }

    return 0;
}