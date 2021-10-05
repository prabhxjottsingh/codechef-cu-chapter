#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mini = INT_MAX;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 1; i < n; i++)
        {
            mini = min(a[i] - a[i - 1], mini);
        }
        cout << mini << endl;
    }
    return 0;
}