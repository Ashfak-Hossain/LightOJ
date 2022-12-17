#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int testCase, n;
    cin >> testCase;

    while (testCase--)
    {
        cin >> n;

        if (n > 10)
            cout << "10 " << n - 10 << endl;
        else
            cout << "0 " << n << endl;
    }

    return 0;
}