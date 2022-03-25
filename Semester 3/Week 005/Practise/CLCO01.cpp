//Problem Link: https://www.codechef.com/CUPP2101/problems/CLCO01

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, i;
        cin >> n;
        string root = "/";
        for (i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            if (s == "pwd")
            {
                if (root == "/")
                    cout << root << endl;
                else
                    cout << root << "/" << endl;
            }
            else
            {
                cin >> s;
                if (s[0] != '/')
                {
                    if (root == "/")
                        root += s;
                    else
                        root = root + "/" + s;
                }
                else
                    root = s;
                for (int i = root.find('.'); i != -1; i = root.find('.'))
                {
                    string t(root.begin(), root.begin() + i - 1);
                    string r(root.begin() + i + 2, root.end());
                    int j = t.rfind('/');
                    t = t.substr(0, j);
                    root = t + r;
                }
            }
        }
    }
}