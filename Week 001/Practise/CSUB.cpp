#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        long long one = 0;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one++;
        }
        cout << one * (one + 1) / 2 << endl;
    }
    return 0;
}