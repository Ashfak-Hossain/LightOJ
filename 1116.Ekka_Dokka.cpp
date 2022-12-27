#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int t;
    long n, m, w;

    cin >> t;

    for (size_t i = 1; i <= t; i++)
    {
        cin >> w;

        if (w % 2 == 0)
        {
            n = w / 2;
            m = 2;
            while (n % 2 == 0)
            {
                n /= 2;
                m *= 2;
            }
            cout << "Case " << i << ": " << n << " " << m << endl;
        }
        else
            cout << "Case " << i << ": Impossible" << endl;
    }

    return 0;
}