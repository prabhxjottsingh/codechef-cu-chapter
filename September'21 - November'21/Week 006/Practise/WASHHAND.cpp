//Problem Link: https://www.codechef.com/CUPP2101/problems/WASHHAND

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, j, n, d, p, c, k;

    cin >> t;
    while (t--)
    {
        cin >> n;

        string s;
        cin >> s;
        cin.ignore();
        cin >> d;
        k = 1000000000 + 7;
        vector<int> v;
        vector<int>::iterator it;

        int b[n];
        for (i = 0; i < n; i++)
        {
            b[i] = 1000000;
        }

        for (i = 0; i < d; i++)
        {
            cin >> p;
            b[p - 1] = i + 1;
        }

        if (s[0] == '1' && s[1] == '0')
        {
            v.push_back(0);
        }

        for (i = 1; i < n - 1; i++)
        {
            if (s[i] == '1' && (s[i - 1] == '0' || s[i + 1] == '0'))
            {
                v.push_back(i);
            }
        }

        if (s[n - 1] == '1' && s[n - 2] == '0')
        {
            v.push_back(n - 1);
        }

        v.push_back(-1);

        for (j = 1; j <= d; j++)
        {
            if (v[0] == -1)
            {
                break;
            }
            else
            {
                while (v[0] != -1)
                {

                    if (s[v[0] - 1] == '0' && b[v[0]] > j && v[0] > 0)
                    {
                        s[v[0] - 1] = '1';
                        v.push_back(v[0] - 1);
                    }

                    if (s[v[0] + 1] == '0' && b[v[0] + 1] > j && v[0] < n - 1)
                    {

                        s[v[0] + 1] = '1';
                        v.push_back(v[0] + 1);
                    }

                    it = v.begin();
                    v.erase(it);
                }
                v.push_back(-1);
                it = v.begin();
                v.erase(it);
            }
        }
        c = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                c = c + 1;
            }
        }
        c = c % k;
        cout << c << endl;
    }
}