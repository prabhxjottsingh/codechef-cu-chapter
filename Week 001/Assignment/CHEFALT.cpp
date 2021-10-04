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
        int evenIndex = 0, oddIndex = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 == 0)
                evenIndex = evenIndex + a[i];
            else
                oddIndex = oddIndex + a[i];
        }
        cout << max(oddIndex, evenIndex) << endl;
    }
    return 0;
}