//Problem Link: https://www.codechef.com/CUPP2101/problems/STACKS


#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll i,n,j;
        cin>>n;
        vector<ll> in, out;
        for(i=0; i<n; i++){
            ll x;
            cin>>x;
            in.push_back(x);
        }
        ll z = 1;
        for(i=0; i<n; i++){
            auto itr = upper_bound(out.begin(),out.end(),in[i]);
            if(itr!=out.end())
                *itr = in[i];
            else
                out.push_back(in[i]);
        }
        cout<<out.size()<<" ";
        for(auto &ans:out)
            cout<<ans<<" ";
        cout<<endl;
    }
}