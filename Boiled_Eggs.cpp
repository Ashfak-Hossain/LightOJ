#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int testcase;
    cin >> testcase;

    for (int t = 1; t <= testcase; t++)
    {
        int n, P, Q;
        cin >> n >> P >> Q;

        int sumOfWeight = 0, counter = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            if (counter + 1 <= P && sumOfWeight + x <= Q)
            {
                sumOfWeight += x;
                counter++;
            }
        }
        cout << "Case " << t << ": " << counter << endl;
    }

    return 0;
}