#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    double arr[1000001];

    arr[0] = 0;

    for (int i = 1; i <= 1000000; i++)
    {
        arr[i] = arr[i - 1] + log(i);
    }

    int t, base;
    long digits, n;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> n >> base;

        digits = arr[n] / log(base) + 1;
        cout << "Case " << i << ": " << digits << "\n";
    }

    return 0;
}