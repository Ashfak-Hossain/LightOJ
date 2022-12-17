#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int sum(int a, int b)
{
    return a + b;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int cases;
    cin >> cases;

    for (int i = 1; i <= cases; ++i)
    {
        int a, b;

        cin >> a >> b;

        int ans = sum(a, b);

        cout << "Case " << i << ": " << ans << endl;
    }

    return 0;
}