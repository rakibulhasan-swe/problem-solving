#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        ll n;
        cin >> n;
        vector<ll>v(n);
        for(ll &i: v) cin >> i;

        ll q;
        cin >> q;

        for(ll i=0; i<q; i++){
            ll l, k, ans = -1;
            cin >> l >> k;
            ll x = v[l-1];
            for(ll j=l-1; j<n; j++){
                x=x&v[j];
                if(x>=k)
                    ans = j+1;
            }
            cout << ans << " ";
        }
        cout << "\n";
    }


    return 0;
}

