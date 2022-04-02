#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, dad = 0, son = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        if (k > n / 2)
            k = n - k;
        for (int i = 0; i < k; i++)
        {
            son = son + a[i];
        }
        for (int i = k; i < n; i++)
        {
            dad = dad + a[i];
        }
        cout << abs(dad - son) << endl;
    }
    return 0;
}