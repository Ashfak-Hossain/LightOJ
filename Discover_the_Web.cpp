#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int t;
    cin >> t;

    getchar();

    for (int k = 1; k <= t; k++)
    {

        cout << "Case " << k << ":\n";

        stack<string> FORWARD, BACK;

        string str, url;

        FORWARD.push("http://www.lightoj.com/");

        while (1)
        {
            cin >> str;

            string temp;
            if (str == "VISIT")
            {
                cin >> url;

                if (FORWARD.empty())
                {
                    cout << "Ignored"
                         << "\n";
                }
                else
                {
                    temp = FORWARD.top();
                    FORWARD.pop();
                    BACK.push(temp);
                    while (!FORWARD.empty())
                    {
                        FORWARD.pop();
                    }
                    FORWARD.push(url);
                }
                cout << FORWARD.top() << "\n";
            }
            else if (str == "BACK")
            {

                if (BACK.empty())
                    cout << "Ignored" << '\n';
                else
                {
                    temp = BACK.top();
                    BACK.pop();
                    FORWARD.push(temp);

                    cout << FORWARD.top() << '\n';
                }
            }
            else if (str == "FORWARD")
            {
                if (FORWARD.size() < 2)
                    cout << "Ignored" << '\n';
                else
                {
                    temp = FORWARD.top();
                    FORWARD.pop();
                    BACK.push(temp);
                    cout << FORWARD.top() << '\n';
                }
            }
            else if (str == "QUIT")

                break;
        }
    }
    return 0;
}