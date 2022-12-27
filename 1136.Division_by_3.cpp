#include <bits/stdc++.h>
#define ll long long

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int testCase;
ll a, b;

ll numbers_divisible_by_3_from_1_to_n(int n)
{
    if (n == 0)
        return 0;

    int subs;

    if (n % 3 == 0)
    {
        subs = n / 3;
    }
    else
    {
        subs = (n / 3) + 1;
    }
    return n - subs;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    cin >> testCase;

    for (size_t i = 1; i <= testCase; i++)
    {
        cin >> a >> b;
        ll result = numbers_divisible_by_3_from_1_to_n(b) - numbers_divisible_by_3_from_1_to_n(a - 1);
        cout << "Case " << i << ": " << result << endl;
    }

    return 0;
}