#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int cases, num;
    cin >> cases;
    for (int i = 1; i <= cases; i++)
    {
        cin >> num;
        cout << "Case " << i << ": " << ((__builtin_popcount(num) & 1) ? "odd" : "even") << "\n";
    }

    return 0;
}
