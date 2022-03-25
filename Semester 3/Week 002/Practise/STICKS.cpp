#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int count = 0, ans = 1;
        for (int i = n - 1; i >= 1; i--)
        {
            if (a[i] == a[i - 1])
            {
                ans = ans * a[i];
                i--;
                count++;
            }
            if (count == 2)
                break;
        }
        if (count == 1 || count == 0)
            cout << "-1";
        else
            cout << ans;
        cout << endl;
    }
    return 0;
}