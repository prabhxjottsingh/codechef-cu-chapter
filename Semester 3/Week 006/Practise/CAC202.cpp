//Problem Link: https://www.codechef.com/CUPP2101/problems/CAC202

 #include<bits/stdc++.h>

    using namespace std;

    #define ll long long

    int main()
    {
       ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t--){
            ll n, x;
            cin>>n;
            stack< ll > missed;
            queue< ll > arrival, booking;
            bool available[n + 1] = {0};

            for(ll i = 1; i <= n; ++i){
                cin>>x;
                arrival.push(x);
                booking.push(i);
            }

            x = 0;

            while(!booking.empty() || !missed.empty()){
                while(!arrival.empty() && arrival.front() < x){
                    available[arrival.front()] = true;
                    arrival.pop();
                    if(!arrival.empty()) x = max(x, arrival.front());
                }
                if(!arrival.empty()){
                    x = max(x, arrival.front());
                    available[arrival.front()] = true;
                }
                while(!missed.empty() && available[missed.top()]){
                    cout<<missed.top()<<" ";
                    missed.pop();
                }
                while(!arrival.empty() && !booking.empty() && booking.front() != arrival.front()){
                    missed.push(booking.front());
                    booking.pop();
                }
                if(!booking.empty()){
                    cout<<booking.front()<<" ";
                    booking.pop();
                }

                if(!arrival.empty()){
                    arrival.pop();
                }
            }
            cout<<"\n";
        }
        return 0;
    }