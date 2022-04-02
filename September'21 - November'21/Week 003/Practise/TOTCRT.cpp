//Problem Link: https://www.codechef.com/CUPP2101/problems/TOTCRT

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        map<string, int> mp;
        int k = 3;
        while (k--)
        {
            for (int i = 0; i < n; i++)
            {
                int x;
                string str;
                cin >> str >> x;
                mp[str] = mp[str] + x;
            }
        }
        vector<int> finalAns;
        for (auto it = mp.begin(); it != mp.end(); it++)
            finalAns.push_back(it->second);
        sort(finalAns.begin(), finalAns.end());
        for (auto x : finalAns)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
