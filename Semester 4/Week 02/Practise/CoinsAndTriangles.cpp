#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define mxe(v) *max_element(all(v))
#define mne(v) *min_element(all(v))
#define oneDay ios_base::sync_with_stdio(false);cin.tie(NULL);

vector<ll> st;
    
void setOfTrinalges(){
    ll x = 0;
    for(ll i = 1; x <= 1e12; i++){
        st.push_back(x);
        x += i;
    }
}

void solve(){
    ll n;
    cin >> n;
    auto itr = lower_bound(all(st), n) - st.begin();
    if(st[itr] > n){
        itr--;
    }
    cout << itr;
}

int main(){
    setOfTrinalges();
    oneDay
    ll tc = 1;
    cin >> tc;
    while(tc--){
        solve();
        cout << endl;
    }
    return 0;
}
