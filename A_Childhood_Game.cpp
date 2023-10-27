/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 27/10/2023 11:16:15
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
        string s;
        cin >> s;

        cout << "Case " << i << ": ";

        if (s == "Alice")
        {
            if (n % 3 == 1)
                cout << "Bob" << endl;
            else
                cout << "Alice" << endl;
        }
        else
        {
            if (n % 3 != 0)
                cout << "Bob" << endl;
            else
                cout << "Alice" << endl;
        }
    }

    return 0;
}