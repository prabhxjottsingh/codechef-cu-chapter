#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int a[26] = {0}, b[26] = {0}, i;
        cin >> s;
        int n = s.length();
        for (int i = 0; i < n / 2; i++)
            a[s[i] - 'a']++;
        if (n % 2 == 0)
        {
            for (i = n / 2; i < n; i++)
                b[s[i] - 'a']++;
        }
        else
        {
            for (i = n / 2 + 1; i < n; i++)
                b[s[i] - 'a']++;
        }
        for (i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
            {
                cout << "NO";
                break;
            }
        }
        if (i == 26)
            cout << "YES";
        cout << endl;
    }
    return 0;
}