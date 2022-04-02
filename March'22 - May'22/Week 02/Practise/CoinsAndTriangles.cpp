#include<bits/stdc++.h>
using namespace std;

vector<long long> st;
    
void setOfTrinalges(){
    long long x = 0;
    for(long long i = 1; x <= 1e12; i++){
        st.push_back(x);
        x += i;
    }
}

void solve(){
    long long n;
    cin >> n;
    auto itr = lower_bound(all(st), n) - st.begin();
    if(st[itr] > n){
        itr--;
    }
    cout << itr;
}

int main(){
    setOfTrinalges();
    long long tc = 1;
    cin >> tc;
    while(tc--){
        solve();
        cout << endl;
    }
    return 0;
}
