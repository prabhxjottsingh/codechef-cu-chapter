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
        string str;
        cin >> str;
        int rightOpenBracket = 0, leftOpenBracket = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '(')
                rightOpenBracket++;
            else
                leftOpenBracket++;
        }
        cout << 2 * min(rightOpenBracket, leftOpenBracket) << endl;
    }
    return 0;
}