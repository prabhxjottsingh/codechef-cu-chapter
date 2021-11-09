//Problem Link: https://www.codechef.com/CUPA2101/problems/REMCHR/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        stack<char> str;

        for(auto x:s){
            if(str.empty() || str.top()!=x)
                str.push(x);
            else
                str.pop();
        }
        cout<<str.size();
        cout<<endl;
    }

}