#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int isFeasible(int start, int end, int sum, vector<int> &prefixSum)
{
    auto getSum = [&](int i, int j)
    {
        if (i == 0)
            return prefixSum[j];
        else
            return prefixSum[j] - prefixSum[i - 1];
    };
    int _end = end;
    int ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int req = (_end - mid + 1) * sum - getSum(mid, _end) - mid;
        if (req <= 0)
        {
            ans = _end - mid + 1;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

void solve()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> lengths(N);
    for (int i = 0; i < N; i++)
        cin >> lengths[i];
    sort(lengths.begin(), lengths.end());
    vector<int> prefixSum(lengths.begin(), lengths.end());
    for (int i = 1; i < N; i++)
        prefixSum[i] += prefixSum[i - 1];

    while (Q--)
    {
        int ans = 0;
        int K;
        cin >> K;
        int endIndex = upper_bound(lengths.begin(), lengths.end(), K - 1) - lengths.begin();

        ans += (N - endIndex);
        ans += isFeasible(0, endIndex - 1, K, prefixSum);
        cout << ans << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
