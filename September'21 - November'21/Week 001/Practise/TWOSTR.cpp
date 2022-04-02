#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int x = a.length(), y = b.length(), i;
        if (x != y)
            cout << "No";
        else
        {
            for (i = 0; i < x; i++)
            {
                if (a[i] != b[i] && a[i] != '?' && b[i] != '?')
                {
                    cout << "No";
                    break;
                }
            }
            if (i == x)
                cout << "Yes";
        }
        cout << endl;
    }
    return 0;
}