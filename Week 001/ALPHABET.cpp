#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int a[26] = {0};
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i] - 'a']++;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int i;
        string str;
        cin >> str;
        for (i = 0; i < str.length(); i++)
        {
            if (a[str[i] - 'a'] == 0)
            {
                cout << "No";
                break;
            }
        }
        if (i == str.length())
            cout << "Yes";
        cout << endl;
    }
    return 0;
}