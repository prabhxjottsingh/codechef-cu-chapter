#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

struct Tree
{
    int height, growthRate;
};

void solve()
{
    int N, W, L;
    cin >> N >> W >> L;
    vector<Tree> arr(N);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].height >> arr[i].growthRate;
    }

    auto check = [&](int months)
    {
        int totalWood = 0;
        for (int i = 0; i < N; i++)
        {
            if (months >= ((L - arr[i].height + arr[i].growthRate - 1) / arr[i].growthRate))
            {
                totalWood += (arr[i].height);
                if (totalWood >= W)
                    return true;
                totalWood += (months * arr[i].growthRate);
                if (totalWood >= W)
                    return true;
            }
            if (totalWood >= W)
                return true;
        }
        return false;
    };
    int ans = 0;
    int low = 0, high = 1e18 + 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        bool possible = check(mid);
        if (possible)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}