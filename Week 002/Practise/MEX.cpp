#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
int hsh[N];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < N; i++)
            hsh[i] = 0;
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            hsh[a[i]]++;
        }
        int x;
        for (int i = 0; i < N && k > 0; i++)
        {
            if (hsh[i] == 0)
            {
                hsh[i]++;
                k--;
            }
        }
        for (int i = 0; i < N; i++)
        {
            if (hsh[i] == 0)
            {
                x = i;
                break;
            }
        }
        cout << x << endl;
    }
    return 0;
}