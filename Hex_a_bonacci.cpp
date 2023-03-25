#include <bits/stdc++.h>

using namespace std;

#define ll long long

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

ll t, a, b, c, d, e, f, n;

ll arr[10005];

int fn(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            arr[i] = a;
            continue;
        }
        if (i == 1)
        {
            arr[i] = b;
            continue;
        }
        if (i == 2)
        {
            arr[i] = c;
            continue;
        }
        if (i == 3)
        {
            arr[i] = d;
            continue;
        }
        if (i == 4)
        {
            arr[i] = e;
            continue;
        }
        if (i == 5)
        {
            arr[i] = f;
            continue;
        }
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4] + arr[i - 5] + arr[i - 6];
        arr[i] = arr[i] % 10000007;
    }

    return arr[n];
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    ll ans;

    cin >> t;

    for (ll i = 1; i <= t; i++)
    {

        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        cin >> e;
        cin >> f;
        cin >> n;

        ans = fn(n);
        ans %= 10000007;
        cout << "Case " << i << ": " << ans << endl;
    }

    return 0;
}