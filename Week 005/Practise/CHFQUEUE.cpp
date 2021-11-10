//Problem Link: https://www.codechef.com/CUPP2101/problems/CHFQUEUE

#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

long long int ans = 0;

int main()
{
    ll n, k;
    ll ans = 1;
    stack<ll> st;
    cin >> n >> k;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    st.push(n - 1);

    for (int i = n - 2; i >= 0; i--)
    {
        while ((!st.empty()) && arr[i] <= arr[st.top()])
            st.pop();
        if (st.empty() == false)
            ans = (ans % mod) * (st.top() % mod - i % mod + 1) % mod;
        st.push(i);
    }
    cout << ans << "\n";

    return 0;
}