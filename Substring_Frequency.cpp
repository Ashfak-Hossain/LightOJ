#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

const int MAXN = 1000005;

int T, n, m, k;
char A[MAXN], B[MAXN];
int pi[MAXN];

void prefix_function()
{
    pi[0] = -1;
    int j = -1;
    for (int i = 1; i < m; i++)
    {
        while (j >= 0 && B[j + 1] != B[i])
            j = pi[j];
        if (B[j + 1] == B[i])
            j++;
        pi[i] = j;
    }
}

int kmp()
{
    prefix_function();
    int j = -1, ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (j >= 0 && B[j + 1] != A[i])
            j = pi[j];
        if (B[j + 1] == A[i])
            j++;
        if (j == m - 1)
        {
            ans++;
            j = pi[j];
        }
    }
    return ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        cin >> A >> B;
        n = strlen(A);
        m = strlen(B);
        k = kmp();
        cout << "Case " << t << ": " << k << endl;
    }

    return 0;
}