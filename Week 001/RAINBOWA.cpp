#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n];
        bool flag = true;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (a[0] == 1 && a[n / 2] == 7)
        {
            for (int i = 0; i < n / 2; i++)
            {
                if ((a[i] != a[n - 1 - i]) || (a[i + 1] - a[i] > 1))
                {
                    flag = false;
                    break;
                }
            }
        }
        else
            flag = 0;
        if (flag)
            cout << "yes";
        else
            cout << "no";
        cout << endl;
    }
    return 0;
}