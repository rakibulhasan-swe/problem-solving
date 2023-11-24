#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n+6);

        for(ll i=1; i<=n; i++) cin >> v[i];

        if(n==1){
            cout << v[1]-1 << "\n";
        }else{
            vector<ll> v1;
            v1.push_back(1);
            for(ll i=1; i<=n; i++){
                if(v[i] != v1[v1.size()-1]) v1.push_back(v[i]);
            }
            ll res = 0;
            for(int i=0; i<v1.size()-1; i++){
                if(v1[i] < v1[i+1]) res+=(v1[i+1]-v1[i]);
            }
            cout << res << "\n";
        }

    }

    return 0;
}