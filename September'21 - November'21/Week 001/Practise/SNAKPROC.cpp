#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n,i;
        bool flag;
        cin>>n>>s;
        for(i=0; i<n; i++){
            if(s[i]=='T'){
                flag = 0;
                break;
            }
            else if(s[i]=='H'){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            cout<<"Invalid"<<endl;
            continue;
        }
        for(i=0; i<n; i++){
            if(s[i]=='H'){
                if(flag==0)
                    break;
                else
                    flag = 0;   
            }
            else if(s[i]=='T'){
                if(flag==1)
                    break;
                else
                    flag = 1;   
            }
        }
        if( (i!=n) || (flag==0) )
            cout<<"Invalid";
        else
            cout<<"Valid";
        cout<<endl;
    }
    return 0;
}