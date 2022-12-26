#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (m == 1 or n == 1)
        {
            cout << "Case " << i << ": " << max(n, m) << endl;
        }
        else if (n == 2 or m == 2)
        {
            cout << "Case " << i << ": " << ((m * n) / 8) * 4 + (((m * n) % 8) >= 4 ? 4 : (m * n) % 8) << endl;
        }
        else
        {
            cout << "Case " << i << ": " << (n * m + 1) / 2 << endl;
        }
        i++;
    }

    return 0;
}