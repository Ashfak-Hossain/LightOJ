#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int testCase;
    cin >> testCase;

    double pi = 2 * acos(0.0);

    for (size_t i = 1; i <= testCase; i++)
    {

        double R;
        int n;
        cin >> R >> n;

        double r = (R * sin(pi / n * 1.0)) / (1 + sin(pi / n * 1.0));

        cout << setprecision(10); // To get the decimal point number to 10 digits

        cout << "Case " << i << ": " << r << endl;
    }
    return 0;
}