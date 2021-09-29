#include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{
    return (a + b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << add(a, b) << endl;
    }
    return 0;
}