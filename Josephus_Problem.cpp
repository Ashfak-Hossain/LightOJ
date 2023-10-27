/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 27/10/2023 19:37:17
 **/
#include <bits/stdc++.h>

using namespace std;

long long n, k;

long long fun(long long n)
{
    if (n == 1)
        return 1;
    return (fun(n - 1) + k - 1) % n + 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {

        cin >> n >> k;
        cout << "Case " << i << ": ";
        cout << fun(n) << endl;
    }

    return 0;
}