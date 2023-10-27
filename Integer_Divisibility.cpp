/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 27/10/2023 11:35:23
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {

        int n;
        cin >> n;

        int digit;
        cin >> digit;

        int r = 0;

        int ans = 0;

        while (true)
        {
            r = (r * 10 + digit) % n;
            ans++;
            if (r == 0)
                break;
        }
        cout << "Case " << i << ": ";
        cout << ans << endl;
    }

    return 0;
}