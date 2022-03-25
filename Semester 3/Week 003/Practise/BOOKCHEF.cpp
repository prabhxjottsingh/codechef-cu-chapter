//Problem Link:https://www.codechef.com/CUPP2101/problems/BOOKCHEF

#include <bits/stdc++.h>
using namespace std;

bool Sorting(const pair<int, string> &a,
             const pair<int, string> &b)
{
    return (a.first > b.first);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    vector<pair<int, string>> listSpecial, listNormal;

    for (int i = 0; i < m; i++)
    {
        int f, p;
        string s;
        cin >> f >> p >> s;
        if (find(a.begin(), a.end(), f) != a.end())
            listSpecial.push_back(make_pair(p, s));
        else
            listNormal.push_back(make_pair(p, s));
    }

    sort(listSpecial.begin(), listSpecial.end(), Sorting);
    sort(listNormal.begin(), listNormal.end(), Sorting);

    for (auto i : listSpecial)
        cout << i.second << endl;

    for (auto i : listNormal)
        cout << i.second << endl;
}